/*
 * XREFs of ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00FC43C
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C00F954C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?s_PostRecalcForThread@CRecalcProp@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C00FA8F0 (-s_PostRecalcForThread@CRecalcProp@@SAXPEAUtagTHREADINFO@@@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00FAA10 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C00FAA8C (DesktopWindowFromDesktop.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00FC600 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 */

void __fastcall DesktopRecalc::StartRecalcForDesktop(ShellWindowManagement *a1, __int64 a2, unsigned int a3)
{
  char v6; // bl
  char v7; // dl
  bool v8; // al
  __int64 v9; // r10
  struct tagBWL *v10; // rax
  int v11; // r8d
  int v12; // r9d
  struct tagBWL *v13; // rbp
  _QWORD *v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rsi
  _QWORD *v17; // r14
  unsigned int v18; // esi
  __int64 v19; // r12
  __int64 v20; // r13
  _QWORD *v21; // r14
  void *v22; // rdx
  struct tagBWL *v23; // [rsp+50h] [rbp-38h]
  PETHREAD *v24; // [rsp+A8h] [rbp+20h]

  v6 = 1;
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      4u,
      0x17u,
      0x59u,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      a1);
  DesktopWindowFromDesktop((__int64)a1);
  v8 = ShellWindowManagement::BehaviorEnabled(a1, (const struct tagDESKTOP *)0x20);
  v10 = BuildHwndList(*(ShellWindowManagement **)(v9 + 112), 32 * v8 + 2, 0LL, 1);
  v23 = v10;
  v13 = v10;
  if ( v10 )
  {
    v14 = (_QWORD *)((char *)v10 + 32);
    v15 = 0LL;
    v16 = *((_QWORD *)v10 + 4);
    v17 = (_QWORD *)((char *)v10 + 32);
    if ( v16 != 1 )
    {
      do
      {
        if ( (unsigned __int8)CRecalcProp::CreateForTopologyChange(v16, a2, a3) )
        {
          *((_QWORD *)v13 + v15 + 4) = v16;
          v15 = (unsigned int)(v15 + 1);
        }
        v16 = *++v17;
      }
      while ( *v17 != 1LL );
      if ( (_DWORD)v15 )
      {
        v18 = 1;
        v19 = (unsigned int)v15;
        do
        {
          if ( *v14 )
          {
            v24 = *(PETHREAD **)(HMValidateHandleNoSecure(*v14, 1) + 16);
            CRecalcProp::s_PostRecalcForThread(v24);
            if ( v18 < (unsigned int)v15 )
            {
              v20 = (unsigned int)v15 - v18;
              v21 = (_QWORD *)((char *)v13 + 8 * v18 + 32);
              do
              {
                if ( *v21 )
                {
                  if ( *(PETHREAD **)(HMValidateHandleNoSecure(*v21, 1) + 16) == v24 )
                    *v21 = 0LL;
                }
                ++v21;
                --v20;
              }
              while ( v20 );
              v13 = v23;
            }
          }
          ++v18;
          ++v14;
          --v19;
        }
        while ( v19 );
      }
    }
    FreeHwndList(v13);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = &WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids;
      LOBYTE(v22) = v6;
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v22,
        v11,
        v12,
        2,
        23,
        90,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
    }
  }
}
