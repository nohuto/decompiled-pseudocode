/*
 * XREFs of ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800264E8
 * Callers:
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180026EE8 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180029070 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18031D0C8 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180026620 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___ @ 0x180026644 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_379fb6251cfae.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005CD40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConnectedStandbyHelper::HandleViewCreated(
        ConnectedStandbyHelper *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  std::_Ref_count_base *v4; // rcx
  __int64 v5; // r14
  volatile signed __int32 *v6; // rdi
  unsigned int v7; // esi
  __int64 *v8; // rax
  __int64 v9; // rbx
  void **pExceptionObject; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+38h] [rbp-38h]
  _QWORD v12[2]; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+58h] [rbp-18h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v14; // [rsp+60h] [rbp-10h] BYREF
  __int64 v15; // [rsp+90h] [rbp+20h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v16; // [rsp+A0h] [rbp+30h] BYREF

  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( !v4 || !std::_Ref_count_base::_Incref_nz(v4) )
  {
    v11 = 0LL;
    pExceptionObject = &std::bad_weak_ptr::`vftable';
    throw (std::bad_weak_ptr *)&pExceptionObject;
  }
  v5 = *(_QWORD *)this;
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  v16 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v12[0] = this;
  if ( v6 )
    _InterlockedIncrement(v6 + 2);
  v12[1] = v5;
  v13 = (std::_Ref_count_base *)v6;
  v14 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = *((_DWORD *)this + 4);
  v8 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___(
                    &v15,
                    v12);
  v9 = *v8;
  *v8 = 0LL;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  SHTaskPoolQueueTask(3LL, 2LL, v7, 0LL, v9, 0LL);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v14);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v16);
  if ( v6 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
}
