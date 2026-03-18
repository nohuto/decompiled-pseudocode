/*
 * XREFs of ?s_RemovePendingWorkForExplicitRestore@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C023B310
 * Callers:
 *     ?xxxOnWindowRestoreFromMinimized@DesktopRecalc@@YA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1C00CD718 (-xxxOnWindowRestoreFromMinimized@DesktopRecalc@@YA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C0082264 (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C00AFA28 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 */

void __fastcall CRecalcProp::s_RemovePendingWorkForExplicitRestore(struct tagWND *a1)
{
  struct CRecalcProp *RecalcProperty; // rax
  int v2; // edx
  int v3; // r8d
  CRecalcProp *v4; // rbx
  __int64 v5; // r9

  RecalcProperty = CRecalcProp::GetRecalcProperty(a1);
  v4 = RecalcProperty;
  if ( RecalcProperty )
  {
    v5 = *((_QWORD *)RecalcProperty + 3);
    if ( v5 )
    {
      LOBYTE(v3) = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v2) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v3) = 0;
      if ( (_BYTE)v2 || (_BYTE)v3 )
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v2,
          v3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          5,
          23,
          47,
          (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
          *(_DWORD *)(*(_QWORD *)(v5 + 32) + 4LL));
      *(_QWORD *)(*((_QWORD *)v4 + 3) + 8LL) = *((_QWORD *)v4 + 4);
      *((_QWORD *)v4 + 4) = *((_QWORD *)v4 + 3);
      *((_QWORD *)v4 + 3) = 0LL;
      CRecalcProp::PruneRecalcStateList(v4, 0LL);
    }
  }
}
