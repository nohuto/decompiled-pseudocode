/*
 * XREFs of CmpUnlockKcbStack @ 0x1406D5418
 * Callers:
 *     CmQueryLayeredKey @ 0x14035D634 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14061695C (CmDeleteLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4B90 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x1406D5C50 (CmpQueryKeySecurity.c)
 *     CmQueryValueKey @ 0x1406E0370 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14070C46C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14071009C (CmDeleteKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077D410 (CmpStartSiloRegistryNamespace.c)
 *     CmpAssignKeySecurity @ 0x1408593F0 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408ABBD0 (CmCallbackGetKeyObjectID.c)
 *     CmSaveKey @ 0x140A0BA40 (CmSaveKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D150 (CmOpenKeyForBugCheckRecovery.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13C14 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A13F50 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetKeyFlags @ 0x140A15A64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15F98 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A164C4 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A1916C (CmpDoBuildVirtualStack.c)
 *     CmpPromoteKey @ 0x140A2665C (CmpPromoteKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140AF65A0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpUnlockKcbStack(__int64 a1)
{
  __int16 i; // bx
  __int64 v3; // rcx
  __int64 result; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i >= 2 )
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    else
      v3 = *(_QWORD *)(a1 + 8LL * i + 8);
    result = CmpUnlockKcb(v3);
  }
  return result;
}
