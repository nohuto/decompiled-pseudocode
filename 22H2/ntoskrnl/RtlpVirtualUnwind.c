/*
 * XREFs of RtlpVirtualUnwind @ 0x1403408B0
 * Callers:
 *     PspGetSetContextInternal @ 0x1406C2670 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x14021E130 (RtlpxVirtualUnwind.c)
 */

__int64 __fastcall RtlpVirtualUnwind(int a1, __int64 a2, unsigned __int64 a3)
{
  return RtlpxVirtualUnwind(a1, a2, a3);
}
