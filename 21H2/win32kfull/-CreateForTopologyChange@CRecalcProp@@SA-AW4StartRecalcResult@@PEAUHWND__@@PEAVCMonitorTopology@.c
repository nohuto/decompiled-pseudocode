/*
 * XREFs of ?CreateForTopologyChange@CRecalcProp@@SA?AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015C6CC
 * Callers:
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015CF00 (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOpti.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C00AE9B0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcProp@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C00AF70C (-ShouldDeferRecalc@CRecalcProp@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@QEAAPEAVCRecalcState@@PEBUtagWND@@@Z @ 0x1C00AF77C (-FindRestorableRecalcState@CRecalcProp@@QEAAPEAVCRecalcState@@PEBUtagWND@@@Z.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1C00B0D2C (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qds @ 0x1C010E014 (WPP_RECORDER_AND_TRACE_SF_qds.c)
 *     ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C011083C (-AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ??0CRecalcState@@QEAA@PEBUtagWND@@PEAVCMonitorTopology@@PEBUtagRECT@@2W4StartRecalcOption@@@Z @ 0x1C015C600 (--0CRecalcState@@QEAA@PEBUtagWND@@PEAVCMonitorTopology@@PEBUtagRECT@@2W4StartRecalcOption@@@Z.c)
 */

__int64 __fastcall CRecalcProp::CreateForTopologyChange(int a1, const struct tagWND *a2, int a3)
{
  char v4; // bl
  char v6; // bp
  const struct tagWND *v7; // rax
  struct tagWND *v8; // r14
  int v9; // edx
  int v10; // r8d
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  struct CRecalcProp *v13; // rax
  CRecalcProp *v14; // r15
  int v15; // r9d
  int v16; // r8d
  __int64 v18; // rax
  int v19; // r8d
  int v20; // r9d
  struct CRecalcState *v21; // rdi
  unsigned int v22; // ebp
  int v23; // edx
  int v24; // r8d
  const char *v25; // rax
  int v26; // edx
  int v27; // [rsp+20h] [rbp-68h]
  int v28; // [rsp+28h] [rbp-60h]
  int v29; // [rsp+30h] [rbp-58h]
  int v30; // [rsp+38h] [rbp-50h]

  v4 = 1;
  v6 = a1;
  v7 = (const struct tagWND *)HMValidateHandleNoSecure(a1, 1);
  v8 = v7;
  if ( !v7 )
    return 4LL;
  if ( !CRecalcProp::IsWindowEligibleForRecalc(v7) )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v10) = 0;
    }
    if ( !(_BYTE)v9 && !(_BYTE)v10 )
      return 1LL;
    v12 = 55;
LABEL_37:
    WPP_RECORDER_AND_TRACE_SF_q(
      v11->AttachedDevice,
      v9,
      v10,
      v12,
      5,
      23,
      v12,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      v6);
    return 1LL;
  }
  v13 = CRecalcProp::EnsureRecalcProperty(v8);
  v14 = v13;
  if ( !v13 )
    return 4LL;
  if ( !*((_QWORD *)v13 + 3) )
  {
    v18 = Win32AllocPoolZInit(72LL, 1920168789LL);
    v21 = (struct CRecalcState *)v18;
    if ( v18 )
    {
      CRecalcState::CRecalcState(v18, v8, a2, 0LL, 0LL, a3);
      *(_QWORD *)v21 = &CRecalcState::`vftable';
      CRecalcProp::AddPendingRecalcWork(v14, v21);
      v22 = 0;
      if ( CRecalcProp::ShouldDeferRecalc(v8, 0) )
      {
        if ( CRecalcProp::FindRestorableRecalcState(v14, v8) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
            || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v23) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v24) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v24) = 0;
          }
          if ( (_BYTE)v23 || (_BYTE)v24 )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v23,
              v24,
              59,
              5,
              23,
              59,
              (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
        }
        else
        {
          v22 = (~*(_BYTE *)(*((_QWORD *)v8 + 5) + 31LL) & 0x20 | 0x40u) >> 5;
        }
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v4 = 0;
      }
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( v22 == 2 )
        {
          v25 = "deferred, minimized";
        }
        else
        {
          v25 = "deferred, cloaked";
          if ( v22 != 3 )
            v25 = "will signal thread";
        }
        WPP_RECORDER_AND_TRACE_SF_qds(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v4,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          v27,
          v28,
          v29,
          v30,
          *(_QWORD *)v8,
          *((_DWORD *)a2 + 1),
          v25);
      }
      return v22;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 58;
      LOBYTE(v26) = v4;
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v26,
        v19,
        v20,
        2,
        23,
        58,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
    }
    return 4LL;
  }
  if ( !CRecalcProp::FindRestorableRecalcState(v13, v8) )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v10) = 0;
    }
    if ( !(_BYTE)v9 && !(_BYTE)v10 )
      return 1LL;
    v12 = 57;
    goto LABEL_37;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v9 || v4 )
  {
    v16 = 56;
    LOBYTE(v16) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v16,
      v15,
      5,
      23,
      56,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
  }
  return 0LL;
}
