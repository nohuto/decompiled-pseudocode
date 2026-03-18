/*
 * XREFs of TmEnableCallbacks @ 0x1403D7E50
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F659C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1408632CC (CmpMountPreloadedHives.c)
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
