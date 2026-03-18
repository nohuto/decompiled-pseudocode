/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1406D7C1C
 * Callers:
 *     CmQueryLayeredKey @ 0x14035D634 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14061695C (CmDeleteLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x140693570 (CmpDoWritethroughReparse.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4B90 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14070C46C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14071009C (CmDeleteKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077D410 (CmpStartSiloRegistryNamespace.c)
 *     CmpIsKeyDeleted @ 0x1407CB78C (CmpIsKeyDeleted.c)
 *     CmpReportNotify @ 0x1407D2130 (CmpReportNotify.c)
 *     CmpAssignKeySecurity @ 0x1408593F0 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408ABBD0 (CmCallbackGetKeyObjectID.c)
 *     CmSaveKey @ 0x140A0BA40 (CmSaveKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D150 (CmOpenKeyForBugCheckRecovery.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13C14 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A13F50 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A15A64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15F98 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A164C4 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A1916C (CmpDoBuildVirtualStack.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B198 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     CmpStartKcbStack @ 0x1406D7DD0 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1406D7E10 (CmpPopulateKcbStack.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2)
{
  int started; // r11d

  started = CmpStartKcbStack(a1, *(unsigned __int16 *)(a2 + 66));
  if ( started >= 0 )
    CmpPopulateKcbStack(a1, a2);
  return (unsigned int)started;
}
