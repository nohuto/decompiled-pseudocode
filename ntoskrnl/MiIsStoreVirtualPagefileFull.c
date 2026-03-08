/*
 * XREFs of MiIsStoreVirtualPagefileFull @ 0x1406599F8
 * Callers:
 *     MiFillNoReservationCluster @ 0x140637058 (MiFillNoReservationCluster.c)
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreVirtualPagefileFull(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r8d

  result = *(unsigned int *)(a1 + 1192);
  v2 = 0;
  if ( (_DWORD)result )
  {
    LOBYTE(v2) = *(_QWORD *)(*(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1188) + 17056) + 24LL) == 0LL;
    return v2;
  }
  return result;
}
