/*
 * XREFs of BgLibraryInitialize @ 0x140AEB57C
 * Callers:
 *     PopRestoreHiberContext @ 0x140AA139C (PopRestoreHiberContext.c)
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 *     BgkInitialize @ 0x140B99F84 (BgkInitialize.c)
 * Callees:
 *     BgpFwLibraryInitialize @ 0x140AEAC78 (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, unsigned int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize(a1, a2);
  else
    return 3221225473LL;
}
