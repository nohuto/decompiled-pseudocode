/*
 * XREFs of IPostQuitMessage @ 0x1C00AD668
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     NtUserPostQuitMessage @ 0x1C00ADE50 (NtUserPostQuitMessage.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00F0720 (-TerminateDesktopThreads@@YAXXZ.c)
 * Callees:
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     LogQMsg @ 0x1C01D9BDC (LogQMsg.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _QWORD v5[21]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = a2;
  if ( (_DWORD)gMsgQLog )
  {
    memset(v5, 0, 0xA0uLL);
    v5[5] = 0LL;
    LODWORD(v5[3]) = 18;
    v5[4] = v3;
    LogQMsg(v5);
  }
  EtwTraceWakePump(a1, 0LL, 18LL);
  *(_DWORD *)(a1 + 488) |= 0x40000000u;
  *(_DWORD *)(a1 + 584) = v3;
  SetWakeBit(a1, 0x108u);
  return 1LL;
}
