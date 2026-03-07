INT __fastcall CalcSBStuff2(int *a1, int *a2, int *a3, int a4)
{
  int *v4; // rax
  __int64 v7; // rcx
  int v8; // edi
  int v9; // r8d
  int v10; // r9d
  int DpiForSystem; // eax
  int v12; // ebp
  int v13; // r9d
  int v14; // ecx
  INT v15; // r8d
  int v16; // eax
  int v17; // edi
  INT v18; // edi
  int v19; // r14d
  int v20; // r9d
  INT v21; // edx
  int v22; // ecx
  int v23; // edx
  INT v24; // edx
  INT result; // eax
  INT v26; // edi
  int v27; // edx

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
  DpiForSystem = GetDpiForSystem(v7);
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
  v20 = v13 - v19;
  a1[10] = v20;
  a1[9] = v19 + v14;
  v21 = a3[2];
  if ( v21 && v18 )
  {
    v15 = EngMulDiv(v20 - (v19 + v14), v21, v18);
    if ( a1[8] / 2 > v15 )
      v15 = a1[8] / 2;
    a1[8] = v15;
  }
  v22 = v19 + a1[4];
  v23 = a1[5] - v22;
  a1[15] = v22;
  v24 = v23 - v19 - v15;
  a1[14] = v24;
  result = a3[2];
  if ( result )
    v12 = a3[2];
  v26 = v18 - v12;
  if ( v26 )
  {
    result = EngMulDiv(a3[3] - *a3, v24, v26);
    v27 = result + a1[15];
  }
  else
  {
    v27 = v22 - 1;
  }
  a1[13] = v27;
  a1[12] = v27 + a1[8];
  return result;
}
