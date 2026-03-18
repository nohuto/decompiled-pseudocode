/*
 * XREFs of RtlTryEndReadTickLock @ 0x1402BFD7C
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140851E5C (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
