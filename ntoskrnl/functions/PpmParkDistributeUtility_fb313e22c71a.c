__int64 __fastcall PpmParkDistributeUtility(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        unsigned __int8 a4,
        char a5,
        unsigned int a6,
        _DWORD *a7)
{
  unsigned int v7; // edi
  unsigned __int8 v8; // bl
  char v9; // si
  char v10; // r13
  __int64 v11; // r15
  __int64 v13; // r14
  __int64 Prcb; // rax
  __int64 v15; // rcx
  char v16; // al
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // ebx
  unsigned int v20; // eax
  char v21; // di
  unsigned int v22; // r14d
  __int64 v23; // rax
  int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  __int64 v27; // r9
  unsigned int v28; // r10d
  __int64 result; // rax
  _DWORD *v30; // rbx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  _DWORD *v34; // rax
  unsigned int v35; // edx
  int v36; // eax
  __int64 v37; // rax
  unsigned int v38; // ecx
  __int64 v39; // r9
  unsigned __int8 v40; // cl
  int v41; // esi
  __int64 v42; // rax
  unsigned int v43; // ecx
  int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // [rsp+20h] [rbp-28h]
  __int64 v48; // [rsp+28h] [rbp-20h] BYREF
  __int64 v49; // [rsp+30h] [rbp-18h]
  __int16 v50; // [rsp+38h] [rbp-10h]
  int v51; // [rsp+3Ah] [rbp-Eh]
  __int16 v52; // [rsp+3Eh] [rbp-Ah]
  __int64 v53; // [rsp+90h] [rbp+48h]
  unsigned int v56; // [rsp+A8h] [rbp+60h] BYREF

  v7 = a6;
  v50 = a3;
  v8 = 0;
  v51 = 0;
  v9 = 0;
  v52 = 0;
  v10 = 0;
  v56 = 0;
  v48 = 0LL;
  v53 = a2 ^ a1;
  v11 = a2 ^ a1;
  v49 = a2 ^ a1;
  v13 = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v56, &v48) )
  {
    Prcb = KeGetPrcb(v56);
    v15 = Prcb;
    if ( KeHeteroSystem )
      v16 = *(_BYTE *)(Prcb + 34056);
    else
      v16 = *(_BYTE *)(Prcb + 34059);
    if ( v16 )
    {
      ++v10;
      v13 |= *(_QWORD *)(v15 + 200);
    }
    else
    {
      ++v9;
    }
    v17 = *(_DWORD *)(v15 + 34008);
    if ( PpmHeteroImplementationGeneration )
    {
      v18 = *(_DWORD *)(v15 + 34032);
      if ( v18 )
        v17 = (v18 * v17) >> 16;
    }
    ++v8;
    v7 += v17;
  }
  v50 = a3;
  v49 = a2;
  v47 = v13;
  v48 = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v56, &v48) )
  {
    v34 = (_DWORD *)KeGetPrcb(v56);
    v35 = v34[8502] - v34[8503];
    if ( PpmHeteroImplementationGeneration )
    {
      v36 = v34[8508];
      if ( v36 )
        v35 = (v36 * v35) >> 16;
    }
    v7 += v35;
  }
  if ( v8 <= 1u )
    v8 = 1;
  if ( a4 >= v8 )
    a4 = v8;
  if ( a4 <= 1u )
    a4 = 1;
  v19 = v7 / v8;
  v20 = v7;
  v21 = a5;
  v22 = v20 / a4;
  if ( v9 && v10 )
  {
    v50 = a3;
    v49 = v47;
    v48 = 0LL;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v56, &v48) )
    {
      v37 = KeGetPrcb(v56);
      v11 ^= *(_QWORD *)(v37 + 200);
      v38 = PpmHeteroNormalizedUtilityToUtility(v37 + 33968, v22);
      if ( v38 <= *(_DWORD *)(v39 + 40) )
      {
        if ( !v21 )
          goto LABEL_50;
        if ( *(_DWORD *)(v39 + 44) > v38 )
          v38 = *(_DWORD *)(v39 + 44);
      }
      *(_DWORD *)(v39 + 40) = v38;
LABEL_50:
      v40 = a4 - 1;
      if ( !a4 )
        v40 = 0;
      a4 = v40;
    }
  }
  v50 = a3;
  v49 = v11;
  v48 = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v56, &v48) )
  {
    v23 = KeGetPrcb(v56);
    v24 = *(_DWORD *)(v23 + 34032);
    if ( v24 )
      v25 = (unsigned int)(*(_DWORD *)(v23 + 34008) * v24) >> 16;
    else
      v25 = *(_DWORD *)(v23 + 34008);
    if ( v19 <= v25 )
    {
      v11 ^= *(_QWORD *)(v23 + 200);
      v26 = PpmHeteroNormalizedUtilityToUtility(v23 + 33968, v22);
      if ( v26 > v28 )
      {
        *(_DWORD *)(v27 + 40) = v26;
      }
      else if ( v21 )
      {
        if ( *(_DWORD *)(v27 + 44) > v26 )
          v26 = *(_DWORD *)(v27 + 44);
        *(_DWORD *)(v27 + 40) = v26;
      }
    }
  }
  v50 = a3;
  v48 = 0LL;
  v49 = v11;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v56, &v48);
    if ( (_DWORD)result )
      break;
    v31 = KeGetPrcb(v56);
    v32 = PpmHeteroNormalizedUtilityToUtility(v31 + 33968, v19);
    *(_DWORD *)(v33 + 40) = v32;
  }
  v30 = a7;
  if ( a7 )
  {
    v41 = 0;
    v49 = v53;
    v50 = a3;
    v48 = 0LL;
    while ( 1 )
    {
      result = KeEnumerateNextProcessor(&v56, &v48);
      if ( (_DWORD)result )
        break;
      v42 = KeGetPrcb(v56);
      v43 = *(_DWORD *)(v42 + 34008);
      if ( v43 > 0x2710 )
      {
        v44 = *(_DWORD *)(v42 + 34032);
        v45 = v43 - 10000;
        if ( v44 )
          v45 = (v44 * v45) >> 16;
        v41 += v45;
      }
    }
    *v30 = v41;
  }
  if ( v21 )
  {
    v49 = a2;
    v50 = a3;
    v48 = 0LL;
    while ( 1 )
    {
      result = KeEnumerateNextProcessor(&v56, &v48);
      if ( (_DWORD)result )
        break;
      v46 = KeGetPrcb(v56);
      *(_DWORD *)(v46 + 34008) = *(_DWORD *)(v46 + 34012);
    }
  }
  return result;
}
