/*
 * XREFs of zzzRegisterSystemThread @ 0x1C01E147C
 * Callers:
 *     NtUserRegisterSystemThread @ 0x1C01FBC10 (NtUserRegisterSystemThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E0DC0 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzRegisterSystemThread(char a1)
{
  if ( (a1 & 1) != 0 )
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x40u;
  if ( (a1 & 2) != 0 )
  {
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x80u;
    if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL)
      || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 48LL) )
    {
      zzzJournalAttach(gptiCurrent, 0);
      zzzJournalAttach(gptiCurrent, 1);
    }
  }
  return 1LL;
}
