/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1407AF294
 * Callers:
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x140738F48 (CmpStartSiloRegistryNamespace.c)
 *     CmpPerformUnloadKey @ 0x14074A194 (CmpPerformUnloadKey.c)
 *     CmpIsKeyDeleted @ 0x14077B358 (CmpIsKeyDeleted.c)
 *     CmpReportNotify @ 0x140783638 (CmpReportNotify.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1407AAEC0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x1407B6860 (CmpDoWritethroughReparse.c)
 *     CmpAssignKeySecurity @ 0x140854E7C (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408A6D60 (CmCallbackGetKeyObjectID.c)
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0A440 (CmOpenKeyForBugCheckRecovery.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A10EC4 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A11200 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A12D14 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A13248 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A13774 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A1641C (CmpDoBuildVirtualStack.c)
 *     CmpCheckKeyBodyAccess @ 0x140A18448 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     CmpPopulateKcbStack @ 0x1407AF248 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x1407AF450 (CmpStartKcbStack.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2)
{
  int started; // r11d

  started = CmpStartKcbStack(a1, *(unsigned __int16 *)(a2 + 66));
  if ( started >= 0 )
    CmpPopulateKcbStack(a1, a2);
  return (unsigned int)started;
}
