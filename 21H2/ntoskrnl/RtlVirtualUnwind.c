/*
 * XREFs of RtlVirtualUnwind @ 0x1402759C0
 * Callers:
 *     RtlRaiseException @ 0x140274220 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x140275570 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140275A30 (RtlUnwindEx.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x14021E170 (RtlpxVirtualUnwind.c)
 */

__int64 __fastcall RtlVirtualUnwind(int a1, __int64 a2, unsigned __int64 a3)
{
  RtlpxVirtualUnwind(a1, a2, a3);
  return 0LL;
}
