/*
 * XREFs of MiUpdatePagefilePeakUsage @ 0x14063BBDC
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14046D44A (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x14063A1B4 (MiGatherPagefilePages.c)
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
