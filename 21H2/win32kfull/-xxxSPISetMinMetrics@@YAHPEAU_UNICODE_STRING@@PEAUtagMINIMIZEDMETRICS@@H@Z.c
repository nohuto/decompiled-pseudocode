/*
 * XREFs of ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C00C8B70
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00C8BFC (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00C8AD0 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C0157F48 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 */

__int64 __fastcall xxxSPISetMinMetrics(struct _UNICODE_STRING *a1, struct tagMINIMIZEDMETRICS *a2, int a3)
{
  BOOL v6; // ebp
  unsigned int v7; // ebx
  INT DpiForSystem; // r15d
  INT v9; // edx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx

  v6 = a3 == 0;
  v7 = 0;
  DpiForSystem = GetDpiForSystem((__int64)a1, (__int64)a2);
  v9 = *(unsigned __int16 *)(gpsi + 6998LL);
  if ( DpiForSystem != v9 )
  {
    *((_DWORD *)a2 + 1) = EngMulDiv(*((_DWORD *)a2 + 1), v9, DpiForSystem);
    *((_DWORD *)a2 + 2) = EngMulDiv(*((_DWORD *)a2 + 2), *(unsigned __int16 *)(gpsi + 6998LL), DpiForSystem);
    *((_DWORD *)a2 + 3) = EngMulDiv(*((_DWORD *)a2 + 3), *(unsigned __int16 *)(gpsi + 6998LL), DpiForSystem);
  }
  if ( a3 )
  {
    v11 = SetWindowMetricInt(a1, 0x92u, *((_DWORD *)a2 + 1));
    v12 = SetWindowMetricInt(a1, 0x93u, *((_DWORD *)a2 + 2)) & v11;
    v13 = SetWindowMetricInt(a1, 0x94u, *((_DWORD *)a2 + 3)) & v12;
    v7 = SetWindowMetricInt(a1, 0x96u, *((_DWORD *)a2 + 4)) & v13;
    v6 = v7;
  }
  if ( v6 )
    xxxSetAndDrawMinMetrics(a1, a2);
  return v7;
}
