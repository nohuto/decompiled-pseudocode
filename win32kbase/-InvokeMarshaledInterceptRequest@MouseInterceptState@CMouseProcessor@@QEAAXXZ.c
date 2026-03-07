void __fastcall CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest(
        CMouseProcessor::MouseInterceptState *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  unsigned int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // xmm1_8
  struct _KEVENT *v7; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v9[3]; // [rsp+38h] [rbp-38h] BYREF

  RIMLockExclusive((__int64)this);
  if ( CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(this) )
  {
    if ( *((_DWORD *)this + 8) != (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8020);
    v2 = *(_OWORD *)((char *)this + 56);
    memset(v8, 0, sizeof(v8));
    v3 = *(_OWORD *)((char *)this + 40);
    v9[1] = v2;
    v9[0] = v3;
    v9[2] = *(_OWORD *)((char *)this + 72);
    v4 = CMouseProcessor::MouseInterceptState::UserModeCallout(this, v9, v8);
    v5 = v4;
    if ( v4 != 2 )
    {
      if ( v4 > 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8036);
      *(_DWORD *)v8 = v5;
      memset(&v8[4], 0, 20);
    }
    v6 = *(_QWORD *)&v8[16];
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)v8;
    *((_QWORD *)this + 13) = v6;
  }
  v7 = (struct _KEVENT *)*((_QWORD *)this + 14);
  if ( v7 )
  {
    if ( KeReadStateEvent(v7) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8273);
    KeSetEvent(*((PRKEVENT *)this + 14), 1, 0);
  }
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
