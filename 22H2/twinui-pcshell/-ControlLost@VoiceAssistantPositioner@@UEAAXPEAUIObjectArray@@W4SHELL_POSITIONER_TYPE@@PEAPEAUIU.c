/*
 * XREFs of ?ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x18044F390
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180068B18 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18044E10C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18044E4F8 (--1-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18044F62C (-ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?CreateFromPropertySet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x18044FC20 (-CreateFromPropertySet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18044FE20 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorT.c)
 *     ?HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18045079C (-HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXW4SHELL_POSITIONER_TYPE@@@Z @ 0x180452260 (-StartActivity@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXW4SHELL_.c)
 *     ?Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x180453448 (-Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall VoiceAssistantPositioner::ControlLost(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  int v8; // eax
  char v9; // bl
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  int (__fastcall *v13)(__int64, _QWORD, GUID *, struct IUnknown **); // rbx
  VoiceAssistantPositioner *v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  struct IUnknown *v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v22; // [rsp+60h] [rbp-A0h]
  _QWORD v23[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v23,
    (__int64)"VAPositioner_ControlLostActivity");
  v23[0] = &VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::StartActivity(v23, a3);
  v19 = 0LL;
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromPropertySet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v19);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      452LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = *(_BYTE *)(a1 + 305);
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"VoicePositionerMinimising",
    0x1Au,
    0x19u);
  v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v19,
          v22,
          v10,
          v9);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      453LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v11);
  *(_BYTE *)(a1 + 305) = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 24LL))(a2, &v20);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1CB,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v12);
  if ( v20 != 1 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1CC,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)0x80070057LL);
  v18 = 0LL;
  v13 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  if ( v13(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v18) >= 0 )
  {
    if ( !a3 )
    {
      if ( (unsigned int)SHIsSameObject(v18, *(struct IUnknown **)(a1 + 256)) )
      {
        v15 = VoiceAssistantPositioner::HideView(v14, (struct IApplicationView *)v18);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1D5,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
            (const char *)(unsigned int)v15);
      }
    }
    v16 = VoiceAssistantPositioner::ControlLostHelper(
            (VoiceAssistantPositioner *)(a1 - 120),
            (struct IApplicationView *)v18);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D7,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v16);
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::Stop(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity *)v23,
    (struct IApplicationView *)v18);
  v17 = v19;
  v19 = 0LL;
  *a4 = v17;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v23[0] = &VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
}
