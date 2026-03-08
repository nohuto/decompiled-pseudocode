/*
 * XREFs of MiFreeReservationRun @ 0x1407659CC
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x14067E58C (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x140765980 (MiFreeReservationRuns.c)
 * Callees:
 *     MiGetPageFileHigh @ 0x140201D10 (MiGetPageFileHigh.c)
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 */

void __fastcall MiFreeReservationRun(__int64 a1, __int64 a2)
{
  unsigned __int64 PageFileHigh; // rdi
  __int64 updated; // rax
  bool v6; // zf

  if ( *(_DWORD *)(a2 + 8) )
  {
    PageFileHigh = MiGetPageFileHigh(*(_QWORD *)a2);
    do
    {
      MiReleasePageFileInfo(a1, *(_QWORD *)a2, 0);
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)a2, ++PageFileHigh);
      v6 = (*(_DWORD *)(a2 + 8))-- == 1;
      *(_QWORD *)a2 = updated;
    }
    while ( !v6 );
  }
}
