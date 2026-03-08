/*
 * XREFs of RtlLookupPrimaryFunctionEntry @ 0x1405AF584
 * Callers:
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140973330 (KiTpBuildExcludedKernelTracepointBitmap.c)
 * Callees:
 *     RtlpLookupPrimaryFunctionEntry @ 0x1403BEF80 (RtlpLookupPrimaryFunctionEntry.c)
 */

_BYTE *__fastcall RtlLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2)
{
  return RtlpLookupPrimaryFunctionEntry(a1, a2, a2 + *(unsigned int *)a1);
}
