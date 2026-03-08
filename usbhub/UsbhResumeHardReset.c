/*
 * XREFs of UsbhResumeHardReset @ 0x1C003D6C8
 * Callers:
 *     UsbhFdoSetD0Warm @ 0x1C003C220 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001EC80 (UsbhDispatch_HardResetEvent.c)
 */

__int64 __fastcall UsbhResumeHardReset(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11

  Log(a1, 8, 1381192818, 0LL, 0LL);
  return UsbhDispatch_HardResetEvent(v3, v2, v1 + 11);
}
