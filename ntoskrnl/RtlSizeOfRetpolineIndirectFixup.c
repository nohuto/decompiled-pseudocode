/*
 * XREFs of RtlSizeOfRetpolineIndirectFixup @ 0x14046760A
 * Callers:
 *     RtlCreateRetpolineRelocationInformation @ 0x14036BA3C (RtlCreateRetpolineRelocationInformation.c)
 *     RtlpConstructIndirectRelocationFixup @ 0x140678410 (RtlpConstructIndirectRelocationFixup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSizeOfRetpolineIndirectFixup(unsigned __int16 *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( (v1 & 0x4000) != 0 )
    return (v1 | 0xC000u) >> 13;
  else
    return 5LL;
}
