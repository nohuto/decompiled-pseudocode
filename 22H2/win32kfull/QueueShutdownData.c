/*
 * XREFs of QueueShutdownData @ 0x1C01B3328
 * Callers:
 *     NtUserShutdownBlockReasonCreate @ 0x1C0048B40 (NtUserShutdownBlockReasonCreate.c)
 *     xxxSetInformationThread @ 0x1C00699B0 (xxxSetInformationThread.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

void __fastcall QueueShutdownData(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( gspwndBSDR )
  {
    if ( a1 == ghwndBlocking
      || a1 == 0xFFFF
      || (v4 = ValidateHwndEx(a1, 0LL, 0LL)) != 0
      && (v5 = *(_QWORD *)(v4 + 40), *(_DWORD *)(v5 + 236) == 1)
      && (*(_BYTE *)(v5 + 232) & 0x40) == 0 )
    {
      PostEventMessageEx(
        *(struct tagTHREADINFO **)(gspwndBSDR + 16),
        *(struct tagQ **)(*(_QWORD *)(gspwndBSDR + 16) + 432LL),
        0x13u,
        (struct tagWND *)gspwndBSDR,
        0x4Au,
        a2,
        a1,
        0LL);
    }
  }
}
