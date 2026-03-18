/*
 * XREFs of ?xxxOnWindowRestoreFromMinimized@DesktopRecalc@@YA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1C00CD718
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?HasPendingWork@CRecalcProp@@SA_NPEBUtagWND@@@Z @ 0x1C0082238 (-HasPendingWork@CRecalcProp@@SA_NPEBUtagWND@@@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SA?AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00AEF6C (-s_xxxProcessTopologyChange@CRecalcProp@@SA-AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcConte.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?s_RemovePendingWorkForExplicitRestore@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C023B310 (-s_RemovePendingWorkForExplicitRestore@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 */

bool __fastcall DesktopRecalc::xxxOnWindowRestoreFromMinimized(
        DesktopRecalc *this,
        struct tagWND *a2,
        _BYTE *a3,
        bool *a4,
        unsigned int *a5)
{
  int v8; // edx
  int v9; // r8d
  int v11; // eax
  __int64 v12; // rcx
  char v13; // al
  char v14; // bl
  int v15; // ecx
  __int64 TargetInfoAsUlong_low; // rdx
  __int64 Prop; // rax
  char v18[4]; // [rsp+50h] [rbp-58h] BYREF
  int v19; // [rsp+54h] [rbp-54h]
  char v20; // [rsp+58h] [rbp-50h]
  __int128 v21; // [rsp+5Ch] [rbp-4Ch]

  *a3 = 0;
  *(_OWORD *)a5 = 0LL;
  if ( (_BYTE)a2 )
  {
    CRecalcProp::s_RemovePendingWorkForExplicitRestore(this);
    return 0;
  }
  if ( !CRecalcProp::HasPendingWork(this) )
    return 0;
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      83,
      4,
      23,
      83,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      *(_QWORD *)this);
  }
  v11 = *(_DWORD *)a4;
  v12 = *(_QWORD *)this;
  v21 = 0LL;
  v18[0] = 1;
  v19 = v11;
  v20 = 0;
  CRecalcProp::s_xxxProcessTopologyChange(v12, (__int64)v18);
  v14 = v13;
  if ( v20 )
  {
    v15 = v19;
    TargetInfoAsUlong_low = LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
    *a3 = v20;
    *(_DWORD *)a4 = v15;
    Prop = GetProp((__int64)this, TargetInfoAsUlong_low, 1u);
    if ( Prop )
    {
      if ( (*(_DWORD *)(Prop + 48) & 0x18) != 0 )
        Prop += 16LL;
      *(_OWORD *)a5 = *(_OWORD *)Prop;
    }
  }
  return (v14 & 0x40) != 0;
}
