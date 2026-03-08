/*
 * XREFs of RtlTryEndReadTickLock @ 0x140237140
 * Callers:
 *     KeQueryCpuSetInformation @ 0x14084EA1C (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
