/*
 * XREFs of ?AddRef@ContentManagementService@ContentManagement@@UEAAKXZ @ 0x1800257A0
 * Callers:
 *     ?AddRef@ContentManagementService@ContentManagement@@WEA@EAAKXZ @ 0x180029940 (-AddRef@ContentManagementService@ContentManagement@@WEA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WGA@EAAKXZ @ 0x1800299A0 (-AddRef@ContentManagementService@ContentManagement@@WGA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@W7EAAKXZ @ 0x180029AD0 (-AddRef@ContentManagementService@ContentManagement@@W7EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WCI@EAAKXZ @ 0x180029B80 (-AddRef@ContentManagementService@ContentManagement@@WCI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WEI@EAAKXZ @ 0x180029BF0 (-AddRef@ContentManagementService@ContentManagement@@WEI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WDA@EAAKXZ @ 0x180029E30 (-AddRef@ContentManagementService@ContentManagement@@WDA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WFA@EAAKXZ @ 0x180029E60 (-AddRef@ContentManagementService@ContentManagement@@WFA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ @ 0x18002A0E0 (-AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WFI@EAAKXZ @ 0x18002A100 (-AddRef@ContentManagementService@ContentManagement@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ContentManagementService::AddRef(
        ContentManagement::ContentManagementService *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::AddRef(this);
}
