/*
 * XREFs of CmpFreeSiloKeyLockEntry @ 0x140A190DC
 * Callers:
 *     CmLockKeyForWrite @ 0x140845EFC (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A191F8 (CmpStopSiloKeyLockTracker.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A19124 (CmpGlobalUnlockKeyForWrite.c)
 */

void __fastcall CmpFreeSiloKeyLockEntry(ULONG_PTR *a1)
{
  if ( a1[3] )
    CmpGlobalUnlockKeyForWrite(a1[2]);
  CmpDereferenceKeyControlBlock(a1[2]);
  CmpFreeTransientPoolWithTag(a1, 0x34374D43u);
}
