/*
 * XREFs of IvtAllocateDomain @ 0x1403AF430
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvInitializeSpinLock @ 0x1403AF45C (ExtEnvInitializeSpinLock.c)
 */

__int64 __fastcall IvtAllocateDomain(__int64 a1, __int64 a2)
{
  ExtEnvInitializeSpinLock(a2 + 72);
  *(_QWORD *)(a2 + 64) = a2 + 56;
  *(_QWORD *)(a2 + 56) = a2 + 56;
  return 0LL;
}
