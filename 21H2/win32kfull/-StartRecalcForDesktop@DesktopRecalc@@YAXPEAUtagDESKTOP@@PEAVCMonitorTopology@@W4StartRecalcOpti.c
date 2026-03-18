/*
 * XREFs of ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015CF00
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@W4StartRecalcOption@@@Z @ 0x1C015CD50 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@W4StartRec.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C006A158 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?s_PostRecalcForThread@CRecalcProp@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C0111150 (-s_PostRecalcForThread@CRecalcProp@@SAXPEAUtagTHREADINFO@@@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C011812C (DesktopWindowFromDesktop.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA?AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015C6CC (-CreateForTopologyChange@CRecalcProp@@SA-AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@.c)
 */

struct tagBWL *__fastcall DesktopRecalc::StartRecalcForDesktop(
        ShellWindowManagement *a1,
        const struct tagWND *a2,
        int a3)
{
  int v3; // ebp
  const struct tagWND *v4; // r12
  char v6; // bl
  bool v7; // al
  __int64 v8; // r10
  struct tagBWL *result; // rax
  int v10; // r8d
  int v11; // r9d
  struct tagBWL *v12; // r13
  void *v13; // rdx
  _QWORD *v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rsi
  _QWORD *v17; // r14
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // r12
  _QWORD *v25; // r14
  struct tagBWL *v26; // [rsp+50h] [rbp-38h]
  struct tagQ **v27; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (unsigned int)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      4,
      23,
      85,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      (char)a1);
  }
  DesktopWindowFromDesktop((__int64)a1);
  v7 = ShellWindowManagement::BehaviorEnabled(a1, (const struct tagDESKTOP *)0x20);
  result = BuildHwndList(
             *(ShellWindowManagement **)(v8 + 112),
             (const struct tagWND *)(32 * (unsigned int)v7 + 2),
             0LL,
             1);
  v26 = result;
  v12 = result;
  if ( result )
  {
    v14 = (_QWORD *)((char *)result + 32);
    v15 = 0LL;
    v16 = *((_QWORD *)result + 4);
    v17 = (_QWORD *)((char *)result + 32);
    if ( v16 != 1 )
    {
      do
      {
        v18 = CRecalcProp::CreateForTopologyChange(v16, v4, v3);
        if ( !v18 )
        {
          *((_QWORD *)v12 + v15 + 4) = v16;
          v15 = (unsigned int)(v15 + 1);
        }
        LODWORD(xmmword_1C0336238) = xmmword_1C0336238 + 1;
        if ( v18 )
        {
          switch ( v18 )
          {
            case 1:
              ++DWORD2(xmmword_1C0336238);
              break;
            case 2:
              ++HIDWORD(xmmword_1C0336238);
              break;
            case 3:
              LODWORD(qword_1C0336248) = qword_1C0336248 + 1;
              break;
            case 4:
              ++HIDWORD(qword_1C0336248);
              break;
          }
        }
        else
        {
          ++DWORD1(xmmword_1C0336238);
        }
        v16 = *++v17;
      }
      while ( *v17 != 1LL );
      if ( (_DWORD)v15 )
      {
        v19 = 1;
        v20 = (unsigned int)v15;
        do
        {
          if ( *v14 )
          {
            v27 = *(struct tagQ ***)(HMValidateHandleNoSecure(*v14, 1) + 16);
            CRecalcProp::s_PostRecalcForThread(v27, v21, v22, v23);
            if ( v19 < (unsigned int)v15 )
            {
              v24 = (unsigned int)v15 - v19;
              v25 = (_QWORD *)((char *)v12 + 8 * v19 + 32);
              do
              {
                if ( *v25 && *(struct tagQ ***)(HMValidateHandleNoSecure(*v25, 1) + 16) == v27 )
                  *v25 = 0LL;
                ++v25;
                --v24;
              }
              while ( v24 );
              v12 = v26;
            }
          }
          ++v19;
          ++v14;
          --v20;
        }
        while ( v20 );
      }
    }
    return (struct tagBWL *)FreeHwndList(v12);
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
      v13 = &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids;
      LOBYTE(v13) = v6;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      return (struct tagBWL *)WPP_RECORDER_AND_TRACE_SF_(
                                WPP_GLOBAL_Control->AttachedDevice,
                                (_DWORD)v13,
                                v10,
                                v11,
                                2,
                                23,
                                86,
                                (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
    }
  }
  return result;
}
