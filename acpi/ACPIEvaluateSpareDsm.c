__int64 __fastcall ACPIEvaluateSpareDsm(__int64 *a1, unsigned int a2, __int128 *a3, __int64 a4)
{
  __int64 v4; // rbx
  __int128 v8; // xmm0
  int v9; // eax
  __int128 v10; // xmm1
  _BYTE v12[40]; // [rsp+20h] [rbp-99h] BYREF
  __int64 v13; // [rsp+48h] [rbp-71h]
  _QWORD v14[20]; // [rsp+50h] [rbp-69h] BYREF

  v4 = a2;
  *(_OWORD *)a4 = 0LL;
  *(_QWORD *)&v12[32] = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  LODWORD(v13) = 0;
  memset(v12, 0, 32);
  memset(v14, 0, sizeof(v14));
  v14[7] = 0LL;
  LODWORD(v14[3]) = 16;
  WORD1(v14[0]) = 3;
  v14[4] = &HOT_REPLACE_DSM_GUID;
  v14[19] = v12;
  WORD1(v14[5]) = 1;
  WORD1(v14[10]) = 1;
  v14[12] = v4;
  WORD1(v14[15]) = 4;
  LODWORD(v14[18]) = 48;
  if ( a3 )
  {
    v8 = *a3;
    v9 = *((_DWORD *)a3 + 6);
    *(_DWORD *)v12 = 1;
    v10 = a3[1];
    *(_OWORD *)&v12[8] = v8;
    v13 = *((_QWORD *)a3 + 4);
    *(_OWORD *)&v12[24] = v10;
    if ( v9 )
      LODWORD(v14[18]) = v9 + 8;
  }
  return AMLIEvalNameSpaceObject(a1, a4, 4u, v14, *(_OWORD *)v12, *(_OWORD *)&v12[16], *(_QWORD *)&v12[32], v13);
}
