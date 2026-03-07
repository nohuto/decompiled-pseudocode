__int64 __fastcall ComputeHTCell(unsigned __int16 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rsi
  unsigned int v6; // r12d
  unsigned __int16 v8; // r10
  unsigned int v9; // r9d
  unsigned int v10; // r11d
  __int64 v11; // rax
  int v12; // r13d
  unsigned __int16 v13; // r10
  ULONG v14; // r13d
  __int128 v15; // xmm0
  __int64 result; // rax
  __int64 v17; // xmm1_8
  int v18; // eax
  unsigned int v19; // r15d
  __int64 v20; // r10
  unsigned int v21; // r11d
  unsigned int v22; // eax
  __int64 v23; // r10
  unsigned int v24; // eax
  int v25; // r11d
  unsigned int v26; // eax
  PVOID v27; // rax
  void *v28; // r15
  int v29; // [rsp+40h] [rbp-30h]
  _OWORD v30[2]; // [rsp+48h] [rbp-28h] BYREF
  int v31; // [rsp+B0h] [rbp+40h] BYREF
  int v32; // [rsp+C8h] [rbp+58h]

  LOWORD(v31) = a1;
  LODWORD(v3) = 0;
  LODWORD(v4) = 0;
  LODWORD(v5) = 0;
  v6 = 0;
  memset(v30, 0, sizeof(v30));
  if ( a1 > 0x12u )
    return 4294967282LL;
  BYTE9(v30[0]) = a1;
  if ( a3 )
    v6 = *(_DWORD *)(a3 + 184) & 0xFFFFFF8F;
  if ( a1 != 18 )
  {
    v9 = ComputeChecksum(&v31, 1213485891LL, 2LL);
    BYTE8(v30[0]) = 1;
    v11 = 2LL * (v8 >> 1);
    LOWORD(v12) = DefStdHTPat[16 * (v8 >> 1)];
    v13 = DefStdHTPat[16 * (v8 >> 1) + 1];
    WORD6(v30[0]) = DefStdHTPat[8 * v11];
    WORD1(v30[1]) = v13;
    goto LABEL_6;
  }
  if ( !a2 || *(_WORD *)a2 != 32 )
    return 4294967281LL;
  v18 = *(unsigned __int16 *)(a2 + 6);
  v12 = *(unsigned __int16 *)(a2 + 4);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 24);
  v19 = v12 * v18;
  WORD6(v30[0]) = *(_WORD *)(a2 + 4);
  v32 = v18;
  WORD1(v30[1]) = v18;
  if ( v3 )
  {
    v20 = v3;
    if ( v4 && v5 )
    {
      if ( v3 == v4 && v3 == v5 )
        v21 = 1433629234;
      else
        v21 = 1433629235;
      goto LABEL_24;
    }
  }
  else
  {
    v20 = v4;
    if ( !v4 )
    {
      v20 = v5;
      if ( !v5 )
        return 4294967281LL;
    }
  }
  v5 = v20;
  v4 = v20;
  LODWORD(v3) = v20;
  v21 = 1433629233;
LABEL_24:
  v22 = ComputeChecksum(&v31, v21, 2LL);
  v24 = ComputeChecksum(v23, v22, v19);
  v9 = v24;
  if ( v25 == 1433629235 )
  {
    v26 = ComputeChecksum(v4, v24, v19);
    v9 = ComputeChecksum(v5, v26, v19);
  }
  v13 = v32;
  v10 = 32;
LABEL_6:
  v29 = (unsigned __int16)v12;
  v32 = v13;
  HIWORD(v30[0]) = v12 * (7u / (unsigned __int16)v12 + 1);
  v31 = (unsigned __int16)(HIWORD(v30[0]) + 7);
  LOWORD(v30[1]) = HIWORD(v30[0]) + 7;
  v14 = 6 * v13 * v31;
  DWORD1(v30[1]) = v14;
  if ( !a3 )
    return ComputeChecksum(v30, v9, v10);
  if ( (BYTE8(v30[0]) & 1) != 0 )
  {
    *((_QWORD *)&v30[1] + 1) = 0LL;
LABEL_9:
    v15 = *(_OWORD *)((char *)v30 + 8);
    result = v14;
    *(_DWORD *)(a3 + 184) = v6;
    v17 = *((_QWORD *)&v30[1] + 1);
    *(_OWORD *)(a3 + 160) = v15;
    *(_QWORD *)(a3 + 176) = v17;
    return result;
  }
  v27 = EngAllocMem(0, v14, 0x33345448u);
  *((_QWORD *)&v30[1] + 1) = v27;
  v28 = v27;
  if ( v27 )
  {
    if ( (unsigned int)GenerateWORDPat(v3, v4, v5, (_DWORD)v27, v29, (unsigned __int16)v31, v32) )
      goto LABEL_9;
    EngFreeMem(v28);
  }
  return 4294967294LL;
}
