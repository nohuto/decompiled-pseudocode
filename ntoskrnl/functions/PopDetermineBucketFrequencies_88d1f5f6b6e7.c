__int64 PopDetermineBucketFrequencies()
{
  unsigned int v0; // ecx
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 Prcb; // rax
  __int64 v4; // r9
  unsigned __int8 v5; // al
  __int64 v6; // r11
  unsigned int v7; // edx
  unsigned int v8; // r9d
  bool v9; // cf
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // r9
  _DWORD *v14; // r10
  __int64 v15; // rax
  unsigned int v16; // r8d
  BOOL v17; // ecx
  int v18; // ebx
  unsigned int v19; // r8d
  int *v20; // rdi
  unsigned int v21; // r14d
  __int64 v22; // r13
  int v23; // r11d
  int v24; // ecx
  unsigned int v25; // r12d
  int v26; // esi
  int v27; // eax
  unsigned int *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r9
  unsigned __int8 v32; // al
  __int64 v33; // r11
  unsigned int v34; // edx
  _WORD *v35; // r8
  __int64 v36; // rax
  _DWORD *v37; // r10
  unsigned int v38; // eax
  __int64 result; // rax
  _DWORD v40[4]; // [rsp+20h] [rbp-38h]
  __int64 v41; // [rsp+30h] [rbp-28h]
  __int128 v42; // [rsp+38h] [rbp-20h] BYREF
  __int64 v43; // [rsp+48h] [rbp-10h]
  _BYTE v45[8]; // [rsp+A8h] [rbp+50h]
  unsigned int v46; // [rsp+B0h] [rbp+58h] BYREF
  int v47; // [rsp+B8h] [rbp+60h]

  v43 = 0LL;
  v0 = 0;
  v42 = 0LL;
  v46 = 0;
  v1 = *(unsigned int *)PpmComputeEnergyData;
  if ( (_DWORD)v1 )
  {
    v2 = 0LL;
    do
    {
      *(&v47 + v2) = 10000;
      v40[v2] = 0;
      v40[v2 + 2] = 0;
      v45[v2] = 1;
      if ( v2 >= 2 )
LABEL_55:
        _report_rangecheckfailure();
      v45[v2 + 6] = 0;
      ++v0;
      ++v2;
    }
    while ( v0 < (unsigned int)v1 );
  }
  *((_QWORD *)&v42 + 1) = qword_140C0BC68;
  *(_QWORD *)&v42 = &PpmPerfStatesRegistered;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v46, (unsigned __int16 **)&v42) )
  {
    Prcb = KeGetPrcb(v46);
    v4 = Prcb;
    if ( KeHeteroSystem )
      v5 = *(_BYTE *)(Prcb + 34056);
    else
      v5 = *(_BYTE *)(Prcb + 34059);
    v6 = *(_QWORD *)(v4 + 33968);
    v7 = v5;
    v8 = *(_DWORD *)(v6 + 440);
    v9 = (unsigned int)v5 < *(_DWORD *)PpmComputeEnergyData;
    v10 = (unsigned int)(*(_DWORD *)PpmComputeEnergyData - 1);
    if ( v9 )
      v10 = v7;
    v11 = *(_DWORD *)(v6 + 452) * *(_DWORD *)(v6 + 440);
    v45[v10 + 6] = 1;
    v12 = *(_DWORD *)(v6 + 444) * v8 / 0x64;
    if ( v11 / 0x64 < *(&v47 + (unsigned int)v10) )
      *(&v47 + (unsigned int)v10) = v11 / 0x64;
    if ( v12 > v40[(unsigned int)v10] )
      v40[(unsigned int)v10] = v12;
    if ( v8 > v40[(unsigned int)v10 + 2] )
      v40[(unsigned int)v10 + 2] = v8;
    if ( !*(_BYTE *)(v6 + 488) )
    {
      if ( (unsigned int)v10 >= 2uLL )
        goto LABEL_55;
      v45[(unsigned int)v10] = 0;
    }
  }
  if ( (_DWORD)v1 )
  {
    v13 = 0LL;
    v14 = (_DWORD *)(PpmComputeEnergyData + 60);
    v41 = v1;
    v15 = v1;
    do
    {
      if ( v45[v13 + 6] )
      {
        v16 = v40[v13];
        v17 = v45[v13] == 0;
        if ( v16 >= 0x2710 )
        {
          v16 = 10000;
          v17 = 1;
          if ( v40[v13 + 2] < 0x2710u )
            v16 = v40[v13 + 2];
        }
        v18 = *(&v47 + v13) * *(&v47 + v13);
        v19 = v16 * v16 - v18;
        if ( v17 )
          v19 = 4 * v19 / 3;
        v20 = v14 - 7;
        v21 = v19;
        v22 = 4LL;
        do
        {
          v23 = 0;
          v24 = 10000;
          v25 = v18 + (v21 >> 2);
          v20[4] = v25 - (v19 >> 3);
          if ( v25 < 0x5F5E100 )
          {
            v26 = 20;
            do
            {
              if ( v24 == v23 || !v26 )
                break;
              v23 = v24;
              --v26;
              v27 = v25 - v24 * v24;
              if ( v27 <= 0 )
              {
                if ( v27 < 0 )
                  v27 -= v24;
              }
              else
              {
                v27 += v24;
              }
              v24 += v27 / (2 * v24);
            }
            while ( v24 );
          }
          *v20++ = v24;
          v21 += v19;
          --v22;
        }
        while ( v22 );
        if ( *v14 > 0x64u )
        {
          v28 = v14 - 3;
          v29 = 4LL;
          do
          {
            *v28 = 100 * *v28 / *v14;
            ++v28;
            --v29;
          }
          while ( v29 );
        }
        v15 = v41;
      }
      ++v13;
      v14 += 14;
      v41 = --v15;
    }
    while ( v15 );
  }
  *((_QWORD *)&v42 + 1) = qword_140C0BC68;
  *(_QWORD *)&v42 = &PpmPerfStatesRegistered;
  LOWORD(v43) = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v46, (unsigned __int16 **)&v42);
    if ( (_DWORD)result )
      break;
    v30 = KeGetPrcb(v46);
    v31 = v30;
    if ( KeHeteroSystem )
      v32 = *(_BYTE *)(v30 + 34056);
    else
      v32 = *(_BYTE *)(v30 + 34059);
    v33 = 4LL;
    v34 = v32;
    v9 = (unsigned int)v32 < *(_DWORD *)PpmComputeEnergyData;
    v35 = (_WORD *)(v31 + 34154);
    v36 = (unsigned int)(*(_DWORD *)PpmComputeEnergyData - 1);
    if ( v9 )
      v36 = v34;
    v37 = (_DWORD *)(56 * v36 + PpmComputeEnergyData + 32);
    do
    {
      v38 = 100 * *v37++;
      *v35++ = v38 / *(_DWORD *)(*(_QWORD *)(v31 + 33968) + 440LL);
      --v33;
    }
    while ( v33 );
  }
  return result;
}
