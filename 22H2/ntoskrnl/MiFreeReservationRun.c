/*
 * XREFs of MiFreeReservationRun @ 0x1406BEA64
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x1406FB1C0 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1406FB270 (MiFreeReservationRuns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14023D6F0 (MiUpdatePageFileHighInPte.c)
 *     MiGetPageFileHigh @ 0x14032BCBC (MiGetPageFileHigh.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
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
