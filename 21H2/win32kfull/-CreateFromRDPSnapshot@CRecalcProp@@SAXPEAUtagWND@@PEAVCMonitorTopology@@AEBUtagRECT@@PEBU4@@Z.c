/*
 * XREFs of ?CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z @ 0x1C023AB38
 * Callers:
 *     RestoreMonitorsAndWindowsRects @ 0x1C01D2C24 (RestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C00AE9B0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcProp@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C00AF70C (-ShouldDeferRecalc@CRecalcProp@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00B0AE8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1C00B0D2C (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C011083C (-AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ??0CRecalcState@@QEAA@PEBUtagWND@@PEAVCMonitorTopology@@PEBUtagRECT@@2W4StartRecalcOption@@@Z @ 0x1C015C600 (--0CRecalcState@@QEAA@PEBUtagWND@@PEAVCMonitorTopology@@PEBUtagRECT@@2W4StartRecalcOption@@@Z.c)
 *     ?Feature_Erpsrbspi__private_IsEnabledPreCheck@@YAHXZ @ 0x1C015CB10 (-Feature_Erpsrbspi__private_IsEnabledPreCheck@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     UPDWORDValue @ 0x1C01CEE74 (UPDWORDValue.c)
 *     ?s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C023B1C4 (-s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddd @ 0x1C023C13C (WPP_RECORDER_AND_TRACE_SF_qddddddd.c)
 */

void __fastcall CRecalcProp::CreateFromRDPSnapshot(
        struct tagWND *a1,
        struct CMonitorTopology *a2,
        const struct tagRECT *a3,
        struct tagRECT *a4)
{
  int v8; // edx
  bool v9; // bl
  int v10; // r8d
  char v11; // di
  const char *v12; // rax
  struct CRecalcProp *v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  struct CRecalcState *v18; // rsi
  __int64 v19; // rbp
  char v20; // dl
  char v21; // r8
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  int v23; // r8d
  int v24; // edx
  int v25; // [rsp+28h] [rbp-80h]

  Feature_Erpsrbspi__private_IsEnabledPreCheck();
  v9 = (unsigned int)UPDWORDValue(8238LL) == 0;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v8 || (_BYTE)v10 )
  {
    v12 = "Enabled";
    if ( !v9 )
      v12 = "Disabled";
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v10,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      5,
      23,
      79,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      (__int64)v12);
  }
  if ( !v9 )
  {
    if ( CRecalcProp::IsWindowEligibleForRecalc(a1) )
    {
      v13 = CRecalcProp::EnsureRecalcProperty(a1);
      if ( v13 )
      {
        v14 = Win32AllocPoolZInit(80LL, 1920168789LL);
        v18 = (struct CRecalcState *)v14;
        if ( v14 )
        {
          CRecalcState::CRecalcState(v14, a1, a2, (__int128 *)&a3->left, a4, 0);
          *((_BYTE *)v18 + 60) = 1;
          *(_QWORD *)v18 = &CRDPRecalcState::`vftable';
          *((_BYTE *)v18 + 72) = a4 != 0LL;
          v19 = *((_QWORD *)v13 + 3);
          if ( v19 )
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
              WPP_RECORDER_AND_TRACE_SF_qd(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v20,
                v21,
                (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                5u,
                0x17u,
                0x3Eu,
                (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
            v22 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v13 + 3);
            if ( v22 )
              (**v22)(v22, 1LL);
            *((_QWORD *)v13 + 3) = 0LL;
          }
          CRecalcProp::AddPendingRecalcWork(v13, v18);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v11 = 0;
          }
          if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v24 = 63;
            LOBYTE(v24) = v11;
            LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qddddddd(
              WPP_GLOBAL_Control->AttachedDevice,
              v24,
              v23,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              v25,
              63);
          }
          if ( !v19 && !CRecalcProp::ShouldDeferRecalc(a1, 0) )
            CRecalcProp::s_PostRecalcForWindow(a1);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v11 = 0;
          }
          if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = v11;
            LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v15,
              v16,
              v17,
              2,
              23,
              61,
              (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
          }
        }
      }
    }
  }
}
