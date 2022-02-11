// vector.h
// math_lib
//
// Copyright (c) 2022 Paul Godavari. All rights reserved. 


#pragma once


#include <math.h>


//--------------------------------------------------------------------------------------------------

struct v2
{
    union {
        struct {
            float x;
            float y;
        };
        float data[2];
    };
    
    v2& operator +=(const v2& arg);
    v2& operator *=(float scale_factor);
    float Magnitude() const;
};

inline v2 operator *(const v2& lhs, const v2& rhs)
{
    v2 result = { lhs.x * rhs.x, lhs.y * rhs.y };
    return result;
}

inline v2 operator *(float scale_factor, v2 vec)
{
    v2 result = { vec.x * scale_factor, vec.y * scale_factor };
    return result;
}

inline v2 operator *(v2 vec, float scale_factor)
{
    v2 result = scale_factor * vec;
    return result;
}

inline v2 operator +(const v2& lhs, const v2& rhs)
{
    v2 result = { lhs.x + rhs.x, lhs.y + rhs.y };
    return result;
}

inline v2 operator -(const v2& lhs, const v2& rhs)
{
    v2 result = { lhs.x - rhs.x, lhs.y - rhs.y };
    return result;
}

inline v2 operator /(const v2& vec, float divisor)
{
    float scale_factor = 1.0f / divisor;
    v2 result = { vec.x * scale_factor, vec.y * scale_factor };
    return result;
}

inline v2 UnitVector(const v2& vec)
{
    v2 result = vec / vec.Magnitude();
    return result;
}

inline v2& v2::operator +=(const v2& arg)
{
    x += arg.x;
    y += arg.y;
    return *this;
}

inline v2& v2::operator *=(float scale_factor)
{
    x *= scale_factor;
    y *= scale_factor;
    return *this;
}

inline float v2::Magnitude() const
{
    float result = sqrt(x*x + y*y);
    return result;
}


//--------------------------------------------------------------------------------------------------

struct v3
{
    union {
        struct {
            float x;
            float y;
            float z;
        };
        float data[3];
    };
    
    v3& operator +=(const v3& arg);
    v3& operator *=(float scale_factor);
    float Magnitude() const;
};


inline v3 operator *(const v3& lhs, const v3& rhs)
{
    v3 result = { lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z };
    return result;
}

inline v3 operator *(float scale_factor, v3 vec)
{
    v3 result = { vec.x * scale_factor, vec.y * scale_factor, vec.z * scale_factor };
    return result;
}

inline v3 operator *(v3 vec, float scale_factor)
{
    v3 result = scale_factor * vec;
    return result;
}

inline v3 operator +(const v3& lhs, const v3& rhs)
{
    v3 result = { lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z };
    return result;
}

inline v3 operator -(const v3& lhs, const v3& rhs)
{
    v3 result = { lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z };
    return result;
}

inline v3 operator /(const v3& vec, float divisor)
{
    float scale_factor = 1.0f / divisor;
    v3 result = { vec.x * scale_factor, vec.y * scale_factor, vec.z * scale_factor };
    return result;
}

inline v3 UnitVector(const v3& vec)
{
    v3 result = vec / vec.Magnitude();
    return result;
}

inline v3& v3::operator +=(const v3& arg)
{
    x += arg.x;
    y += arg.y;
    z += arg.z;
    return *this;
}

inline v3& v3::operator *=(float scale_factor)
{
    x *= scale_factor;
    y *= scale_factor;
    z *= scale_factor;
    return *this;
}

inline float v3::Magnitude() const
{
    float result = sqrt(x*x + y*y + z*z);
    return result;
}


//--------------------------------------------------------------------------------------------------

struct v4
{
    union {
        struct {
            float x;
            float y;
            float z;
            float w;
        };
        struct {
            float r;
            float g;
            float b;
            float a;
        };
        float data[4];
    };
    
    v4& operator +=(const v4& arg);
    v4& operator *=(float scale_factor);
    float Magnitude() const;
};


inline v4 operator *(const v4& lhs, const v4& rhs)
{
    v4 result = { lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z, lhs.w * rhs.w};
    return result;
}

inline v4 operator *(float scale_factor, v4 vec)
{
    v4 result = { vec.x * scale_factor, vec.y * scale_factor, vec.z * scale_factor, vec.w * scale_factor };
    return result;
}

inline v4 operator *(v4 vec, float scale_factor)
{
    v4 result = scale_factor * vec;
    return result;
}

inline v4 operator +(const v4& lhs, const v4& rhs)
{
    v4 result = { lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z, lhs.w + rhs.w };
    return result;
}

inline v4 operator -(const v4& lhs, const v4& rhs)
{
    v4 result = { lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z, lhs.w - rhs.w };
    return result;
}

inline v4 operator /(const v4& vec, float divisor)
{
    float scale_factor = 1.0f / divisor;
    v4 result = { vec.x * scale_factor, vec.y * scale_factor, vec.z * scale_factor, vec.w * scale_factor };
    return result;
}

inline v4 UnitVector(const v4& vec)
{
    v4 result = vec / vec.Magnitude();
    return result;
}

inline v4& v4::operator +=(const v4& arg)
{
    x += arg.x;
    y += arg.y;
    z += arg.z;
    w += arg.w;
    return *this;
}

inline v4& v4::operator *=(float scale_factor)
{
    x *= scale_factor;
    y *= scale_factor;
    z *= scale_factor;
    w *= scale_factor;
    return *this;
}

inline float v4::Magnitude() const
{
    float result = sqrt(x*x + y*y + z*z + w*w);
    return result;
}


