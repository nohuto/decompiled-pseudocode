/*
 * XREFs of ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C006178C
 * Callers:
 *     ReadDefaultAccelerationCurves @ 0x1C0061350 (ReadDefaultAccelerationCurves.c)
 * Callees:
 *     FastGetProfileValue @ 0x1C0061950 (FastGetProfileValue.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

void __fastcall CDeviceAcceleration::CreateDefaultAcceleratorCurve(
        CDeviceAcceleration *this,
        struct _UNICODE_STRING *a2)
{
  int ProfileValue; // ebx
  int v5; // eax
  _BYTE *v6; // rax
  __m128i si128; // xmm0
  __m128i v8; // xmm1
  __int128 v9; // [rsp+40h] [rbp-68h]
  __int128 v10; // [rsp+50h] [rbp-58h]
  __int64 v11; // [rsp+60h] [rbp-48h]
  __int128 v12; // [rsp+68h] [rbp-40h]
  __int128 v13; // [rsp+78h] [rbp-30h]
  __int64 v14; // [rsp+88h] [rbp-20h]

  if ( a2
    && (ProfileValue = FastGetProfileValue(a2, 12LL, 614LL),
        v5 = FastGetProfileValue(a2, 12LL, 615LL),
        ProfileValue == 40)
    && v5 == 40 )
  {
    v6 = (char *)this + 8;
    *((_OWORD *)this + 1) = v12;
    *((_OWORD *)this + 2) = v13;
    *((_QWORD *)this + 6) = v14;
    *(_OWORD *)((char *)this + 56) = v9;
    *(_OWORD *)((char *)this + 72) = v10;
    *((_QWORD *)this + 11) = v11;
  }
  else
  {
    v6 = (char *)this + 8;
    if ( !*((_BYTE *)this + 8) )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v8 = _mm_load_si128((const __m128i *)&_xmm);
      *((_QWORD *)this + 2) = 0LL;
      *((_QWORD *)this + 3) = 28181LL;
      *((_QWORD *)this + 4) = 81920LL;
      *((_QWORD *)this + 5) = 252969LL;
      *((_QWORD *)this + 6) = 2621440LL;
      *(__m128i *)((char *)this + 56) = si128;
      *(__m128i *)((char *)this + 72) = v8;
      *((_QWORD *)this + 11) = 29081600LL;
    }
  }
  *v6 = 1;
}
