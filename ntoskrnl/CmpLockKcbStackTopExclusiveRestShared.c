/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x1406BA388
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0A440 (CmOpenKeyForBugCheckRecovery.c)
 *     CmSetKeyFlags @ 0x140A12D14 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A13248 (CmSetLastWriteTimeKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A1641C (CmpDoBuildVirtualStack.c)
 *     CmpPromoteKey @ 0x140A238FC (CmpPromoteKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpLockKcbStackTopExclusiveRestShared(__int64 a1)
{
  __int16 i; // di
  __int64 v3; // rax
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2) - 1; ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    CmpLockKcbShared(KcbAtLayerHeight);
  }
  v3 = CmpGetKcbAtLayerHeight(a1);
  return CmpLockKcbExclusive(v3);
}
