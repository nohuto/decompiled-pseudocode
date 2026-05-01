/*
 * XREFs of ??$InvokeDelegates@V_lambda_2b4e52e002df5ddb490bb6e80dcb767a_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_2b4e52e002df5ddb490bb6e80dcb767a_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180225674
 * Callers:
 *     ??$DoInvoke@V_lambda_0b5fb972904d11c724cc9fe376f39de7_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_0b5fb972904d11c724cc9fe376f39de7_@@@Z @ 0x1802253D4 (--$DoInvoke@V_lambda_0b5fb972904d11c724cc9fe376f39de7_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180051594 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800519A0 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180095320 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_2b4e52e002df5ddb490bb6e80dcb767a_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  volatile int *v5; // rdx
  _QWORD *v6; // rbx
  struct IUnknown **i; // rdi
  struct IUnknown *v8; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  int v10; // eax
  int v11; // esi
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v14, a2);
  v6 = (_QWORD *)v14;
  for ( i = *(struct IUnknown ***)(v14 + 16); i != (struct IUnknown **)v6[3]; ++i )
  {
    v8 = *i;
    lpVtbl = (*i)->lpVtbl;
    v13 = *(_OWORD *)*(_QWORD *)(a1 + 8);
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int128 *))lpVtbl[1].QueryInterface)(
            v8,
            **(_QWORD **)a1,
            &v13);
    v11 = v10;
    if ( v10 < 0 )
    {
      RoTransformError((unsigned int)v10, 0LL, 0LL);
      if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 )
        Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
          a3,
          *i);
    }
  }
  if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference(
                        (Microsoft::WRL::Details *)((char *)v6 + 12),
                        v5) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 24LL))(v6, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 0LL;
}
