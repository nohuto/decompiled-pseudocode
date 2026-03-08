/*
 * XREFs of ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x1C03C9714
 * Callers:
 *     MonitorSetAdvancedColorParams @ 0x1C03C01F4 (MonitorSetAdvancedColorParams.c)
 * Callees:
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C0167CA8 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C0169354 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01F89F4 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C01FA1E0 (-_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ??8CachedColorData@MonitorColorState@DxgMonitor@@QEBA_NAEBU012@@Z @ 0x1C03C92CC (--8CachedColorData@MonitorColorState@DxgMonitor@@QEBA_NAEBU012@@Z.c)
 *     ??8CachedLuminanceData@MonitorColorState@DxgMonitor@@QEBA_NAEBU012@@Z @ 0x1C03C9350 (--8CachedLuminanceData@MonitorColorState@DxgMonitor@@QEBA_NAEBU012@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetColorProfile(
        DxgMonitor::MonitorColorState *this,
        const struct DISPLAY_COLOR_DATA_RAW *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  _OWORD *v5; // rsi
  bool v6; // di
  bool v7; // cc
  __int128 *v8; // rbp
  __int128 v11; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  bool v15; // al
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  bool v20; // zf
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  DxgMonitor::MonitorColorState *v24; // rcx

  v5 = (_OWORD *)((char *)this + 208);
  v6 = 0;
  v7 = *((_DWORD *)this + 68) <= 5u;
  v8 = (__int128 *)((char *)this + 144);
  v11 = *((_OWORD *)this + 14);
  *((_OWORD *)this + 9) = *((_OWORD *)this + 13);
  v13 = *((_OWORD *)this + 15);
  *((_OWORD *)this + 10) = v11;
  v14 = *((_OWORD *)this + 16);
  *((_OWORD *)this + 11) = v13;
  *((_OWORD *)this + 12) = v14;
  *(_OWORD *)((char *)this + 172) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 188) = *((_OWORD *)a2 + 1);
  if ( v7 )
  {
    v15 = DxgMonitor::MonitorColorState::CachedColorData::operator==((_BYTE *)this + 144, (_BYTE *)this + 208);
    v16 = *v8;
    *((_DWORD *)this + 68) = 5;
    v17 = v8[1];
    v6 = !v15;
    *v5 = v16;
    v18 = v8[2];
    v5[1] = v17;
    v19 = v8[3];
    v5[2] = v18;
    v5[3] = v19;
  }
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  v7 = *((_DWORD *)this + 84) <= 6u;
  *((_DWORD *)this + 75) = a3;
  *((_DWORD *)this + 76) = a4;
  *((_DWORD *)this + 77) = a5;
  if ( v7 )
  {
    v20 = !DxgMonitor::MonitorColorState::CachedLuminanceData::operator==((_DWORD *)this + 78, (_DWORD *)this + 75);
    v22 = *(_DWORD *)(v21 + 8);
    *(_QWORD *)v23 = *(_QWORD *)v21;
    *(_DWORD *)(v23 + 8) = v22;
    *(_QWORD *)((char *)this + 324) = *(_QWORD *)v23;
    *((_DWORD *)this + 83) = v22;
    if ( v20 )
      v6 = 1;
    *((_DWORD *)this + 84) = 6;
    DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this);
  }
  DxgMonitor::MonitorColorState::_UpdateHDRParamsIfRequired(this);
  DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 0, 0);
  DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v24);
  return (unsigned __int8)-!v6;
}
