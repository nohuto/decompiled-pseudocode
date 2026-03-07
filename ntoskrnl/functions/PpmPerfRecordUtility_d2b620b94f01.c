__int64 __fastcall PpmPerfRecordUtility(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax
  unsigned __int8 *v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // r9
  __int64 v8; // r12
  int v9; // r14d
  __int64 v10; // r15
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  int v13; // r8d
  int v14; // ebp
  _BYTE *v15; // r13
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r12
  unsigned int *v18; // rdx
  int v19; // r15d
  int v20; // r11d
  int v21; // r8d
  char v22; // cl
  char v23; // r9
  int v24; // eax
  unsigned int v25; // ecx
  char v26; // r8
  unsigned __int64 v27; // rax
  __int64 v28; // r9
  unsigned int v29; // r10d
  unsigned int *v30; // r8
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // r9d

  v1 = *(__int64 **)(a1 + 16);
  result = (unsigned int)PpmCheckMakeupCount;
  v4 = *(unsigned __int8 **)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v6 = v1[2];
    v7 = v1[6] - v6;
    v8 = *v1;
    v9 = *((_DWORD *)v1 + 20) - *((_DWORD *)v1 + 6);
    v10 = v1[1];
    v11 = v1[4] - v10;
    v12 = v1[5] - *v1;
    if ( PpmCheckMakeupCount )
    {
      v27 = v11 / (unsigned int)(PpmCheckMakeupCount + 1);
      v11 = v27;
      if ( v12 < v27 )
        v27 = v1[5] - v8;
      v12 = v27;
      if ( v7 >= v11 )
        v7 = v11;
    }
    v1[1] = v10 + v11;
    *v1 = v8 + v12;
    v1[2] = v7 + v6;
    *((_DWORD *)v1 + 6) = *((_DWORD *)v1 + 20);
    if ( v12 > v11 )
      v12 = v11;
    if ( v7 > v11 )
      v7 = v11;
    if ( v11 <= 1 )
      v11 = 1LL;
    if ( v4 )
    {
      result = *v4;
      *(_DWORD *)(a1 + 40) = *v4 * v4[1];
    }
    else
    {
      if ( v5 )
      {
        v13 = *(_DWORD *)(v5 + 116);
        v14 = *(_DWORD *)(v5 + 120);
      }
      else
      {
        v13 = 100;
        v14 = 100;
      }
      v15 = v1 + 29;
      v16 = v12 * (unsigned int)(100 * v14) / v11;
      v17 = v12 * (unsigned int)*(unsigned __int16 *)(a1 + 60) * v14 / v11;
      PpmEventTraceRecordedUtility(
        a1,
        v11 - v12,
        v12,
        v7,
        v13,
        v14,
        v16,
        v17,
        *((_BYTE *)v1 + 236),
        *((_BYTE *)v1 + 237));
      v18 = *(unsigned int **)(a1 + 32);
      v19 = *((unsigned __int8 *)v1 + 237);
      v20 = *((unsigned __int8 *)v1 + 236);
      if ( v18 )
      {
        v28 = v18[1];
        v29 = *v18;
        v30 = &v18[3 * v28];
        v18[2] += (unsigned __int16)v16 - *((unsigned __int16 *)v30 + 22);
        v31 = *((unsigned __int16 *)v30 + 23);
        *((_WORD *)v30 + 22) = v16;
        v18[3] += (unsigned __int16)v17 - v31;
        v32 = *((unsigned __int16 *)v30 + 24);
        *((_WORD *)v30 + 23) = v17;
        v18[4] += (unsigned __int16)v14 - v32;
        v33 = *((unsigned __int8 *)v30 + 50);
        *((_WORD *)v30 + 24) = v14;
        v18[5] += v20 - v33;
        v34 = v19 - *((unsigned __int8 *)v30 + 51);
        *((_BYTE *)v30 + 50) = v20;
        v18[6] += v34;
        *((_BYTE *)v30 + 51) = v19;
        v35 = v18[7] - *((unsigned __int8 *)v30 + 52);
        v18[7] = v35;
        v18[7] = v35 + (unsigned __int8)*v15;
        *((_BYTE *)v30 + 52) = *v15;
        v36 = v18[8] - *((unsigned __int8 *)v30 + 53);
        v18[8] = v36;
        v18[8] = v36 + *((unsigned __int8 *)v1 + 233);
        *((_BYTE *)v30 + 53) = *((_BYTE *)v1 + 233);
        v37 = v18[9] - *((unsigned __int8 *)v30 + 54);
        v18[9] = v37;
        v18[9] = v37 + *((unsigned __int8 *)v1 + 234);
        *((_BYTE *)v30 + 54) = *((_BYTE *)v1 + 234);
        v38 = v18[10] - *((unsigned __int8 *)v30 + 55);
        v18[10] = v38;
        v18[10] = v38 + *((unsigned __int8 *)v1 + 235);
        *((_BYTE *)v30 + 55) = *((_BYTE *)v1 + 235);
        v39 = 0;
        if ( (_DWORD)v28 + 1 != v29 )
          v39 = v28 + 1;
        v18[1] = v39;
        LODWORD(v16) = v18[2] / v29;
        LODWORD(v17) = v18[3] / v29;
        v14 = v18[4] / v29;
        v20 = v18[5] / v29;
        v19 = v18[6] / v29;
        v24 = v18[8] / v29;
        LOBYTE(v21) = v24;
        v22 = v24;
        v23 = v24;
      }
      else
      {
        v21 = *(_DWORD *)v15 >> 8;
        v22 = v21;
        v23 = v21;
        LOBYTE(v24) = v21;
      }
      if ( (unsigned __int8)v20 >= 0x64u )
      {
        LOBYTE(v20) = 100;
        LOBYTE(v21) = v22;
        v23 = v24;
      }
      *(_DWORD *)(a1 + 52) = (unsigned int)v16 * (unsigned __int8)v20 / 0x64;
      if ( (unsigned __int8)v19 >= 0x64u )
      {
        LOBYTE(v19) = 100;
        LOBYTE(v21) = v23;
      }
      *(_DWORD *)(a1 + 56) = (unsigned int)v16 * (unsigned __int8)v19 / 0x64;
      if ( (unsigned __int8)v21 >= 0x64u )
        LOBYTE(v21) = 100;
      result = 1374389535 * (unsigned int)v16 * (unsigned __int8)v21;
      v25 = (unsigned int)v16 * (unsigned __int8)v21 / 0x64;
      if ( PpmCheckCurrentPipelineId == 5 )
      {
        v40 = v17 * (unsigned __int8)v21;
        LODWORD(v16) = v16 - v25;
        v26 = 1;
        result = 1374389535 * v40;
        LODWORD(v17) = v17 - v40 / 0x64;
      }
      else
      {
        v26 = 0;
      }
      *(_DWORD *)(a1 + 40) = v16;
      *(_DWORD *)(a1 + 44) = v17;
      *(_DWORD *)(a1 + 48) = v25;
      *(_WORD *)(a1 + 62) = v14;
      *((_DWORD *)v1 + 60) = v9;
      if ( v26 )
        return PpmPerfResetHistory(a1);
    }
  }
  return result;
}
