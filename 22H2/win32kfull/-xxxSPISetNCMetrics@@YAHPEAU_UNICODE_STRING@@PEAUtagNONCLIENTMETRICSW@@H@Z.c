/*
 * XREFs of ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D6CF4
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0131CE0 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C0061430 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063C1C (GetDpiForSystem.c)
 *     ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D6144 (-RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D6C28 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D6F68 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 */

__int64 __fastcall xxxSPISetNCMetrics(struct _UNICODE_STRING *a1, struct tagNONCLIENTMETRICSW *a2, int a3)
{
  BOOL v6; // ebp
  unsigned int v7; // esi
  int v8; // edi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  int v11; // edx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r8d
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi

  v6 = a3 == 0;
  v7 = 0;
  v8 = 1;
  if ( *(_DWORD *)a2 != 504 )
  {
    *(_DWORD *)a2 = 504;
    DpiForSystem = GetDpiForSystem((__int64)a1);
    DpiDependentMetric = GetDpiDependentMetric(29LL, DpiForSystem);
    v11 = *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 125) = DpiDependentMetric;
    v12 = v11 - DpiDependentMetric;
    *((_DWORD *)a2 + 1) = v12;
    if ( v12 < 1 )
    {
      *((_DWORD *)a2 + 1) = 1;
      v13 = 0;
      if ( v11 - 1 >= 0 )
        v13 = v11 - 1;
      *((_DWORD *)a2 + 125) = v13;
    }
  }
  RescaleNonClientMetrics(a2);
  v14 = 50;
  if ( *((int *)a2 + 1) > 1 )
    v8 = *((_DWORD *)a2 + 1);
  if ( v8 < 50 )
    v14 = v8;
  *((_DWORD *)a2 + 1) = v14;
  if ( a3 )
  {
    v15 = SetWindowMetricInt(a1, 0x88u, v14);
    v16 = SetWindowMetricInt(a1, 0x98u, *((_DWORD *)a2 + 2)) & v15;
    v17 = SetWindowMetricInt(a1, 0x99u, *((_DWORD *)a2 + 3)) & v16;
    v18 = SetWindowMetricInt(a1, 0x89u, *((_DWORD *)a2 + 4)) & v17;
    v19 = SetWindowMetricInt(a1, 0x8Au, *((_DWORD *)a2 + 5)) & v18;
    v20 = SetWindowMetricInt(a1, 0x8Cu, *((_DWORD *)a2 + 29)) & v19;
    v21 = SetWindowMetricInt(a1, 0x8Du, *((_DWORD *)a2 + 30)) & v20;
    v22 = SetWindowMetricInt(a1, 0x8Fu, *((_DWORD *)a2 + 54)) & v21;
    v23 = SetWindowMetricInt(a1, 0x90u, *((_DWORD *)a2 + 55)) & v22;
    v24 = FastWriteProfileValue(a1, 23LL, 139LL, 3LL, (char *)a2 + 24, 92) & v23;
    v25 = FastWriteProfileValue(a1, 23LL, 142LL, 3LL, (char *)a2 + 124, 92) & v24;
    v26 = FastWriteProfileValue(a1, 23LL, 145LL, 3LL, (char *)a2 + 224, 92) & v25;
    v27 = FastWriteProfileValue(a1, 23LL, 156LL, 3LL, (char *)a2 + 316, 92) & v26;
    v28 = FastWriteProfileValue(a1, 23LL, 157LL, 3LL, (char *)a2 + 408, 92) & v27;
    v7 = SetWindowMetricInt(a1, 0x9Eu, *((_DWORD *)a2 + 125)) & v28;
    v6 = v7;
  }
  if ( v6 )
    xxxSetAndDrawNCMetrics(a1, *((_DWORD *)a2 + 1), a2);
  return v7;
}
