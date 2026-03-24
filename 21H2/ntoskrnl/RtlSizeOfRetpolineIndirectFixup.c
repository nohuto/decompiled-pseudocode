/*
 * XREFs of RtlSizeOfRetpolineIndirectFixup @ 0x140590288
 * Callers:
 *     RtlCreateRetpolineRelocationInformation @ 0x14035ED68 (RtlCreateRetpolineRelocationInformation.c)
 *     RtlpConstructIndirectRelocationFixup @ 0x1405902AC (RtlpConstructIndirectRelocationFixup.c)
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
