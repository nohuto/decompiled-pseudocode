/*
 * XREFs of RtlTryEndReadTickLock @ 0x1402EBB4C
 * Callers:
 *     KeQueryCpuSetInformation @ 0x1407C7088 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
