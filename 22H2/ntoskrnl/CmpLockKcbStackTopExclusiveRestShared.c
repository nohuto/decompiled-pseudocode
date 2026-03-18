/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x14070FBF8
 * Callers:
 *     CmDeleteLayeredKey @ 0x14061695C (CmDeleteLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14070C46C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14071009C (CmDeleteKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D150 (CmOpenKeyForBugCheckRecovery.c)
 *     CmSetKeyFlags @ 0x140A15A64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15F98 (CmSetLastWriteTimeKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A1916C (CmpDoBuildVirtualStack.c)
 *     CmpPromoteKey @ 0x140A2665C (CmpPromoteKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1406D5850 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x1406D8518 (CmpLockKcbExclusive.c)
 *     CmpLockKcbShared @ 0x140AF6530 (CmpLockKcbShared.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbStackTopExclusiveRestShared(__int64 a1)
{
  int v1; // edx
  __int16 v2; // di
  __int64 v4; // rax
  __int64 KcbAtLayerHeight; // rax

  v1 = *(__int16 *)(a1 + 2);
  v2 = 0;
  if ( v1 - 1 >= 0 )
  {
    do
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v2);
      CmpLockKcbShared(KcbAtLayerHeight);
      LOWORD(v1) = *(_WORD *)(a1 + 2);
      ++v2;
    }
    while ( v2 <= (__int16)v1 - 1 );
  }
  v4 = CmpGetKcbAtLayerHeight(a1, v1);
  return CmpLockKcbExclusive(v4);
}
