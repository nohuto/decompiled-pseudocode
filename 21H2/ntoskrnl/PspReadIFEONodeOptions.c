/*
 * XREFs of PspReadIFEONodeOptions @ 0x1406CC6A0
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1406CC700 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall PspReadIFEONodeOptions(__int64 a1, void *a2)
{
  __int64 result; // rax

  result = RtlQueryImageFileKeyOption(a2, 4, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
