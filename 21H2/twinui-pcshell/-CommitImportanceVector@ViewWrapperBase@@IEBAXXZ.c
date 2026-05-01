/*
 * XREFs of ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x18033E56C
 * Callers:
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x18033DFD0 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18033F870 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z @ 0x180340E30 (-SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z.c)
 *     ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0002_0001@@@Z @ 0x180340F40 (-SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0.c)
 *     ?SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803410C0 (-SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Sh.c)
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x180341480 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 *     ?UnboostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180342510 (-UnboostPriority@ViewWrapperBase@@UEAAJXZ.c)
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x180342630 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18033B2FC (--$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXA.c)
 */

void __fastcall ViewWrapperBase::CommitImportanceVector(ViewWrapperBase *this)
{
  __int64 v2; // rdx

  v2 = *((_QWORD *)this + 24);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 504LL) + 72LL))(
      *(_QWORD *)(*((_QWORD *)this + 21) + 504LL),
      v2,
      *((unsigned int *)this + 89));
    ViewManagerInteropTraceLogging::CommitImportanceVector<unsigned int const &,_RM_ACTIVITY_IMPORTANCE const &>(
      (int *)this + 37,
      (ViewWrapperBase *)((char *)this + 356));
  }
}
