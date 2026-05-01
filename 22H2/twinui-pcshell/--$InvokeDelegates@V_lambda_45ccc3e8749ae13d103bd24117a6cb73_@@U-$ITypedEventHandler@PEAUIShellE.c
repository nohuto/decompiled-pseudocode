/*
 * XREFs of ??$InvokeDelegates@V_lambda_45ccc3e8749ae13d103bd24117a6cb73_@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_45ccc3e8749ae13d103bd24117a6cb73_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1800C5E74
 * Callers:
 *     ?_FireViewChanged@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z @ 0x1800C67D0 (-_FireViewChanged@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@AEAAJW4ShellExperienceViewCha.c)
 *     ?_FireViewEvent@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C68C8 (-_FireViewEvent@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIProper.c)
 * Callees:
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180051594 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800519A0 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180065310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_45ccc3e8749ae13d103bd24117a6cb73_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>(
        _QWORD **a1,
        __int64 a2,
        __int64 *a3)
{
  volatile int *v5; // rdx
  __int64 v6; // rbx
  struct IUnknown **i; // rdi
  int v8; // eax
  int v9; // esi
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v11, a2);
  v6 = v11;
  for ( i = *(struct IUnknown ***)(v11 + 16); i != *(struct IUnknown ***)(v6 + 24); ++i )
  {
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))(*i)->lpVtbl[1].QueryInterface)(*i, **a1, *a1[1]);
    v9 = v8;
    if ( v8 < 0 )
    {
      RoTransformError((unsigned int)v8, 0LL, 0LL);
      if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 )
        Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
          a3,
          *i);
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6, v5);
  return 0LL;
}
