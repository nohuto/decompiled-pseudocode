/*
 * XREFs of ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C014CBB0
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C014BAF4 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     MonitorGetPreferredScaleFactor @ 0x1C014CC64 (MonitorGetPreferredScaleFactor.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C014CD58 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 */

char __fastcall DpiInternal::GetPreferredScaleFactorForMonitor(DpiInternal *this, void *const a2, int a3, _DWORD *a4)
{
  int v5; // ebx
  __int64 v6; // rsi
  __int64 v9; // rcx
  int PreferredScaleFactor; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned __int8 v14[4]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v15[5]; // [rsp+24h] [rbp-14h] BYREF

  v15[0] = 0;
  v5 = 0;
  v6 = (unsigned int)a2;
  v14[0] = 0;
  IsTargetEmergencySimulatedMonitor(this, (unsigned int)a2, v14);
  if ( v14[0] )
  {
    v11 = (unsigned int)dword_1C00B2A84;
    if ( !dword_1C00B2A84 )
    {
      v5 = -1073741823;
      goto LABEL_7;
    }
  }
  else
  {
    PreferredScaleFactor = MonitorGetPreferredScaleFactor(this, (unsigned int)v6, v15);
    v11 = v15[0];
    v5 = PreferredScaleFactor;
    if ( a3 )
    {
      v9 = 0LL;
      if ( PreferredScaleFactor >= 0 )
        v9 = v15[0];
      dword_1C00B2A84 = v9;
    }
  }
  if ( v5 < 0 )
  {
LABEL_7:
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v11);
    v12[3] = this;
    v12[4] = v6;
    v12[5] = v5;
    *a4 = 0;
    return 0;
  }
  *a4 = v11;
  return 1;
}
