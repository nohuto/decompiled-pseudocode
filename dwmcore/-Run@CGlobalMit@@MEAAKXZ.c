__int64 __fastcall CGlobalMit::Run(CGlobalMit *this)
{
  _QWORD *v2; // rax
  void **v3; // rcx
  int SystemInputHost; // eax
  unsigned int v5; // ebx
  wil::details *updated; // rax
  CMmcssTask *v7; // rcx
  int v8; // r9d
  int v9; // eax
  __int64 v10; // rcx
  void *v11; // rcx
  __int64 result; // rax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  GetCurrentThreadId();
  v2 = operator new(8uLL);
  if ( v2 )
  {
    v3 = &CInputProxy::`vftable';
    *v2 = &CInputProxy::`vftable';
  }
  else
  {
    v2 = 0LL;
  }
  *((_QWORD *)this + 5) = v2;
  if ( !v2 )
  {
    v5 = -2147024882;
    v13 = 131;
LABEL_19:
    v8 = v5;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, &dword_180382F80, 2u, v8, v13, 0LL);
    goto LABEL_29;
  }
  SystemInputHost = CoreUICreateEx(1LL, &CMit::s_pMessageSession);
  v5 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v13 = 137;
    goto LABEL_27;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), CGlobalMit *))(*(_QWORD *)CMit::s_pMessageSession + 272LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 3),
                      CGlobalMit::OnResetEvent,
                      this);
  v5 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v13 = 139;
    goto LABEL_27;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), CGlobalMit *))(*(_QWORD *)CMit::s_pMessageSession + 272LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 17),
                      CGlobalMit::OnResetEvent,
                      this);
  v5 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v13 = 140;
    goto LABEL_27;
  }
  SystemInputHost = CreateSystemInputHost(*((_QWORD *)this + 5), 0LL, &CMit::s_pSystemInputHost);
  v5 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v13 = 145;
LABEL_27:
    v8 = SystemInputHost;
    goto LABEL_28;
  }
  updated = (wil::details *)MITGetCursorUpdateHandle();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 18,
    updated);
  if ( !(unsigned int)NtMITActivateInputProcessing(CGlobalMit::s_HitTestRequest, &v14) )
  {
    v5 = -2147467259;
    v13 = 152;
    goto LABEL_19;
  }
  v5 = 0;
  CGlobalMit::InitializeCoreMessagingIocp(v14);
  while ( !*((_BYTE *)this + 32) )
  {
    ResetEvent(*((HANDLE *)this + 3));
    if ( *((_BYTE *)this + 32) )
      break;
    v7 = (CGlobalMit *)((char *)this + 48);
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 416LL) )
    {
      v9 = CMmcssTask::Apply(v7, 1);
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xEEu, 0LL);
    }
    else
    {
      CMmcssTask::Revert(v7);
    }
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 232LL))(CMit::s_pMessageSession);
  }
  NtMITDeactivateInputProcessing();
LABEL_29:
  if ( CMit::s_pSystemInputHost )
  {
    (*(void (__fastcall **)(struct ISystemInputHost *))(*(_QWORD *)CMit::s_pSystemInputHost + 16LL))(CMit::s_pSystemInputHost);
    CMit::s_pSystemInputHost = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 5);
  if ( v11 )
  {
    operator delete(v11, 8uLL);
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( CMit::s_pMessageCallSendHost )
  {
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)CMit::s_pMessageCallSendHost + 16LL))(CMit::s_pMessageCallSendHost);
    CMit::s_pMessageCallSendHost = 0LL;
  }
  if ( CMit::s_pMessageSession )
  {
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 280LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 17));
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 280LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 3));
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 16LL))(CMit::s_pMessageSession);
    CMit::s_pMessageSession = 0LL;
  }
  result = (unsigned __int16)v5;
  if ( (v5 & 0x1FFF0000) != 0x70000 )
    return v5;
  return result;
}
