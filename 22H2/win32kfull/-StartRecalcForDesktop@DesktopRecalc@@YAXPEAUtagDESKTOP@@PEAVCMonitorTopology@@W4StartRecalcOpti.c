/*
 * XREFs of ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C21FC
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C00C03E0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?s_PostRecalcForThread@CRecalcProp@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C00C08C0 (-s_PostRecalcForThread@CRecalcProp@@SAXPEAUtagTHREADINFO@@@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00C09DC (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C00C0A58 (DesktopWindowFromDesktop.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C23C4 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 *     BuildHwndList @ 0x1C00D2540 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall DesktopRecalc::StartRecalcForDesktop(ShellWindowManagement *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r12d
  __int64 v4; // r13
  char v6; // bl
  __int64 v7; // r10
  __int64 result; // rax
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rbp
  _QWORD *v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rsi
  _QWORD *v15; // r14
  __int64 v16; // rdx
  unsigned int v17; // esi
  __int64 v18; // r12
  __int64 v19; // r13
  _QWORD *v20; // r14
  void *v21; // rdx
  __int64 v22; // [rsp+50h] [rbp-38h]
  PETHREAD *v23; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (unsigned int)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      4,
      7,
      89,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      (char)a1);
  }
  DesktopWindowFromDesktop((__int64)a1);
  ShellWindowManagement::BehaviorEnabled(a1, (const struct tagDESKTOP *)0x20);
  result = BuildHwndList(*(ShellWindowManagement **)(v7 + 112));
  v22 = result;
  v11 = result;
  if ( result )
  {
    v12 = (_QWORD *)(result + 32);
    v13 = 0LL;
    v14 = *(_QWORD *)(result + 32);
    v15 = (_QWORD *)(result + 32);
    if ( v14 != 1 )
    {
      do
      {
        if ( (unsigned __int8)CRecalcProp::CreateForTopologyChange(v14, v4, v3, v10) )
        {
          *(_QWORD *)(v11 + 8 * v13 + 32) = v14;
          v13 = (unsigned int)(v13 + 1);
        }
        v14 = *++v15;
      }
      while ( *v15 != 1LL );
      if ( (_DWORD)v13 )
      {
        v17 = 1;
        v18 = (unsigned int)v13;
        do
        {
          if ( *v12 )
          {
            LOBYTE(v16) = 1;
            v23 = *(PETHREAD **)(HMValidateHandleNoSecure(*v12, v16) + 16);
            CRecalcProp::s_PostRecalcForThread(v23);
            if ( v17 < (unsigned int)v13 )
            {
              v19 = (unsigned int)v13 - v17;
              v20 = (_QWORD *)(v11 + 32 + 8LL * v17);
              do
              {
                if ( *v20 )
                {
                  LOBYTE(v16) = 1;
                  if ( *(PETHREAD **)(HMValidateHandleNoSecure(*v20, v16) + 16) == v23 )
                    *v20 = 0LL;
                }
                ++v20;
                --v19;
              }
              while ( v19 );
              v11 = v22;
            }
          }
          ++v17;
          ++v12;
          --v18;
        }
        while ( v18 );
      }
    }
    return FreeHwndList(v11);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 0x40) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = &WPP_be08460427f83b68b58b8518e40b91a4_Traceguids;
      LOBYTE(v21) = v6;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      return WPP_RECORDER_AND_TRACE_SF_(
               WPP_GLOBAL_Control->AttachedDevice,
               (_DWORD)v21,
               v9,
               v10,
               2,
               7,
               90,
               (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
    }
  }
  return result;
}
