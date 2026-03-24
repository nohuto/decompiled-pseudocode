/*
 * XREFs of MiFinishResume @ 0x1403841B0
 * Callers:
 *     <none>
 * Callees:
 *     MiReferencePageRuns @ 0x14022F500 (MiReferencePageRuns.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x140303EF8 (PsGetNextPartition.c)
 *     MiDereferencePageRunsEx @ 0x14031C868 (MiDereferencePageRunsEx.c)
 *     MiPurgeZeroList @ 0x14038425C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140384914 (MiPurgePartitionStandby.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rsi
  _QWORD *i; // rcx
  _QWORD *NextPartition; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdi

  v5 = MiReferencePageRuns((__int64)&MiSystemPartition, 0, a3, a4);
  for ( i = 0LL; ; i = v8 )
  {
    NextPartition = PsGetNextPartition(i);
    v8 = NextPartition;
    if ( !NextPartition )
      break;
    v9 = *NextPartition;
    if ( a1 )
    {
      MiPurgePartitionStandby(*NextPartition, a1);
      *(_BYTE *)(v9 + 4828) = 0;
    }
    MiPurgeZeroList(v9);
  }
  if ( v5 )
    MiDereferencePageRunsEx(v5, 1);
  _InterlockedDecrement(&dword_140C4EED8);
  stru_140C4E6E8.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_140C4E6D0, 0, 0);
}
