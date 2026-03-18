/*
 * XREFs of CmpFreeSiloKeyLockEntry @ 0x140A1BE2C
 * Callers:
 *     CmLockKeyForWrite @ 0x14084905C (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A1BF48 (CmpStopSiloKeyLockTracker.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14022CEF4 (CmpFreeTransientPoolWithTag.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076B020 (CmpDereferenceKeyControlBlock.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A1BE74 (CmpGlobalUnlockKeyForWrite.c)
 */

void __fastcall CmpFreeSiloKeyLockEntry(ULONG_PTR *a1)
{
  if ( a1[3] )
    CmpGlobalUnlockKeyForWrite(a1[2]);
  CmpDereferenceKeyControlBlock(a1[2]);
  CmpFreeTransientPoolWithTag(a1, 0x34374D43u);
}
