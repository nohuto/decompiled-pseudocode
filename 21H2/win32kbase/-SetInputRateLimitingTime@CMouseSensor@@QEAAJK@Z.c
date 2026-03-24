/*
 * XREFs of ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C0089CD8
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0087870 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     SetMouseInputRateLimitingTime @ 0x1C01AF0F0 (SetMouseInputRateLimitingTime.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

__int64 __fastcall CMouseSensor::SetInputRateLimitingTime(CMouseSensor *this, unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  _InterlockedExchange64((volatile __int64 *)this + 160, gliQpcFreq.QuadPart * (unsigned __int64)(a2 / 0x3E8) / 0x3E8);
  if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 64LL) )
  {
    v8 = 0;
    v6 = &v4;
    v4 = v3;
    v7 = 8;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C022016F, 0, 0, 3u, &v5);
  }
  return 0LL;
}
