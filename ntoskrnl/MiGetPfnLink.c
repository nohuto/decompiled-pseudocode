/*
 * XREFs of MiGetPfnLink @ 0x1402FCBFC
 * Callers:
 *     MiFreeReadListPages @ 0x1406A4F10 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x1406A4FAC (MiFreeReadListPageList.c)
 *     MmCreateShadowMapping @ 0x14080B624 (MmCreateShadowMapping.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140818CE8 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MiReturnReservedEnclavePages @ 0x140AAA540 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
