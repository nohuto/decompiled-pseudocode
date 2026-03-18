/*
 * XREFs of MiGetPfnLink @ 0x140374DEC
 * Callers:
 *     MiFreeReadListPages @ 0x140721450 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x1407214EC (MiFreeReadListPageList.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140810CDC (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MmCreateShadowMapping @ 0x140820130 (MmCreateShadowMapping.c)
 *     MiReturnReservedEnclavePages @ 0x140AAD770 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
