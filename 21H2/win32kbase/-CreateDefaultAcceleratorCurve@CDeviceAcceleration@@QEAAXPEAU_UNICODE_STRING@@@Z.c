/*
 * XREFs of ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C000DDE4
 * Callers:
 *     ReadDefaultAccelerationCurves @ 0x1C000D260 (ReadDefaultAccelerationCurves.c)
 * Callees:
 *     FastGetProfileValue @ 0x1C000E9A0 (FastGetProfileValue.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

void __fastcall CDeviceAcceleration::CreateDefaultAcceleratorCurve(
        CDeviceAcceleration *this,
        struct _UNICODE_STRING *a2)
{
  int ProfileValue; // ebx
  int v5; // eax
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  _OWORD v11[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v12; // [rsp+60h] [rbp-48h]
  _OWORD v13[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v14; // [rsp+88h] [rbp-20h]

  if ( a2
    && (ProfileValue = FastGetProfileValue(a2, 12LL, 614LL, 0LL, v11, 40, 0),
        v5 = FastGetProfileValue(a2, 12LL, 615LL, 0LL, v13, 40, 0),
        ProfileValue == 40)
    && v5 == 40 )
  {
    v6 = v11[1];
    *((_OWORD *)this + 1) = v11[0];
    v7 = v12;
    *((_OWORD *)this + 2) = v6;
    v8 = v13[0];
    *((_QWORD *)this + 6) = v7;
    v9 = v13[1];
    *(_OWORD *)((char *)this + 56) = v8;
    v10 = v14;
    *(_OWORD *)((char *)this + 72) = v9;
  }
  else
  {
    if ( *((_BYTE *)this + 8) )
      goto LABEL_6;
    *((_OWORD *)this + 1) = xmmword_1C024FA10;
    *((_OWORD *)this + 2) = xmmword_1C024FA20;
    *((_QWORD *)this + 6) = qword_1C024FA30;
    *(_OWORD *)((char *)this + 56) = xmmword_1C024F9E8;
    *(_OWORD *)((char *)this + 72) = xmmword_1C024F9F8;
    v10 = qword_1C024FA08;
  }
  *((_QWORD *)this + 11) = v10;
LABEL_6:
  *((_BYTE *)this + 8) = 1;
}
