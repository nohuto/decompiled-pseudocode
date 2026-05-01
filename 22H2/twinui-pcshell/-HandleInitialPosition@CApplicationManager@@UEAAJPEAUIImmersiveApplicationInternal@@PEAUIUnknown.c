/*
 * XREFs of ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180053750
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180037A1C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1800540EC (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180054F34 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::HandleInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        struct IImmersiveApplicationInternal *a5)
{
  HRESULT v9; // ebx
  int v10; // eax
  IUnknown *v11; // rax
  struct IImmersiveApplicationInternal *v12; // rdi
  void (__fastcall *v14)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v16)(PVOID, __int64, IUnknown **); // rbx
  int v17; // [rsp+20h] [rbp-30h]
  IUnknown *punk; // [rsp+30h] [rbp-20h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  struct IApplicationView *v21; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF

  LODWORD(v23) = 0;
  v21 = 0LL;
  v9 = CApplicationManager::_HandleCreation_EnsureApplicationView(this, a2, 0LL, &v21);
  if ( v9 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v20 = 0LL;
    if ( (*(int (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 504LL))(a2, &v20) >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 224LL))(v20);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xDA5,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v10,
          v17);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    ppvOut = 0LL;
    punk = 0LL;
    LODWORD(v23) = 2;
    (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 24) + 32LL))(
      (char *)this - 192,
      &GUID_00000000_0000_0000_c000_000000000046,
      &punk);
    v9 = IUnknown_QueryService(
           punk,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
           &ppvOut);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
    if ( v9 >= 0 )
    {
      v11 = 0LL;
      punk = 0LL;
      v12 = a5;
      if ( a5 )
      {
        v23 = 0LL;
        v14 = **(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a5;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        v14(v12, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v23);
        Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
        v16 = *(__int64 (__fastcall **)(PVOID, __int64, IUnknown **))(*(_QWORD *)Ptr + 56LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
        v9 = v16(Ptr, v23, &punk);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        v11 = punk;
      }
      if ( v9 >= 0 )
        v9 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, struct IUnknown *, struct IPresentationRequestedArgs *, IUnknown *))(*(_QWORD *)ppvOut + 24LL))(
               ppvOut,
               v21,
               a3,
               a4,
               v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
      if ( v9 >= 0 )
        v9 = CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
               (CApplicationManager *)((char *)this - 240),
               a2);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return (unsigned int)v9;
}
