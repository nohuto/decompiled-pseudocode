/*
 * XREFs of IPostQuitMessage @ 0x1C000AD64
 * Callers:
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C000AA2C (-TerminateDesktopThreads@@YAXXZ.c)
 *     _PostQuitMessage @ 0x1C000AD40 (_PostQuitMessage.c)
 *     xxxSwitchDesktop @ 0x1C0029904 (xxxSwitchDesktop.c)
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 * Callees:
 *     SetWakeBit @ 0x1C0051920 (SetWakeBit.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     LogQMsg @ 0x1C01D30BC (LogQMsg.c)
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
  SetWakeBit(a1, 264LL);
  return 1LL;
}
