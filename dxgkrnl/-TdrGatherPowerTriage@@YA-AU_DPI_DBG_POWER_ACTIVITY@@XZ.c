/*
 * XREFs of ?TdrGatherPowerTriage@@YA?AU_DPI_DBG_POWER_ACTIVITY@@XZ @ 0x1C004EFE4
 * Callers:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x1C004EC88 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 TdrGatherPowerTriage()
{
  struct DXGGLOBAL *Global; // rax
  char v1; // cl
  char v2; // dl
  _QWORD *v3; // r10
  _QWORD *v4; // r8
  _QWORD *v5; // r9
  __int64 v6; // rax
  char v7; // al
  char v8; // cl
  char v9; // al
  __int64 v11; // [rsp+30h] [rbp+8h]

  v11 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v1 = 0;
  v2 = 0;
  v3 = (_QWORD *)((char *)Global + 768);
  v4 = (_QWORD *)*((_QWORD *)Global + 96);
  while ( v4 != v3 && v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    v6 = v5[27];
    if ( v6 && *(_DWORD *)(*(_QWORD *)(v6 + 64) + 4304LL) )
    {
      if ( (v1 & 1) != 0 || (v7 = 0, v5[367]) )
        v7 = 1;
      v8 = v7 | v1 & 0xFE;
      if ( (v8 & 2) != 0 || (v9 = 0, *((_DWORD *)v5 + 1153)) )
        v9 = 2;
      v1 = v9 | v8 & 0xFD;
      LOBYTE(v11) = v1;
    }
  }
  if ( (v1 & 1) != 0 || (v1 = v11, g_TdrRecoveryInProgress) )
    v2 = 1;
  LOBYTE(v11) = v2 | v1 & 0xFE;
  return v11;
}
