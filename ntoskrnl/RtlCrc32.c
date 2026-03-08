/*
 * XREFs of RtlCrc32 @ 0x14045BD70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x1403B8710 (RtlpComputeCrcInternal.c)
 */

__int64 __fastcall RtlCrc32(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpComputeCrcInternal(a1, a2, a3, (__int64)&Crc32Ctrl);
}
