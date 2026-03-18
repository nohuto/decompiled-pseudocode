/*
 * XREFs of ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1C00B0D2C
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA?AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015C6CC (-CreateForTopologyChange@CRecalcProp@@SA-AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@.c)
 *     ?CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z @ 0x1C023AB38 (-CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C0082264 (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0083090 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1C00B0CB0 (--_GCRecalcProp@@AEAAPEAXI@Z.c)
 */

struct CRecalcProp *__fastcall CRecalcProp::EnsureRecalcProperty(struct tagWND *a1)
{
  struct CRecalcProp *result; // rax
  __int64 v3; // rax
  int v4; // edx
  int v5; // r8d
  CRecalcProp *v6; // rbx
  int v7; // edx
  int v8; // r8d

  result = CRecalcProp::GetRecalcProperty(a1);
  if ( !result )
  {
    v3 = Win32AllocPoolZInit(48LL, 1920168789LL);
    v6 = (CRecalcProp *)v3;
    if ( v3 )
    {
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_DWORD *)(v3 + 44) = 0;
      *(_QWORD *)(v3 + 24) = 0LL;
      *(_QWORD *)(v3 + 32) = 0LL;
      *(_DWORD *)(v3 + 40) = 0;
      *(_QWORD *)v3 = &CRecalcProp::`vftable';
      if ( (unsigned int)CWindowProp::SetProp((CWindowProp *)v3, (__int64)a1) )
      {
        *((_DWORD *)a1 + 80) |= 0x80u;
        return v6;
      }
      LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v8,
          40,
          2,
          23,
          40,
          (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
          *(_QWORD *)a1);
      }
      CRecalcProp::`scalar deleting destructor'(v6);
    }
    else
    {
      LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v4,
          v5,
          39,
          2,
          23,
          39,
          (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
          *(_QWORD *)a1);
      }
    }
    return 0LL;
  }
  return result;
}
