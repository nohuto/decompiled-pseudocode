__int64 __fastcall CCompiledEffectTemplate::OnCompilationCompleted(CCompiledEffectTemplate *this)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  CNotificationResource *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int v7; // r10d
  int v8; // eax
  __int64 v9; // rcx
  CNotificationResource *v11; // rcx
  __int64 ChannelCallbackId; // rcx
  __int64 v13; // rax
  unsigned int v14; // r10d
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+40h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-10h]

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1240LL) + 40LL);
  CCompiledEffectTemplate::SignalCompileCompletedEvent(this);
  if ( *(_DWORD *)(*((_QWORD *)this + 10) + 64LL) == 2 )
  {
    if ( CNotificationResource::ShouldNotify(this) )
    {
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId(v11);
      v13 = *((unsigned int *)this + 16);
      LODWORD(v18) = v15;
      v19 = ChannelCallbackId;
      v20 = v13;
      v16 = CoreUICallSend(v3, &v19, v14, 8LL, 1, &unk_180339418, v18);
      v2 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x8Eu, 0LL);
    }
  }
  else if ( *(_DWORD *)(*((_QWORD *)this + 10) + 64LL) == 3 )
  {
    if ( CNotificationResource::ShouldNotify(this)
      && (v5 = CNotificationResource::GetChannelCallbackId(v4),
          v6 = *((unsigned int *)this + 16),
          v19 = v5,
          v20 = v6,
          v8 = CoreUICallSend(v3, &v19, v7, 8LL, 0, &unk_18033940E, v18),
          v2 = v8,
          v8 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x80u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(CCompiledEffectTemplate *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
    }
  }
  return v2;
}
