/*
 * XREFs of ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C005FEB0
 * Callers:
 *     ReadDefaultAccelerationCurves @ 0x1C005FBA0 (ReadDefaultAccelerationCurves.c)
 * Callees:
 *     FastGetProfileValue @ 0x1C0060B60 (FastGetProfileValue.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void __fastcall CDeviceAcceleration::CreateDefaultAcceleratorCurve(
        CDeviceAcceleration *this,
        struct _UNICODE_STRING *a2)
{
  int ProfileValue; // ebx
  int v5; // eax
  __int64 v6; // xmm1_8
  __int128 v7; // [rsp+40h] [rbp-68h]
  __int128 v8; // [rsp+50h] [rbp-58h]
  __int64 v9; // [rsp+60h] [rbp-48h]
  __int128 v10; // [rsp+68h] [rbp-40h]
  __int128 v11; // [rsp+78h] [rbp-30h]
  __int64 v12; // [rsp+88h] [rbp-20h]

  if ( a2
    && (ProfileValue = FastGetProfileValue(a2, 12LL, 614LL),
        v5 = FastGetProfileValue(a2, 12LL, 615LL),
        ProfileValue == 40)
    && v5 == 40 )
  {
    *((_OWORD *)this + 1) = v7;
    *((_OWORD *)this + 2) = v8;
    *((_QWORD *)this + 6) = v9;
    *(_OWORD *)((char *)this + 56) = v10;
    v6 = v12;
    *(_OWORD *)((char *)this + 72) = v11;
  }
  else
  {
    if ( *((_BYTE *)this + 8) )
      goto LABEL_6;
    *((_OWORD *)this + 1) = xmmword_1C02947A8;
    *((_OWORD *)this + 2) = xmmword_1C02947B8;
    *((_QWORD *)this + 6) = qword_1C02947C8;
    *(_OWORD *)((char *)this + 56) = xmmword_1C0294780;
    *(_OWORD *)((char *)this + 72) = xmmword_1C0294790;
    v6 = qword_1C02947A0;
  }
  *((_QWORD *)this + 11) = v6;
LABEL_6:
  *((_BYTE *)this + 8) = 1;
}
