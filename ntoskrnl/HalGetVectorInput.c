/*
 * XREFs of HalGetVectorInput @ 0x1403A7D10
 * Callers:
 *     IopConnectInterruptFullySpecified @ 0x140857BF0 (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalGetVectorInput(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))off_140C01A58[0])(a1);
}
