/*
 * XREFs of ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C005D1C4
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C005D270 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     SetMouseInputRateLimitingTime @ 0x1C01E8690 (SetMouseInputRateLimitingTime.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 __fastcall CMouseSensor::SetInputRateLimitingTime(CMouseSensor *this, unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  _InterlockedExchange64((volatile __int64 *)this + 165, gliQpcFreq.QuadPart * (unsigned __int64)(a2 / 0x3E8) / 0x3E8);
  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 64LL) )
  {
    v8 = 0;
    v6 = &v4;
    v4 = v3;
    v7 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C028EE70, (unsigned __int8 *)dword_1C0263523, 0LL, 0LL, 3u, &v5);
  }
  return 0LL;
}
