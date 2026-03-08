/*
 * XREFs of ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1C0014FF8
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C00FADF0 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00FAFB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00FCADC (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C00FCC9C (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CRecalcProp::s_xxxOnWindowRestoreFromMinimized(
        struct tagWND *a1,
        char a2,
        bool *a3,
        unsigned int *a4,
        struct tagRECT *a5)
{
  struct CRecalcProp *RecalcProperty; // rax
  int v10; // edx
  int v11; // r8d
  struct CRecalcProp *v12; // rbx
  char v14; // di
  int v15; // edx
  unsigned int v16; // eax
  HWND v17; // rcx
  __int64 v18; // rdx
  struct tagRECT *Prop; // rax
  char v20[4]; // [rsp+58h] [rbp-19h] BYREF
  int v21; // [rsp+5Ch] [rbp-15h]
  unsigned int v22; // [rsp+60h] [rbp-11h]
  bool v23; // [rsp+64h] [rbp-Dh]
  __int128 v24; // [rsp+68h] [rbp-9h]
  __int64 v25; // [rsp+78h] [rbp+7h]
  char v26; // [rsp+80h] [rbp+Fh]

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2101LL);
  *a3 = 0;
  *a5 = 0LL;
  RecalcProperty = CRecalcProp::GetRecalcProperty(a1);
  v12 = RecalcProperty;
  if ( !RecalcProperty )
    return 0;
  v14 = 1;
  if ( *((_DWORD *)RecalcProperty + 6) != 1 )
    return 0;
  if ( a2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v14 = 0;
    }
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 73;
      LOBYTE(v15) = v14;
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v11,
        (_DWORD)gFullLog,
        4,
        23,
        73,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        *(_QWORD *)a1,
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)RecalcProperty + 4) + 16LL) + 4LL));
    }
    *(_QWORD *)(*((_QWORD *)v12 + 4) + 8LL) = *((_QWORD *)v12 + 5);
    *((_QWORD *)v12 + 5) = *((_QWORD *)v12 + 4);
    *((_QWORD *)v12 + 4) = 0LL;
    *((_DWORD *)v12 + 6) = 0;
    CRecalcProp::PruneRecalcStateList(v12, 0LL);
    return 0;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      74,
      4,
      23,
      74,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      *(_QWORD *)a1);
  }
  v16 = *a4;
  v17 = *(HWND *)a1;
  v25 = 0LL;
  v24 = 0LL;
  v20[0] = 1;
  v21 = 0;
  v22 = v16;
  v23 = 0;
  v26 = 0;
  CRecalcProp::s_xxxProcessTopologyChange(v17, (struct CRecalcContext *)v20);
  if ( v23 )
  {
    v18 = *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1);
    *a3 = v23;
    *a4 = v22;
    Prop = (struct tagRECT *)GetProp(a1, v18, 1LL);
    if ( Prop )
    {
      if ( (Prop[3].left & 0x18) != 0 )
        ++Prop;
      *a5 = *Prop;
    }
  }
  return v21 == 4;
}
