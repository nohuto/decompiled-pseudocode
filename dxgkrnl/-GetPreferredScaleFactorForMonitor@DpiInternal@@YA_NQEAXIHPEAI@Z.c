/*
 * XREFs of ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C0167338
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0169828 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     MonitorGetPreferredScaleFactor @ 0x1C01673EC (MonitorGetPreferredScaleFactor.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C0167480 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 */

char __fastcall DpiInternal::GetPreferredScaleFactorForMonitor(DpiInternal *this, void *const a2, int a3, int *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int PreferredScaleFactor; // eax
  int v13; // ebx
  _QWORD *v14; // rax
  int v16; // eax
  unsigned __int8 v17[4]; // [rsp+20h] [rbp-18h] BYREF
  int v18[5]; // [rsp+24h] [rbp-14h] BYREF

  v18[0] = 0;
  v5 = (unsigned int)a2;
  v17[0] = 0;
  IsTargetEmergencySimulatedMonitor(this, (unsigned int)a2, v17);
  if ( v17[0] )
  {
    v16 = dword_1C013B3E0;
    if ( !dword_1C013B3E0 )
    {
      v13 = -1073741823;
      goto LABEL_5;
    }
  }
  else
  {
    PreferredScaleFactor = MonitorGetPreferredScaleFactor(this, (unsigned int)v5, v18);
    v13 = PreferredScaleFactor;
    if ( a3 )
    {
      if ( PreferredScaleFactor < 0 )
      {
        dword_1C013B3E0 = 0;
LABEL_5:
        v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
        v14[3] = this;
        v14[4] = v5;
        v14[5] = v13;
        *a4 = 0;
        return 0;
      }
      v16 = v18[0];
      dword_1C013B3E0 = v18[0];
    }
    else
    {
      if ( PreferredScaleFactor < 0 )
        goto LABEL_5;
      v16 = v18[0];
    }
  }
  *a4 = v16;
  return 1;
}
