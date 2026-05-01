/*
 * XREFs of ?DisplaySettingsChange@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180450310
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18044E49C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VAPositioner_DisplaySettingsChangeActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18044EE14 (--1VAPositioner_DisplaySettingsChangeActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@VAPositioner_DisplaySettingsChangeActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x180452740 (-StartActivity@VAPositioner_DisplaySettingsChangeActivity@VoiceAssistantPositionerTelemetry@@QEA.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804534C4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x180456ED8 (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  int updated; // eax
  unsigned int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  if ( (a3 & 0x15) != 0 && *(_QWORD *)(a1 + 248) )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v7,
      (__int64)"VAPositioner_DisplaySettingsChangeActivity");
    *(_QWORD *)v7 = &VoiceAssistantPositionerTelemetry::VAPositioner_DisplaySettingsChangeActivity::`vftable';
    VoiceAssistantPositionerTelemetry::VAPositioner_DisplaySettingsChangeActivity::StartActivity((VoiceAssistantPositionerTelemetry::VAPositioner_DisplaySettingsChangeActivity *)v7);
    updated = VoiceAssistantPositioner::UpdateManagedView((VoiceAssistantPositioner *)(a1 - 128));
    v5 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F9,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)updated);
      VoiceAssistantPositionerTelemetry::VAPositioner_DisplaySettingsChangeActivity::~VAPositioner_DisplaySettingsChangeActivity((VoiceAssistantPositionerTelemetry::VAPositioner_DisplaySettingsChangeActivity *)v7);
      return v5;
    }
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    VoiceAssistantPositionerTelemetry::VAPositioner_DisplaySettingsChangeActivity::~VAPositioner_DisplaySettingsChangeActivity((VoiceAssistantPositionerTelemetry::VAPositioner_DisplaySettingsChangeActivity *)v7);
  }
  return 0LL;
}
