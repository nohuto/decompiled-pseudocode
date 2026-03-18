/*
 * XREFs of UsbhAllocateTimeoutObject @ 0x1C001B058
 * Callers:
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhDriverResetPort @ 0x1C001AF40 (UsbhDriverResetPort.c)
 *     UsbhReset1Complete @ 0x1C001BA90 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x1C004C820 (UsbhPortConnect.c)
 *     UsbhReset1Timeout @ 0x1C004D800 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C004DDF0 (UsbhReset2Timeout.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 */

__int64 __fastcall UsbhAllocateTimeoutObject(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *Pool2; // rax
  unsigned int v7; // r10d

  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 20LL, 1112885333LL);
  if ( Pool2 )
  {
    *Pool2 = 1867468116;
    v7 = 0;
    Pool2[4] = *(_DWORD *)(a2 + 400);
    *a3 = Pool2;
  }
  else
  {
    *a3 = 0LL;
    Log(a1, 1024, 1635020577, a2, 0LL);
  }
  return v7;
}
