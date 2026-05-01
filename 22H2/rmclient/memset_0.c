/*
 * XREFs of memset_0 @ 0x18000AB30
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800030C0 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     HampConnectionInitialize @ 0x180004D90 (HampConnectionInitialize.c)
 *     HamHostIdInitializeKey @ 0x180007040 (HamHostIdInitializeKey.c)
 *     HamPopulateActivityProperties @ 0x1800071A0 (HamPopulateActivityProperties.c)
 *     CempGetTokenHostInfo @ 0x180007590 (CempGetTokenHostInfo.c)
 *     ?HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180007A70 (-HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     HamPopulateActivityPropertiesByClass @ 0x180007CD0 (HamPopulateActivityPropertiesByClass.c)
 *     RmpClientConnectionInitialize @ 0x18000963C (RmpClientConnectionInitialize.c)
 *     HamIpcChannelInitialize @ 0x1800096E0 (HamIpcChannelInitialize.c)
 *     RmpClientWnfCreateSubscription @ 0x180009940 (RmpClientWnfCreateSubscription.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x1800126A0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_1800126A0.c)
 *     ?Apply@ResourceSetClientProxy@@UEAAJK@Z @ 0x180012C90 (-Apply@ResourceSetClientProxy@@UEAAJK@Z.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@@Z @ 0x1800132E0 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@Executio.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x180013910 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x180013F84 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
