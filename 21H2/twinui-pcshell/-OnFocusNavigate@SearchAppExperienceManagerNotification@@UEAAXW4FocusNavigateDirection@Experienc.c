/*
 * XREFs of ?OnFocusNavigate@SearchAppExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x180265990
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008A330 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$DoInvoke@V_lambda_6788242ee63e21dca0a125830d496daa_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_6788242ee63e21dca0a125830d496daa_@@@Z @ 0x18022563C (--$DoInvoke@V_lambda_6788242ee63e21dca0a125830d496daa_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection_&_ @ 0x180225AAC (Microsoft--WRL--Details--Make__SearchAppExperienceManagerNotification--OnFocusNavigate_--_2_--CF.c)
 */

void __fastcall SearchAppExperienceManagerNotification::OnFocusNavigate(__int64 a1, int a2)
{
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  RTL_SRWLOCK *v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  int v9; // [rsp+58h] [rbp+28h] BYREF
  RTL_SRWLOCK *v10; // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  v9 = a2;
  if ( *(_QWORD *)(a1 + 40) )
  {
    v3 = Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection___(
           &v8,
           &v9);
    v4 = *v3;
    *v3 = 0LL;
    v5 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(v5);
    }
    v6 = *(RTL_SRWLOCK **)(a1 + 40);
    *(_QWORD *)&v7 = &v10;
    v10 = v6;
    *((_QWORD *)&v7 + 1) = &v11;
    v11 = v4;
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_6788242ee63e21dca0a125830d496daa_>(
      v6 + 24,
      &v7);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
