/*
 * XREFs of CalcSBStuff2 @ 0x1C0063B54
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C0062A90 (xxxGetScrollBarInfo.c)
 *     CalcSBStuff @ 0x1C0063DA0 (CalcSBStuff.c)
 *     SBCtlSetup @ 0x1C02455FC (SBCtlSetup.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 */

INT __fastcall CalcSBStuff2(int *a1, int *a2, int *a3, int a4)
{
  int *v4; // rax
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // r8d
  int v10; // r9d
  unsigned int DpiForSystem; // eax
  int v12; // ebp
  int v13; // r9d
  int v14; // r10d
  int v15; // r8d
  int v16; // eax
  int v17; // edi
  INT v18; // edi
  int v19; // r14d
  INT v20; // edx
  INT v21; // eax
  INT v22; // r9d
  INT result; // eax
  INT v24; // edi
  int v25; // ecx

  v4 = a2 + 1;
  if ( a4 )
  {
    v7 = (unsigned int)a2[2];
    v8 = 10;
    v9 = *a2;
    v10 = a2[3];
  }
  else
  {
    v9 = *v4;
    v8 = 11;
    v7 = (unsigned int)a2[3];
    v4 = a2;
    v10 = a2[2];
  }
  a1[4] = *v4;
  a1[5] = v10;
  a1[6] = v9;
  a1[7] = v7;
  DpiForSystem = GetDpiForSystem(v7, a2);
  a1[8] = GetDpiDependentMetric(v8, DpiForSystem);
  v12 = 1;
  v13 = a1[5];
  v14 = a1[4];
  v15 = a1[8];
  a1[3] = a3[3];
  a1[2] = a3[2];
  v16 = *a3;
  *a1 = *a3;
  v17 = a3[1];
  a1[1] = v17;
  v18 = v17 - v16 + 1;
  v19 = (v13 - v14) / 2;
  if ( v19 >= v15 )
    v19 = v15;
  a1[10] = v13 - v19;
  a1[9] = v19 + v14;
  v20 = a3[2];
  if ( v20 && v18 )
  {
    v21 = EngMulDiv(v13 - v19 - (v19 + v14), v20, v18);
    v14 = a1[4];
    v15 = v21;
    v13 = a1[5];
    if ( a1[8] / 2 > v21 )
      v15 = a1[8] / 2;
    a1[8] = v15;
  }
  a1[15] = v19 + v14;
  v22 = v13 - (v19 + v14) - v19 - v15;
  a1[14] = v22;
  result = a3[2];
  if ( result )
    v12 = a3[2];
  v24 = v18 - v12;
  if ( v24 )
  {
    result = EngMulDiv(a3[3] - *a3, v22, v24);
    v25 = a1[15] + result;
  }
  else
  {
    v25 = v19 + v14 - 1;
  }
  a1[13] = v25;
  a1[12] = a1[8] + v25;
  return result;
}
