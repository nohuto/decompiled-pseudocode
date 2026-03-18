/*
 * XREFs of ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C01FAF68
 * Callers:
 *     ExecuteMarshaledInterceptRequest @ 0x1C01E7A40 (ExecuteMarshaledInterceptRequest.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C01FB07C (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01FCA40 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest(
        CMouseProcessor::MouseInterceptState *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 v12; // xmm1_8
  struct _KEVENT *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _BYTE v17[24]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v18[3]; // [rsp+38h] [rbp-38h] BYREF

  RIMLockExclusive((__int64)this);
  if ( CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(this) )
  {
    if ( *((_DWORD *)this + 8) != (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v5 = *(_OWORD *)((char *)this + 56);
    memset(v17, 0, sizeof(v17));
    v6 = *(_OWORD *)((char *)this + 40);
    v18[1] = v5;
    v18[0] = v6;
    v18[2] = *(_OWORD *)((char *)this + 72);
    v7 = CMouseProcessor::MouseInterceptState::UserModeCallout(this, v18, v17);
    v11 = v7;
    if ( v7 != 2 )
    {
      if ( v7 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
      *(_DWORD *)v17 = v11;
      memset(&v17[4], 0, 20);
    }
    v12 = *(_QWORD *)&v17[16];
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)v17;
    *((_QWORD *)this + 13) = v12;
  }
  v13 = (struct _KEVENT *)*((_QWORD *)this + 14);
  if ( v13 )
  {
    if ( KeReadStateEvent(v13) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    KeSetEvent(*((PRKEVENT *)this + 14), 1, 0);
  }
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
