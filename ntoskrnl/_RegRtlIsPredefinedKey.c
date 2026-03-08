/*
 * XREFs of _RegRtlIsPredefinedKey @ 0x1406D44BC
 * Callers:
 *     _RegRtlCreateKeyTransacted @ 0x14068804C (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlOpenKeyTransacted @ 0x1406D43A0 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlQueryKeyPathName @ 0x14085E3CC (_RegRtlQueryKeyPathName.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegRtlIsPredefinedKey(__int64 a1)
{
  return (unsigned __int64)(a1 - 0x80000000LL) <= 6 || a1 == 2147483655LL;
}
