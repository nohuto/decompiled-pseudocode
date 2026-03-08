/*
 * XREFs of CmpLockKcbStackShared @ 0x1407AF490
 * Callers:
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1407AAEC0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x1407AC310 (CmpQueryKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryValueKey @ 0x1407B4730 (CmQueryValueKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1408A6D60 (CmCallbackGetKeyObjectID.c)
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A10EC4 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A11200 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A13774 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 */

void __fastcall CmpLockKcbStackShared(__int64 a1)
{
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    CmpLockKcbShared(KcbAtLayerHeight);
  }
}
