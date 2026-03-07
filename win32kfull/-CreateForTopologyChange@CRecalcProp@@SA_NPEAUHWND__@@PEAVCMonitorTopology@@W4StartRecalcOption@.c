char __fastcall CRecalcProp::CreateForTopologyChange(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // bl
  const struct tagWND *v7; // rax
  PETHREAD **v8; // r14
  struct CRecalcProp *v10; // rax
  struct CRecalcProp *v11; // rdi
  int v12; // eax
  struct CRecalcState *v13; // rax
  int v14; // esi
  char v15; // si
  char v16; // di
  _QWORD *v17; // rsi
  void (__fastcall ***v18)(_QWORD, __int64); // rcx
  char v19; // di
  char v20; // si
  char v21; // di
  char v22; // di
  unsigned int ThreadId; // [rsp+48h] [rbp-30h]
  unsigned int v24; // [rsp+48h] [rbp-30h]
  unsigned int v25; // [rsp+48h] [rbp-30h]
  unsigned int v26; // [rsp+48h] [rbp-30h]
  int v27; // [rsp+98h] [rbp+20h] BYREF

  v4 = 1;
  v7 = (const struct tagWND *)HMValidateHandleNoSecure(a1, 1);
  v8 = (PETHREAD **)v7;
  if ( !v7 )
    return 0;
  if ( !CRecalcProp::IsWindowEligibleForRecalc(v7) )
    return 0;
  v10 = CRecalcProp::EnsureRecalcProperty((struct tagWND *)v8);
  v11 = v10;
  if ( !v10 )
    return 0;
  v12 = *((_DWORD *)v10 + 6);
  if ( v12 == 1 )
  {
    if ( CRecalcProp::HasRestorableState(v11) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v20 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v21 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v21 = 0;
      }
      if ( v20 || v21 )
      {
        ThreadId = (unsigned int)PsGetThreadId(*v8[2]);
        WPP_RECORDER_AND_TRACE_SF_qd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v21,
          (__int64)gFullLog,
          5u,
          0x17u,
          0x42u,
          (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
          a1,
          ThreadId);
      }
      return 1;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v19 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v4 = 0;
    if ( v19 || v4 )
    {
      v24 = (unsigned int)PsGetThreadId(*v8[2]);
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v4,
        (__int64)gFullLog,
        5u,
        0x17u,
        0x43u,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        a1,
        v24);
    }
    return 0;
  }
  if ( v12 == 2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v4 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = (unsigned int)PsGetThreadId(*v8[2]);
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v22,
        (__int64)gFullLog,
        3u,
        0x17u,
        0x44u,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        a1,
        v25);
    }
    return 0;
  }
  v27 = 0;
  v13 = (struct CRecalcState *)CRecalcState::CreateRecalcState(v8, a2, a3, &v27);
  if ( !v13 )
    return 0;
  CRecalcProp::AddPendingRecalcWork(v11, v13);
  v14 = v27;
  if ( v27 == 1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v15 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v16 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v16 = 0;
    }
    if ( v15 || v16 )
    {
      v26 = (unsigned int)PsGetThreadId(*v8[2]);
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        (__int64)gFullLog,
        5u,
        0x17u,
        0x45u,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        *v8,
        v26);
    }
    return 1;
  }
  if ( !CRecalcProp::HasRestorableState(v11) )
  {
    if ( v14 != 2 )
    {
      if ( v14 == 3 )
      {
        v17 = (_QWORD *)((char *)v11 + 32);
        *(_QWORD *)(*((_QWORD *)v11 + 4) + 8LL) = *((_QWORD *)v11 + 5);
        *((_QWORD *)v11 + 5) = *((_QWORD *)v11 + 4);
        CRecalcProp::PruneRecalcStateList((const struct tagWND **)v11, 0LL);
      }
      else
      {
        if ( v14 )
        {
          v27 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1999LL);
        }
        v17 = (_QWORD *)((char *)v11 + 32);
        v18 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v11 + 4);
        if ( v18 )
          (**v18)(v18, 1LL);
      }
      *v17 = 0LL;
      *((_DWORD *)v11 + 6) = 0;
    }
    return 0;
  }
  return 1;
}
