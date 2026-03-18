/*
 * XREFs of CalcSBStuff2 @ 0x1C0065364
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C0064F60 (xxxGetScrollBarInfo.c)
 *     CalcSBStuff @ 0x1C0065248 (CalcSBStuff.c)
 *     SBCtlSetup @ 0x1C024155C (SBCtlSetup.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 */

__int64 __fastcall CalcSBStuff2(int *a1, int *a2, int *a3, int a4)
{
  int *v4; // rax
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // r8d
  int v10; // r9d
  unsigned int DpiForSystem; // eax
  int v12; // ebp
  int v13; // r9d
  int v14; // r11d
  int v15; // r8d
  int v16; // r10d
  int v17; // eax
  int v18; // edi
  INT v19; // edi
  int v20; // r14d
  INT v21; // edx
  INT v22; // eax
  INT v23; // r9d
  INT v24; // edi
  INT v25; // eax
  int v26; // edx
  __int64 result; // rax

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
  v16 = v15;
  a1[2] = a3[2];
  v17 = *a3;
  *a1 = *a3;
  v18 = a3[1];
  a1[1] = v18;
  v19 = v18 - v17 + 1;
  v20 = (v13 - v14) / 2;
  if ( v20 >= v15 )
    v20 = v15;
  a1[10] = v13 - v20;
  a1[9] = v20 + v14;
  v21 = a3[2];
  if ( v21 && v19 )
  {
    v22 = EngMulDiv(v13 - v20 - (v20 + v14), v21, v19);
    v14 = a1[4];
    v16 = v22;
    v13 = a1[5];
    if ( a1[8] / 2 > v22 )
      v16 = a1[8] / 2;
    a1[8] = v16;
    v15 = v16;
  }
  a1[15] = v20 + v14;
  v23 = v13 - (v20 + v14) - v20 - v16;
  a1[14] = v23;
  if ( a3[2] )
    v12 = a3[2];
  v24 = v19 - v12;
  if ( v24 )
  {
    v25 = EngMulDiv(a3[3] - *a3, v23, v24);
    v15 = a1[8];
    v26 = v25 + a1[15];
  }
  else
  {
    v26 = v20 + v14 - 1;
  }
  a1[13] = v26;
  result = (unsigned int)(v15 + v26);
  a1[12] = result;
  return result;
}
