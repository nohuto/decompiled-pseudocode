/*
 * XREFs of TmEnableCallbacks @ 0x1403D2930
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmEnableCallbacks(
        PKRESOURCEMANAGER ResourceManager,
        PTM_RM_NOTIFICATION CallbackRoutine,
        PVOID RMKey)
{
  return __imp_TmEnableCallbacks(ResourceManager, CallbackRoutine, RMKey);
}
