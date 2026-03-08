/*
 * XREFs of KeSecureThread @ 0x14056C9E0
 * Callers:
 *     PspCreateSecureThread @ 0x1409ADFC0 (PspCreateSecureThread.c)
 * Callees:
 *     VslCreateSecureThread @ 0x14093EDA0 (VslCreateSecureThread.c)
 */

__int64 __fastcall KeSecureThread(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return VslCreateSecureThread(*(_QWORD *)(a1 + 544), a1, a2, a3, a4, a5, a1 + 796);
}
