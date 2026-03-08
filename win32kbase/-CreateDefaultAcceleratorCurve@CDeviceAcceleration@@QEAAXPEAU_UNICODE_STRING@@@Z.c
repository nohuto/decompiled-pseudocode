/*
 * XREFs of ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C0017CAC
 * Callers:
 *     ReadDefaultAccelerationCurves @ 0x1C0017870 (ReadDefaultAccelerationCurves.c)
 * Callees:
 *     FastGetProfileValue @ 0x1C0018890 (FastGetProfileValue.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall CDeviceAcceleration::CreateDefaultAcceleratorCurve(
        CDeviceAcceleration *this,
        struct _UNICODE_STRING *a2)
{
  int ProfileValue; // ebx
  int v5; // eax
  _BYTE *v6; // rax
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __m128i si128; // xmm0
  __m128i v12; // xmm1
  size_t Size; // [rsp+28h] [rbp-80h]
  size_t Sizea; // [rsp+28h] [rbp-80h]
  _OWORD v15[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v16; // [rsp+60h] [rbp-48h]
  _OWORD v17[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v18; // [rsp+88h] [rbp-20h]

  if ( a2
    && (LODWORD(Size) = 40,
        ProfileValue = FastGetProfileValue(a2, v17, Size, 0),
        LODWORD(Sizea) = 40,
        v5 = FastGetProfileValue(a2, v15, Sizea, 0),
        ProfileValue == 40)
    && v5 == 40 )
  {
    v6 = (char *)this + 8;
    v7 = v17[1];
    *((_OWORD *)this + 1) = v17[0];
    v8 = v18;
    *((_OWORD *)this + 2) = v7;
    v9 = v15[0];
    *((_QWORD *)this + 6) = v8;
    v10 = v15[1];
    *(_OWORD *)((char *)this + 56) = v9;
    *(_QWORD *)&v9 = v16;
    *(_OWORD *)((char *)this + 72) = v10;
    *((_QWORD *)this + 11) = v9;
  }
  else
  {
    v6 = (char *)this + 8;
    if ( !*((_BYTE *)this + 8) )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v12 = _mm_load_si128((const __m128i *)&_xmm);
      v16 = 29081600LL;
      *((_QWORD *)this + 2) = 0LL;
      *((_QWORD *)this + 3) = 28181LL;
      *((_QWORD *)this + 4) = 81920LL;
      *((_QWORD *)this + 5) = 252969LL;
      *((_QWORD *)this + 6) = 2621440LL;
      *(__m128i *)((char *)this + 56) = si128;
      si128.m128i_i64[0] = v16;
      *(__m128i *)((char *)this + 72) = v12;
      *((_QWORD *)this + 11) = si128.m128i_i64[0];
    }
  }
  *v6 = 1;
}
