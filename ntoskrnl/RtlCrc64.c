/*
 * XREFs of RtlCrc64 @ 0x1403B86F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x1403B8710 (RtlpComputeCrcInternal.c)
 */

__int64 __fastcall RtlCrc64(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpComputeCrcInternal(a1, a2, a3, &Crc64Ctrl);
}
