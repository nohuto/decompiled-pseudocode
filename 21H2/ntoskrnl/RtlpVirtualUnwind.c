/*
 * XREFs of RtlpVirtualUnwind @ 0x140265840
 * Callers:
 *     PspGetSetContextInternal @ 0x14063E6D0 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x1402C2A70 (RtlpxVirtualUnwind.c)
 */

__int64 __fastcall RtlpVirtualUnwind(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  _QWORD v13[5]; // [rsp+50h] [rbp-28h] BYREF

  v13[2] = a9;
  v13[0] = a10;
  v13[1] = a11;
  return RtlpxVirtualUnwind(a1, a2, a3, a4, a5, a6, a7, a8, a12, (__int64)v13);
}
