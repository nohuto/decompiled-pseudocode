/*
 * XREFs of ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@PEAW4ProcessingDecision@1@@Z @ 0x1C00FCDBC
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00FC600 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0039CB0 (IsNonImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C00FAA3C (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00FAFB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C00FCCCC (-ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00FD034 (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x1C00FF140 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qds @ 0x1C022A338 (WPP_RECORDER_AND_TRACE_SF_qds.c)
 */

CRecalcState *__fastcall CRecalcState::CreateRecalcState(
        const struct tagWND *a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4)
{
  __int64 v8; // rax
  int v9; // edx
  int v10; // r9d
  CRecalcState *v11; // rbp
  char v12; // r14
  char v13; // bl
  char v15; // di
  char v16; // bl
  __int16 WindowDpiLastNotify; // ax
  __int64 v18; // rdx
  char v19; // di
  char v20; // bl
  char v21; // di
  char v22; // r14
  unsigned int ThreadId; // eax
  unsigned __int16 v24; // cx
  const char *v25; // rdx
  int v26; // r8d
  char v27; // di
  char v28; // bl
  bool v29; // di
  unsigned int v30; // [rsp+48h] [rbp-30h]
  unsigned int v31; // [rsp+48h] [rbp-30h]
  unsigned int v32; // [rsp+48h] [rbp-30h]

  *a4 = 0;
  if ( !IsNonImmersiveBand((__int64)a1) )
  {
    if ( MonitorFromRect(*((_QWORD *)a1 + 5) + 88LL, 0, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL)) )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      if ( *(_WORD *)(*(_QWORD *)(v18 + 40) + 60LL) != WindowDpiLastNotify )
        goto LABEL_2;
      v19 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v20 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v19 = 0;
      if ( !v20 && !v19 )
        return 0LL;
      ThreadId = (unsigned int)PsGetThreadId(**((PETHREAD **)a1 + 2));
      v24 = 19;
    }
    else
    {
      v19 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v20 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v19 = 0;
      if ( !v20 && !v19 )
        return 0LL;
      ThreadId = (unsigned int)PsGetThreadId(**((PETHREAD **)a1 + 2));
      v24 = 18;
    }
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v20,
      v19,
      (__int64)gFullLog,
      5u,
      0x17u,
      v24,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      *(_QWORD *)a1,
      ThreadId);
    return 0LL;
  }
LABEL_2:
  v8 = Win32AllocPoolZInit(80LL, 1920168789LL);
  if ( !v8 || (v11 = (CRecalcState *)CRecalcState::CRecalcState(v8, a1, a2, a3)) == 0LL )
  {
    v29 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = v29;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v10,
        2,
        23,
        20,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
    }
    return 0LL;
  }
  if ( CRecalcState::ShouldDeferRecalc((__int64)a1, 0) )
  {
    v21 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (v22 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v22 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v21 = 0;
    if ( v22 || v21 )
    {
      PsGetThreadId(**((PETHREAD **)a1 + 2));
      v25 = "cloaked";
      LOBYTE(v26) = v21;
      LOBYTE(v25) = v22;
      WPP_RECORDER_AND_TRACE_SF_qds(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v25, v26, (_DWORD)gFullLog);
    }
    *a4 = 2;
  }
  else if ( CRecalcState::NeedsMigration(v11, a1) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v12 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v13 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v13 = 0;
    }
    if ( v12 || v13 )
    {
      v30 = (unsigned int)PsGetThreadId(**((PETHREAD **)a1 + 2));
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v13,
        (__int64)gFullLog,
        5u,
        0x17u,
        0x16u,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        *(_QWORD *)a1,
        v30);
    }
    *a4 = 1;
  }
  else if ( CRecalcState::ShouldStoreAfterProcessing(v11, a1) )
  {
    v27 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (v28 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v28 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v27 = 0;
    if ( v28 || v27 )
    {
      v31 = (unsigned int)PsGetThreadId(**((PETHREAD **)a1 + 2));
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v28,
        v27,
        (__int64)gFullLog,
        5u,
        0x17u,
        0x17u,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        *(_QWORD *)a1,
        v31);
    }
    *a4 = 3;
  }
  else
  {
    v15 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v16 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v15 = 0;
    if ( v16 || v15 )
    {
      v32 = (unsigned int)PsGetThreadId(**((PETHREAD **)a1 + 2));
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v15,
        (__int64)gFullLog,
        5u,
        0x17u,
        0x18u,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        *(_QWORD *)a1,
        v32);
    }
  }
  return v11;
}
