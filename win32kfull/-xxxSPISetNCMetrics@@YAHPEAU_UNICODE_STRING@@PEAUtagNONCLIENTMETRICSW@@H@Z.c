__int64 __fastcall xxxSPISetNCMetrics(struct _UNICODE_STRING *a1, struct tagNONCLIENTMETRICSW *a2, int a3)
{
  BOOL v6; // esi
  unsigned int v7; // edi
  int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r8d
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // edi

  v6 = a3 == 0;
  v7 = 0;
  if ( *(_DWORD *)a2 != 504 )
  {
    *(_DWORD *)a2 = 504;
    DpiForSystem = GetDpiForSystem((__int64)a1);
    DpiDependentMetric = GetDpiDependentMetric(29, DpiForSystem);
    v10 = *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 125) = DpiDependentMetric;
    v11 = v10 - DpiDependentMetric;
    *((_DWORD *)a2 + 1) = v11;
    if ( v11 < 1 )
    {
      *((_DWORD *)a2 + 1) = 1;
      v12 = 0;
      if ( v10 - 1 >= 0 )
        v12 = v10 - 1;
      *((_DWORD *)a2 + 125) = v12;
    }
  }
  RescaleNonClientMetrics(a2);
  v13 = *((_DWORD *)a2 + 1);
  if ( v13 <= 1 )
  {
    v13 = 1;
    goto LABEL_10;
  }
  v14 = 50;
  if ( v13 < 50 )
LABEL_10:
    v14 = v13;
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
