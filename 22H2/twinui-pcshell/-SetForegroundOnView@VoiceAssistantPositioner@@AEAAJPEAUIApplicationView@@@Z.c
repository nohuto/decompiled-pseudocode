/*
 * XREFs of ?SetForegroundOnView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180451D10
 * Callers:
 *     ?ControlGainedForActivation@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18044F1E0 (-ControlGainedForActivation@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ?HandleSwitchToView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804506D0 (-HandleSwitchToView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VoiceAssistantPositioner::SetForegroundOnView(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 46) + 24LL))(*((_QWORD *)this + 46));
  if ( v3 < 0 )
  {
    v4 = 376LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
  if ( v3 < 0 )
  {
    v4 = 377LL;
    goto LABEL_3;
  }
  return 0LL;
}
