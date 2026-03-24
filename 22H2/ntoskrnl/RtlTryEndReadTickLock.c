/*
 * XREFs of RtlTryEndReadTickLock @ 0x14035D0AC
 * Callers:
 *     KeQueryCpuSetInformation @ 0x1407C6FA8 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
