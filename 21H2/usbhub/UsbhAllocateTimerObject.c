/*
 * XREFs of UsbhAllocateTimerObject @ 0x1C003C2A4
 * Callers:
 *     UsbhBusPnpStart @ 0x1C0037270 (UsbhBusPnpStart.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     memset @ 0x1C001E180 (memset.c)
 */

__int64 __fastcall UsbhAllocateTimerObject(__int64 a1, __int64 a2, int a3)
{
  PVOID PoolWithTag; // rax
  __int64 v7; // rbx

  PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x50uLL, 0x42554855u);
  v7 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    Log(a1, 0x2000, 1768843604, v7, a2);
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)v7 = 1332899156;
    *(_QWORD *)(v7 + 48) = a2;
    *(_DWORD *)(v7 + 72) = a3;
    *(_DWORD *)(v7 + 8) = 1;
  }
  return v7;
}
