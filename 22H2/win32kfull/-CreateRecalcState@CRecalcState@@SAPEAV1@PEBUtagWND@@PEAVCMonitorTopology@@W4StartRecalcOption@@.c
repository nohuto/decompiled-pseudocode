/*
 * XREFs of ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@PEAW4ProcessingDecision@1@@Z @ 0x1C00C2B6C
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C23C4 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 * Callees:
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C00C0A08 (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00C0F08 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C00C2A80 (-ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C2DDC (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x1C00C3680 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     IsNonImmersiveBand @ 0x1C00CEFB4 (IsNonImmersiveBand.c)
 *     _MonitorFromRect @ 0x1C00D0160 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GetWindowDpiLastNotify @ 0x1C00F0740 (GetWindowDpiLastNotify.c)
 *     WPP_RECORDER_AND_TRACE_SF_qds @ 0x1C0227618 (WPP_RECORDER_AND_TRACE_SF_qds.c)
 */

CRecalcState *__fastcall CRecalcState::CreateRecalcState(const struct tagWND *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  __int64 v8; // rax
  int v9; // r8d
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
  int v30; // edx
  unsigned int v31; // [rsp+48h] [rbp-30h]
  unsigned int v32; // [rsp+48h] [rbp-30h]
  unsigned int v33; // [rsp+48h] [rbp-30h]

  *a4 = 0;
  v5 = a3;
  if ( !(unsigned int)IsNonImmersiveBand(a1, a2, a3) )
  {
    if ( MonitorFromRect(*((_QWORD *)a1 + 5) + 88LL, 0LL) )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      if ( *(_WORD *)(*(_QWORD *)(v18 + 40) + 60LL) != WindowDpiLastNotify )
        goto LABEL_2;
      v19 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
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
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
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
      7u,
      v24,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      *(_QWORD *)a1,
      ThreadId);
    return 0LL;
  }
LABEL_2:
  v8 = Win32AllocPoolZInit(80LL, 1920168789LL);
  if ( !v8 || (v11 = (CRecalcState *)CRecalcState::CRecalcState(v8, a1, a2, v5)) == 0LL )
  {
    v29 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = 20;
      LOBYTE(v30) = v29;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v30,
        v9,
        v10,
        2,
        7,
        20,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
    }
    return 0LL;
  }
  if ( CRecalcState::ShouldDeferRecalc((__int64)a1, 0) )
  {
    v21 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
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
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
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
      v31 = (unsigned int)PsGetThreadId(**((PETHREAD **)a1 + 2));
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v13,
        (__int64)gFullLog,
        5u,
        7u,
        0x16u,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
        *(_QWORD *)a1,
        v31);
    }
    *a4 = 1;
  }
  else if ( CRecalcState::ShouldStoreAfterProcessing(v11, a1) )
  {
    v27 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (v28 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v28 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v27 = 0;
    if ( v28 || v27 )
    {
      v32 = (unsigned int)PsGetThreadId(**((PETHREAD **)a1 + 2));
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v28,
        v27,
        (__int64)gFullLog,
        5u,
        7u,
        0x17u,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
        *(_QWORD *)a1,
        v32);
    }
    *a4 = 3;
  }
  else
  {
    v15 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v16 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v15 = 0;
    if ( v16 || v15 )
    {
      v33 = (unsigned int)PsGetThreadId(**((PETHREAD **)a1 + 2));
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v15,
        (__int64)gFullLog,
        5u,
        7u,
        0x18u,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
        *(_QWORD *)a1,
        v33);
    }
  }
  return v11;
}
