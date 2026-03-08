/*
 * XREFs of UsbhAllocateTimeoutObject @ 0x1C001B9D8
 * Callers:
 *     UsbhReset1Complete @ 0x1C0002B20 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 *     UsbhDriverResetPort @ 0x1C001B8C0 (UsbhDriverResetPort.c)
 *     UsbhPortConnect @ 0x1C004D100 (UsbhPortConnect.c)
 *     UsbhReset1Timeout @ 0x1C004E0F0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C004E6E0 (UsbhReset2Timeout.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
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
