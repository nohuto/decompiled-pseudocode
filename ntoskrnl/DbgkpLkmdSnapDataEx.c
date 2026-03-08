/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x140539804
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1409378F8 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x1409381FC (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 16448))(a1 + 0x4000);
}
