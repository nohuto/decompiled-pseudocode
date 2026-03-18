/*
 * XREFs of ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C0157CE0
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00C8BFC (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C0157F48 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01580A8 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 */

__int64 __fastcall xxxSPISetNCMetrics(__int64 a1, struct tagNONCLIENTMETRICSW *a2, int a3)
{
  struct tagNONCLIENTMETRICSW *v4; // rbx
  struct _UNICODE_STRING *v5; // rsi
  BOOL v6; // ebp
  unsigned int v7; // edi
  INT v8; // r15d
  INT v9; // edx
  int v10; // eax
  int v11; // r8d
  int v12; // edi
  int v13; // edi
  int v14; // edi
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
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // eax
  int v29; // eax
  int v30; // eax

  v4 = a2;
  v5 = (struct _UNICODE_STRING *)a1;
  v6 = a3 == 0;
  v7 = 0;
  if ( *(_DWORD *)a2 != 504 )
  {
    *(_DWORD *)a2 = 504;
    DpiForSystem = GetDpiForSystem(a1, (__int64)a2);
    DpiDependentMetric = GetDpiDependentMetric(29LL, DpiForSystem);
    a2 = (struct tagNONCLIENTMETRICSW *)*((unsigned int *)v4 + 1);
    a1 = DpiDependentMetric;
    *((_DWORD *)v4 + 125) = DpiDependentMetric;
    v29 = (_DWORD)a2 - DpiDependentMetric;
    *((_DWORD *)v4 + 1) = v29;
    if ( v29 < 1 )
    {
      a1 = (unsigned int)((_DWORD)a2 - 1);
      *((_DWORD *)v4 + 1) = 1;
      v30 = 0;
      if ( (int)a1 >= 0 )
        v30 = (_DWORD)a2 - 1;
      *((_DWORD *)v4 + 125) = v30;
    }
  }
  v8 = GetDpiForSystem(a1, (__int64)a2);
  v9 = *(unsigned __int16 *)(gpsi + 6998LL);
  if ( v8 != v9 )
  {
    *((_DWORD *)v4 + 4) = EngMulDiv(*((_DWORD *)v4 + 4), v9, v8);
    *((_DWORD *)v4 + 5) = EngMulDiv(*((_DWORD *)v4 + 5), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 7) = EngMulDiv(*((_DWORD *)v4 + 7), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 6) = EngMulDiv(*((_DWORD *)v4 + 6), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 29) = EngMulDiv(*((_DWORD *)v4 + 29), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 30) = EngMulDiv(*((_DWORD *)v4 + 30), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 32) = EngMulDiv(*((_DWORD *)v4 + 32), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 31) = EngMulDiv(*((_DWORD *)v4 + 31), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 54) = EngMulDiv(*((_DWORD *)v4 + 54), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 55) = EngMulDiv(*((_DWORD *)v4 + 55), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 57) = EngMulDiv(*((_DWORD *)v4 + 57), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 56) = EngMulDiv(*((_DWORD *)v4 + 56), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 80) = EngMulDiv(*((_DWORD *)v4 + 80), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 79) = EngMulDiv(*((_DWORD *)v4 + 79), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 103) = EngMulDiv(*((_DWORD *)v4 + 103), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 102) = EngMulDiv(*((_DWORD *)v4 + 102), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 2) = EngMulDiv(*((_DWORD *)v4 + 2), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 3) = EngMulDiv(*((_DWORD *)v4 + 3), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 1) = EngMulDiv(*((_DWORD *)v4 + 1), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)v4 + 125) = EngMulDiv(*((_DWORD *)v4 + 125), *(unsigned __int16 *)(gpsi + 6998LL), v8);
  }
  v10 = *((_DWORD *)v4 + 1);
  if ( v10 <= 1 )
  {
    v10 = 1;
LABEL_6:
    v11 = v10;
    goto LABEL_7;
  }
  v11 = 50;
  if ( v10 < 50 )
    goto LABEL_6;
LABEL_7:
  *((_DWORD *)v4 + 1) = v11;
  if ( a3 )
  {
    v12 = SetWindowMetricInt(v5, 0x88u, v11);
    v13 = SetWindowMetricInt(v5, 0x98u, *((_DWORD *)v4 + 2)) & v12;
    v14 = SetWindowMetricInt(v5, 0x99u, *((_DWORD *)v4 + 3)) & v13;
    v15 = SetWindowMetricInt(v5, 0x89u, *((_DWORD *)v4 + 4)) & v14;
    v16 = SetWindowMetricInt(v5, 0x8Au, *((_DWORD *)v4 + 5)) & v15;
    v17 = SetWindowMetricInt(v5, 0x8Cu, *((_DWORD *)v4 + 29)) & v16;
    v18 = SetWindowMetricInt(v5, 0x8Du, *((_DWORD *)v4 + 30)) & v17;
    v19 = SetWindowMetricInt(v5, 0x8Fu, *((_DWORD *)v4 + 54)) & v18;
    v20 = SetWindowMetricInt(v5, 0x90u, *((_DWORD *)v4 + 55)) & v19;
    v21 = FastWriteProfileValue(v5, 23LL, 139LL, 3LL, (char *)v4 + 24, 92) & v20;
    v22 = FastWriteProfileValue(v5, 23LL, 142LL, 3LL, (char *)v4 + 124, 92) & v21;
    v23 = FastWriteProfileValue(v5, 23LL, 145LL, 3LL, (char *)v4 + 224, 92) & v22;
    v24 = FastWriteProfileValue(v5, 23LL, 156LL, 3LL, (char *)v4 + 316, 92) & v23;
    v25 = FastWriteProfileValue(v5, 23LL, 157LL, 3LL, (char *)v4 + 408, 92) & v24;
    v7 = SetWindowMetricInt(v5, 0x9Eu, *((_DWORD *)v4 + 125)) & v25;
    v6 = v7;
  }
  if ( v6 )
    xxxSetAndDrawNCMetrics(v5, *((_DWORD *)v4 + 1), v4);
  return v7;
}
