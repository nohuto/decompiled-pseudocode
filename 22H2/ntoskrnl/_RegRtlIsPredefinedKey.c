/*
 * XREFs of _RegRtlIsPredefinedKey @ 0x1406CEF3C
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1406CEE20 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x14079844C (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlQueryKeyPathName @ 0x14086223C (_RegRtlQueryKeyPathName.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegRtlIsPredefinedKey(__int64 a1)
{
  return (unsigned __int64)(a1 - 0x80000000LL) <= 6 || a1 == 2147483655LL;
}
