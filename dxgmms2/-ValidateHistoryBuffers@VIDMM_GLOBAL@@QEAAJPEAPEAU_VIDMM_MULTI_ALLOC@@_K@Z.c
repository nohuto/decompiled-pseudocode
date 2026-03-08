/*
 * XREFs of ?ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z @ 0x1C00E9B04
 * Callers:
 *     VidMmValidateHistoryBuffers @ 0x1C002D630 (VidMmValidateHistoryBuffers.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0014AF0 (VidSchMarkDeviceAsError.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ValidateHistoryBuffers(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC **a2, __int64 a3)
{
  struct _VIDMM_MULTI_ALLOC **v3; // r9
  int *v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = &a2[a3];
  while ( 1 )
  {
    if ( a2 == v3 )
      return 0LL;
    v4 = (int *)*a2++;
    if ( (**(_DWORD **)(**(_QWORD **)v4 + 536LL) & 0x4000) == 0 )
      break;
    if ( v4[38] < 2 )
    {
      WdLogSingleEntry2(1LL, v4, v4[38]);
      DxgkLogInternalTriageEvent(v6, 0x40000LL);
      VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v4 + 1) + 32LL));
      return 3221225473LL;
    }
  }
  WdLogSingleEntry2(1LL, v4, **(_QWORD **)v4);
  DxgkLogInternalTriageEvent(v7, 0x40000LL);
  return 3221225473LL;
}
