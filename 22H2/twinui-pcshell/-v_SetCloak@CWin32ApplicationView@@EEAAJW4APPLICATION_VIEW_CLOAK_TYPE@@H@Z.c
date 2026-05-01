/*
 * XREFs of ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x180051170
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateGatheredWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180051100 (-ValidateGatheredWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationVi.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator() @ 0x18005331C (_lambda_ee3e0a0da20eb1cf2fabc213f82c029b_--operator().c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180053384 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x180054EC4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x180056500 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x180089B00 (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801BD998 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1802018A0 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___ @ 0x180201998 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_807778e6719fb664354e7.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180202ABC (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWin32ApplicationView::v_SetCloak(__int64 a1, int a2, int a3)
{
  int v6; // edi
  unsigned int v7; // esi
  int v8; // r14d
  _QWORD *v9; // r12
  HWND v10; // rdx
  _QWORD *v11; // rcx
  __int64 *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rax
  HWND v18; // rdi
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned __int64 v22; // rbx
  HWND v24; // rax
  int v25; // ebx
  int v26; // [rsp+20h] [rbp-40h]
  _QWORD v27[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+48h] [rbp-18h]
  __int64 v30; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 *v32; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+58h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v32, a1 + 48);
  v6 = *(_DWORD *)(a1 + 264);
  v7 = 0;
  if ( a3 )
    v8 = a2 | v6;
  else
    v8 = v6 & ~a2;
  *(_DWORD *)(a1 + 264) = v8;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( v6 != v8 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v28);
    v29 = -1LL;
    v30 = -1LL;
    if ( (int)CWin32ApplicationView::GetViewId((CWin32ApplicationView *)(a1 + 16), &v28) >= 0 )
    {
      v27[0] = &v28;
      v27[1] = a1;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___(v27);
      ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
        &v28,
        a1 + 264);
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v28);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v32);
  if ( (v8 != 0) == (v6 != 0) && v8 )
    return 0LL;
  v32 = 0LL;
  v27[0] = &v32;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v33);
  if ( v33 )
    lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator()(v27);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v33);
  if ( v32 )
  {
    v9 = (_QWORD *)(a1 + 232);
    v10 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
    v11 = (_QWORD *)(a1 + 232);
    if ( v8 )
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
        v11,
        v10);
    else
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ValidateGatheredWindows(
        v11,
        v10);
    v12 = v32;
    v13 = *v32;
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
    v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, bool, __int64))(v13 + 24))(v12, v14, v8 != 0, 1LL);
    v16 = v15;
    if ( v15 == -2147024809 )
    {
      if ( !v8 )
      {
        v24 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
        if ( GetWindow(v24, 4u) )
        {
          if ( *(_QWORD *)(a1 + 240) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x144,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)0x80070057LL,
              v26);
          goto LABEL_31;
        }
      }
    }
    else if ( v15 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
      v18 = (HWND)GhostWindowFromHungWindow(v17);
      if ( v18 )
      {
        v25 = (*(__int64 (__fastcall **)(__int64 *, HWND, bool, _QWORD))(*v32 + 24))(v32, v18, v8 != 0, 0LL);
        if ( (v25 != -2147024809 || v8 || !GetWindow(v18, 4u)) && v25 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x15F,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
            (const char *)(unsigned int)v25,
            v26);
      }
      v19 = (_QWORD *)*v9;
      v20 = *(_QWORD *)(a1 + 240);
      v21 = 0LL;
      v22 = (unsigned __int64)(8 * v20 + 7) >> 3;
      if ( *v9 > (unsigned __int64)(*v9 + 8 * v20) )
        v22 = 0LL;
      if ( v22 )
      {
        do
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, bool, _QWORD))(*v32 + 24))(v32, *v19++, v8 != 0, 0LL);
          ++v21;
        }
        while ( v21 != v22 );
      }
      if ( !v8 )
        CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll(v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v32);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)v16,
      v26);
    v7 = v16;
  }
  else
  {
    v7 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11C,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x8007000CLL,
      v26);
  }
LABEL_31:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v32);
  return v7;
}
