/*
 * XREFs of BgLibraryInitialize @ 0x1409F1854
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x14099324C (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140993CC8 (PopRestoreHiberContext.c)
 *     BgkInitialize @ 0x140A96F04 (BgkInitialize.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14021FA90 (KeGetCurrentIrql.c)
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
