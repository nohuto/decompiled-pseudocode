/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1406DEB20
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1404ECFB8 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmpCheckKeyBodyAccess @ 0x1405D961C (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpPerformUnloadKey @ 0x14066CBFC (CmpPerformUnloadKey.c)
 *     CmpReportNotify @ 0x14066ED7C (CmpReportNotify.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406A630C (CmpStartSiloRegistryNamespace.c)
 *     CmpDoWritethroughReparse @ 0x1406CDE40 (CmpDoWritethroughReparse.c)
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x1406DE150 (CmpQueryKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406DE9E0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmDeleteValueKey @ 0x1406DF334 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1406E47E4 (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406E6CFC (CmpSetKeySecurity.c)
 *     CmSaveKey @ 0x140729A8C (CmSaveKey.c)
 *     CmpAssignKeySecurity @ 0x1407D0370 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x140869AC0 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086C2B0 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086C598 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086DCC8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E18C (CmSetLastWriteTimeKey.c)
 *     CmpDoBuildVirtualStack @ 0x14086FFEC (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140206F50 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D6C8C (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  int v4; // esi
  PVOID v5; // rbp
  __int16 v8; // dx
  __int64 i; // r10
  __int64 v11; // r10
  __int16 v12; // dx
  SIZE_T v13; // r14
  PVOID TransientPoolWithTag; // rax

  v4 = *(__int16 *)(a2 + 66);
  v5 = 0LL;
  if ( v4 >= 2 )
  {
    v13 = 8LL * (unsigned int)(v4 - 1);
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, v13, 0x35364D43u, a4);
    v5 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    memset(TransientPoolWithTag, 0, v13);
  }
  *(_WORD *)a1 = v4;
  *(_WORD *)(a1 + 2) = -1;
  *(_QWORD *)(a1 + 24) = v5;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 66);
  v8 = *(_WORD *)(a2 + 66);
  if ( v8 )
  {
    for ( i = *(_QWORD *)(a2 + 192); i; v8 = v12 - 1 )
    {
      CmpSetKcbAtLayerHeight(a1, v8, *(_QWORD *)(i + 16));
      i = *(_QWORD *)(v11 + 24);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a2;
  }
  return 0LL;
}
