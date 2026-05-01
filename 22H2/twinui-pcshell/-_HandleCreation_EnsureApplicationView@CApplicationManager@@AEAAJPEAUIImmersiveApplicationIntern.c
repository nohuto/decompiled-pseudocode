/*
 * XREFs of ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180054F34
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180053750 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x1800569D0 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800554A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x180055560 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x180055730 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_&_ @ 0x1800558C4 (CIAMGlobals--QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_-_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801BD540 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801BD540.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_HandleCreation_EnsureApplicationView(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        HWND a3,
        struct IApplicationView **a4)
{
  PVOID Ptr; // rbx
  __int64 (__fastcall *v8)(PVOID, __int64, struct IApplicationView **); // rdi
  struct IApplicationView *v9; // rcx
  int v10; // ebx
  PVOID v11; // rdi
  __int64 (__fastcall *v12)(PVOID, HWND, struct IApplicationView **); // rbx
  __int64 v13; // rcx
  HWND v14; // rcx
  PVOID v15; // rbx
  __int64 (__fastcall *v16)(PVOID, __int64, struct IApplicationView **); // rdi
  struct IApplicationView *v17; // rcx
  PVOID v18; // rdi
  __int64 (__fastcall *v19)(PVOID, HWND, struct IApplicationView **); // rbx
  __int64 v20; // rcx
  struct IApplicationView *v21; // rax
  unsigned int v23; // [rsp+20h] [rbp-20h]
  unsigned int v24; // [rsp+28h] [rbp-18h]
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  struct IApplicationView *v26; // [rsp+70h] [rbp+30h] BYREF
  __int64 v27; // [rsp+78h] [rbp+38h] BYREF
  __int64 v28; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 0LL;
  v26 = 0LL;
  if ( a2 )
  {
    v27 = 0LL;
    (**(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a2)(
      a2,
      &GUID_8b14e88b_5663_4caf_b196_c31479262831,
      &v27);
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v8 = *(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)Ptr + 56LL);
    v9 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v8(Ptr, v27, &v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  }
  else
  {
    v11 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v12 = *(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v11 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v10 = v12(v11, a3, &v26);
  }
  if ( v10 >= 0 )
    goto LABEL_22;
  v27 = 0LL;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v27);
  if ( v10 >= 0 )
  {
    v13 = v27;
    v25 = v27;
    if ( v27 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v27);
    if ( (int)CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const___(v13, &v25) >= 0 )
      SHProcessMessagesUntilEventsEx(v14, (void **)(v27 + 40), 1u, 0x1388u, v23, v24);
    if ( a2 )
    {
      v28 = 0LL;
      (**(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a2)(
        a2,
        &GUID_8b14e88b_5663_4caf_b196_c31479262831,
        &v28);
      v15 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v16 = *(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)v15 + 56LL);
      v17 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v10 = v16(v15, v28, &v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    }
    else
    {
      v18 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v19 = *(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v18 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v10 = v19(v18, a3, &v26);
    }
    if ( v25 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v25);
  }
  v20 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v20);
  }
  if ( v10 >= 0 )
  {
LABEL_22:
    v21 = v26;
    v26 = 0LL;
    *a4 = v21;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  return (unsigned int)v10;
}
