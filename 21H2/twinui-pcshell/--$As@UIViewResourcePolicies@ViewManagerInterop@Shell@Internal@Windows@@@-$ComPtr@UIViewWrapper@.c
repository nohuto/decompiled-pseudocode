/*
 * XREFs of ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180015CA0
 * Callers:
 *     ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x180015BE4 (-SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x180076C30 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x180076CC0 (-BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ.c)
 *     ?UnboostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x180076D70 (-UnboostPriority@PriorityBoostHelper@@UEAAJXZ.c)
 *     ?_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x18007DC84 (-_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x18007DDD8 (-_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x18007DF20 (-_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityBoostIfNeeded@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B7FD0 (-_ApplyPriorityBoostIfNeeded@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B80FC (-_ApplyPriorityUnboostIfNeeded@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ??$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@CortanaSharedExperienceManager@@AEAAJAEAV?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180226274 (--$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@CortanaS.c)
 *     ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18022B2DC (-_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18022B3DC (-_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18022CD78 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?ApplyPriorityBoostIfNeeded@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x18022F0BC (-ApplyPriorityBoostIfNeeded@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ.c)
 *     ?OnPriorityUnboostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18022F570 (-OnPriorityUnboostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShel.c)
 *     ??$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@SearchAppExperienceManager@@AEAAJAEAV?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180264DCC (--$_GetViewWrapperAs@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@SearchAp.c)
 *     ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x1802691A0 (-OnViewCreated@PriorityBoostHelper@@QEAAJXZ.c)
 *     ?ResetActivationTimeoutPolicy@PriorityBoostHelper@@AEAAXXZ @ 0x1802694D0 (-ResetActivationTimeoutPolicy@PriorityBoostHelper@@AEAAXXZ.c)
 *     ?BoostPriority@KBViewInfo@@QEAAXXZ @ 0x1803B7EBC (-BoostPriority@KBViewInfo@@QEAAXXZ.c)
 *     ?UnboostPriority@KBViewInfo@@QEAAXXZ @ 0x1803C3A08 (-UnboostPriority@KBViewInfo@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return v4(v2, &GUID_35f1648c_265f_402c_b575_c9a325451df5, a2);
}
