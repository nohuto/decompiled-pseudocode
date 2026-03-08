/*
 * XREFs of ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C00FADF0
 * Callers:
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1C0014FF8 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00FC600 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00FCADC (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C00FAA3C (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRecalcProp::PruneRecalcStateList(const struct tagWND **this, struct CRecalcState *a2)
{
  CRecalcState **v2; // rbx
  unsigned int v3; // edi
  char v6; // dl
  char v7; // r8
  CRecalcState *v8; // rcx
  void (__fastcall **v9)(CRecalcState *, __int64); // rax
  char v10; // dl
  char v11; // r8
  __int64 v12; // [rsp+40h] [rbp-28h]

  v2 = this + 5;
  v3 = 0;
  while ( *v2 && v3 < 3 )
  {
    if ( *v2 == a2 || !CRecalcState::ShouldStoreAfterProcessing(*v2, this[2]) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v6 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v7 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v7 = 0;
      }
      if ( v6 || v7 )
      {
        LODWORD(v12) = *(_DWORD *)(*((_QWORD *)*v2 + 2) + 4LL);
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v6,
          v7,
          (__int64)gFullLog,
          5u,
          0x17u,
          0x52u,
          (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
          v12);
      }
      v8 = *v2;
      *v2 = (CRecalcState *)*((_QWORD *)*v2 + 1);
      v9 = *(void (__fastcall ***)(CRecalcState *, __int64))v8;
      *((_QWORD *)v8 + 1) = 0LL;
      (*v9)(v8, 1LL);
    }
    else
    {
      ++v3;
      v2 = (CRecalcState **)((char *)*v2 + 8);
    }
  }
  if ( *v2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v10 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v11 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v11 = 0;
    }
    if ( v10 || v11 )
    {
      LODWORD(v12) = *(_DWORD *)(*((_QWORD *)*v2 + 2) + 4LL);
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        (__int64)gFullLog,
        5u,
        0x17u,
        0x53u,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        v12);
    }
    if ( *v2 )
      (**(void (__fastcall ***)(CRecalcState *, __int64))*v2)(*v2, 1LL);
    *v2 = 0LL;
  }
}
