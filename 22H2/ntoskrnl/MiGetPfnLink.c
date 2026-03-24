/*
 * XREFs of MiGetPfnLink @ 0x14032C1B0
 * Callers:
 *     MiCreatePagingFileMap @ 0x14061C968 (MiCreatePagingFileMap.c)
 *     MiFreeReadListPages @ 0x1406362C4 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14063634C (MiFreeReadListPageList.c)
 *     MiMapNewSession @ 0x140786F8C (MiMapNewSession.c)
 *     MiMakeShadowPageTableRange @ 0x1407A06A4 (MiMakeShadowPageTableRange.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14087DB8C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MiReturnReservedEnclavePages @ 0x1409B0EA0 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
