/*
 * XREFs of RtlVirtualUnwind @ 0x14033E9D0
 * Callers:
 *     RtlRaiseException @ 0x14033D230 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x14033E580 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14033EA40 (RtlUnwindEx.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x14021E130 (RtlpxVirtualUnwind.c)
 */

__int64 __fastcall RtlVirtualUnwind(int a1, __int64 a2, unsigned __int64 a3)
{
  RtlpxVirtualUnwind(a1, a2, a3);
  return 0LL;
}
