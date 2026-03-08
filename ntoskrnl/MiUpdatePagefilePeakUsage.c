/*
 * XREFs of MiUpdatePagefilePeakUsage @ 0x140639760
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdatePagefilePeakUsage(_QWORD *a1)
{
  unsigned __int64 v1; // rdx

  v1 = *a1 - a1[3] - 1LL;
  if ( a1[4] < v1 )
    a1[4] = v1;
}
