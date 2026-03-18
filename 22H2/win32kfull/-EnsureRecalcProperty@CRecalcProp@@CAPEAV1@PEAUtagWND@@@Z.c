/*
 * XREFs of ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1C00C26A4
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C23C4 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 * Callees:
 *     ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1C00C20E0 (--_GCRecalcProp@@AEAAPEAXI@Z.c)
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C00C2A50 (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00F0584 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
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
      *(_DWORD *)(v3 + 28) = 0;
      *(_DWORD *)(v3 + 24) = 0;
      *(_QWORD *)(v3 + 32) = 0LL;
      *(_QWORD *)(v3 + 40) = 0LL;
      *(_QWORD *)v3 = &CRecalcProp::`vftable';
      if ( (unsigned int)CWindowProp::SetProp((CWindowProp *)v3, a1) )
      {
        *((_DWORD *)a1 + 80) |= 0x80u;
        return v6;
      }
      LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v8,
          55,
          2,
          7,
          55,
          (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
          *(_QWORD *)a1);
      }
      CRecalcProp::`scalar deleting destructor'(v6);
    }
    else
    {
      LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v4,
          v5,
          54,
          2,
          7,
          54,
          (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
          *(_QWORD *)a1);
      }
    }
    return 0LL;
  }
  return result;
}
