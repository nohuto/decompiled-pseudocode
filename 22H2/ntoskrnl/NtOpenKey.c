/*
 * XREFs of NtOpenKey @ 0x1406778D0
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A41034 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A72948 (IopProtectSystemPartition.c)
 * Callees:
 *     CmOpenKey @ 0x1406CE0F0 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKey(int a1, int a2, int a3)
{
  return CmOpenKey(a1, a2, a3, 0, 0LL);
}
