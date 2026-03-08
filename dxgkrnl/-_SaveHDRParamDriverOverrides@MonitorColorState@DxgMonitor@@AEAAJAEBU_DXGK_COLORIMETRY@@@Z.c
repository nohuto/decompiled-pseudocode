/*
 * XREFs of ?_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z @ 0x1C03C9CA8
 * Callers:
 *     ?_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01F9038 (-_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     MonitorSetDriverColorimetryOverride @ 0x1C03C0640 (MonitorSetDriverColorimetryOverride.c)
 * Callees:
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01F89F4 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C01FA1E0 (-_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::_SaveHDRParamDriverOverrides(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_COLORIMETRY *a2)
{
  bool v3; // cc
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  ULONG MaxFullFrameLuminance; // eax

  *((_DWORD *)this + 20) = (a2->FormatBitDepths.Value >> 2) & 0x3F;
  *((_DWORD *)this + 21) = (a2->FormatBitDepths.Value >> 8) & 0x3F;
  *((_DWORD *)this + 22) = (a2->FormatBitDepths.Value >> 14) & 0x3F;
  *((_DWORD *)this + 23) = (a2->FormatBitDepths.Value >> 20) & 0x3F;
  *((_DWORD *)this + 24) = a2->FormatBitDepths.Value >> 26;
  *((_DWORD *)this + 25) = 0;
  *((_WORD *)this + 52) = 0;
  *((_BYTE *)this + 106) = *(_BYTE *)&a2->StandardColorimetryFlags.0 & 1;
  *((_BYTE *)this + 107) = (a2->StandardColorimetryFlags.Value & 2) != 0;
  *((_DWORD *)this + 27) = a2->RedPoint.cx << 10;
  *((_DWORD *)this + 28) = a2->RedPoint.cy << 10;
  *((_DWORD *)this + 29) = a2->GreenPoint.cx << 10;
  *((_DWORD *)this + 30) = a2->GreenPoint.cy << 10;
  *((_DWORD *)this + 31) = a2->BluePoint.cx << 10;
  *((_DWORD *)this + 32) = a2->BluePoint.cy << 10;
  *((_DWORD *)this + 33) = a2->WhitePoint.cx << 10;
  *((_DWORD *)this + 34) = a2->WhitePoint.cy << 10;
  v3 = *((_DWORD *)this + 68) <= 4u;
  *((_BYTE *)this + 140) = (a2->StandardColorimetryFlags.Value & 4) != 0;
  if ( v3 )
  {
    v4 = *((_OWORD *)this + 5);
    *((_DWORD *)this + 68) = 4;
    v5 = *((_OWORD *)this + 6);
    *((_OWORD *)this + 13) = v4;
    v6 = *((_OWORD *)this + 7);
    *((_OWORD *)this + 14) = v5;
    v7 = *((_OWORD *)this + 8);
    *((_OWORD *)this + 15) = v6;
    *((_OWORD *)this + 16) = v7;
  }
  v3 = *((_DWORD *)this + 84) <= 5u;
  *((_DWORD *)this + 70) = a2->MaxLuminance;
  *((_DWORD *)this + 69) = a2->MinLuminance;
  MaxFullFrameLuminance = a2->MaxFullFrameLuminance;
  *((_DWORD *)this + 71) = MaxFullFrameLuminance;
  if ( v3 )
  {
    *((_QWORD *)this + 39) = *(_QWORD *)((char *)this + 276);
    *((_DWORD *)this + 80) = MaxFullFrameLuminance;
    *(_QWORD *)((char *)this + 324) = *((_QWORD *)this + 39);
    *((_DWORD *)this + 83) = MaxFullFrameLuminance;
    *((_DWORD *)this + 84) = 5;
    DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this);
  }
  DxgMonitor::MonitorColorState::_UpdateHDRParamsIfRequired(this);
  return 0LL;
}
