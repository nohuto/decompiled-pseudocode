/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7d6eb40baac9abfbe063305bce0ea30_____lambda_c7d6eb40baac9abfbe063305bce0ea30___ @ 0x180031B10
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x18002EA40 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F6D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x1800314C0 (--0-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005CD40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7d6eb40baac9abfbe063305bce0ea30_____lambda_c7d6eb40baac9abfbe063305bce0ea30___(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r14
  int v8; // eax
  __int64 v9; // rax
  _DWORD *v10; // rcx
  bool v11; // zf

  *a1 = 0LL;
  v4 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v5 + 2) = 0LL;
    if ( v5 + 4 != (_DWORD *)a2 )
    {
      *((_QWORD *)v5 + 2) = *a2;
      *a2 = 0LL;
    }
    v6 = a2[1];
    v7 = a2 + 2;
    *((_QWORD *)v5 + 3) = v6;
    *((_QWORD *)v5 + 4) = 0LL;
    if ( v5 + 8 != (_DWORD *)v7 )
    {
      *((_QWORD *)v5 + 4) = *v7;
      *v7 = 0LL;
    }
    *((_QWORD *)v5 + 5) = v7[1];
    v8 = *((_DWORD *)v7 + 12);
    *((_QWORD *)v5 + 6) = &wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    *((_QWORD *)v5 + 7) = 0LL;
    *((_QWORD *)v5 + 9) = 0LL;
    v5[20] = 0;
    *((_QWORD *)v5 + 11) = 0LL;
    *((_QWORD *)v5 + 8) = v5 + 12;
    if ( v8 )
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(v5 + 14));
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)(v5 + 26),
      (__int64)(v7 + 9));
    *((_QWORD *)v5 + 44) = v7[40];
    v7[40] = 0LL;
    v9 = *((_QWORD *)v5 + 44);
    v10 = (_DWORD *)(v9 + 8);
    if ( !v9 )
      v10 = v5 + 26;
    *((_QWORD *)v5 + 12) = v10;
    *((_QWORD *)v5 + 11) = v10 + 10;
    v11 = *((_DWORD *)v7 + 12) == 0;
    v7[8] = v7 + 9;
    if ( !v11 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(v7 + 3));
    *((_QWORD *)v5 + 6) = &CFramePresentationTelemetry::PresentWindow::`vftable';
    *(_QWORD *)v5 = off_1804F9F50;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    *a1 = v5;
  }
  return a1;
}
