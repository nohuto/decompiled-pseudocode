/*
 * XREFs of MiGetNextAffinityWalker @ 0x1403B9938
 * Callers:
 *     MiZeroInParallel @ 0x140242EB8 (MiZeroInParallel.c)
 *     MiSelectBestZeroingProcessor @ 0x140274D20 (MiSelectBestZeroingProcessor.c)
 *     MiComputeIdealDpcGang @ 0x1403867CC (MiComputeIdealDpcGang.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402A9460 (KeFindFirstSetRightGroupAffinity.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetNextAffinityWalker(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  int v4; // r10d
  _DWORD *v5; // rax
  __int64 v6; // rcx
  int v7; // r8d
  int *v8; // rdx
  int *v9; // rsi
  unsigned int v10; // r9d
  __int64 v11; // r14
  int FirstSetRightGroupAffinity; // r13d
  __int64 v13; // r15
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rsi
  int v19; // r8d
  int v20; // r12d
  __int64 v21; // rdx
  int v22; // r11d
  _QWORD *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r10
  bool v29; // zf
  __int128 v30; // xmm6
  __int64 v31; // rdx
  int v32; // r15d
  __int64 v33; // r12
  __int64 v34; // rcx
  __int128 v35; // xmm0
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  _DWORD *i; // rax
  unsigned int v40; // r10d
  __int64 v41; // r9
  _OWORD *v42; // rax
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  int v46; // [rsp+28h] [rbp-E0h]
  int v47; // [rsp+2Ch] [rbp-DCh]
  int v48; // [rsp+30h] [rbp-D8h]
  __int128 v49; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+48h] [rbp-C0h]
  int *v51; // [rsp+50h] [rbp-B8h]
  _OWORD *v52; // [rsp+58h] [rbp-B0h]
  __int128 v53; // [rsp+68h] [rbp-A0h]
  __int128 v54; // [rsp+78h] [rbp-90h]
  _DWORD v55[5]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v56[59]; // [rsp+9Ch] [rbp-6Ch] BYREF

  v2 = 0;
  v52 = a2;
  v50 = a1;
  v3 = a1;
  v54 = 0LL;
  v53 = 0LL;
  if ( !a1 )
    return 3221226021LL;
  v4 = *(_DWORD *)(a1 + 16);
  v5 = v56;
  v48 = v4;
  v6 = 5LL;
  do
  {
    *v5 = -1;
    v5 += 12;
    --v6;
  }
  while ( v6 );
  v7 = v56[0];
  v8 = (int *)(v3 + 20);
  v9 = (int *)(v3 + 20);
  v51 = (int *)(v3 + 20);
  do
  {
    v10 = 0;
    v47 = 0;
    if ( *(_DWORD *)(v3 + 4) )
    {
      while ( 1 )
      {
        v49 = *(_OWORD *)(*(_QWORD *)(v3 + 8) + 16LL * v10);
        v11 = v49;
        if ( (_QWORD)v49 )
          break;
LABEL_27:
        if ( v7 == -1 )
        {
          v47 = ++v10;
          if ( v10 < *(_DWORD *)(v3 + 4) )
            continue;
        }
        v4 = v48;
        goto LABEL_29;
      }
      while ( 1 )
      {
        FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)&v49);
        v13 = KiProcessorBlock[FirstSetRightGroupAffinity];
        if ( *v9 == -1 || *(_DWORD *)(v13 + 34872) == *(_DWORD *)(v3 + 16) )
          break;
        v11 &= ~*(_QWORD *)(v13 + 200);
        *(_QWORD *)&v49 = v11;
LABEL_25:
        v8 = v9;
        if ( !v11 )
        {
LABEL_26:
          v7 = v56[0];
          v10 = v47;
          goto LABEL_27;
        }
      }
      WORD4(v54) = WORD4(v49);
      WORD4(v53) = WORD4(v49);
      if ( *(_DWORD *)(v3 + 32) )
        v14 = *(_QWORD *)(v13 + 34912);
      else
        v14 = *(_QWORD *)(v13 + 200);
      v15 = v11 & v14;
      v46 = 0;
      *(_QWORD *)&v53 = v15;
      LODWORD(v16) = FirstSetRightGroupAffinity - 1;
      v11 &= ~v15;
      v17 = 0LL;
      *(_QWORD *)&v49 = v11;
      v18 = 0LL;
      v19 = 0;
      v20 = 0;
      if ( v15 )
      {
        do
        {
          v16 = (unsigned int)(v16 + 1);
          v21 = v17;
          v22 = v19;
          v23 = (_QWORD *)KiProcessorBlock[v16];
          v24 = v23[3];
          v25 = v23[1];
          v26 = v18 | v23[25];
          v27 = v23[25];
          v28 = ~v27;
          if ( v25 != v24 )
            v18 = v26;
          v17 = v21 | v27;
          v29 = v25 == v24;
          if ( v25 != v24 )
          {
            ++v20;
            v17 = v21;
          }
          v19 = v22 + 1;
          if ( !v29 )
            v19 = v22;
          v15 &= v28;
        }
        while ( v15 );
        v3 = v50;
        v46 = v20;
      }
      v30 = v53;
      v31 = *(_QWORD *)(v3 + 8LL * WORD4(v49) + 48);
      v32 = 4;
      v33 = 4LL;
      if ( v46 )
      {
        if ( !v19 )
          goto LABEL_24;
        v32 = 2;
        v33 = 2LL;
      }
      else
      {
        v32 = 0;
        v33 = 0LL;
      }
      v18 = v17;
      if ( (v17 & v31) != 0 )
      {
        if ( (v17 & v31) == v17 )
        {
          ++v32;
          ++v33;
        }
        else
        {
          *(_QWORD *)&v55[2] = *((_QWORD *)&v53 + 1);
          v18 = ~v31 & v17;
          *(_QWORD *)v55 = v18;
          LODWORD(v16) = KeFindFirstSetRightGroupAffinity((__int64)v55);
        }
      }
LABEL_24:
      v34 = 6 * v33;
      *(_QWORD *)&v54 = v18;
      v9 = v51;
      v8 = v51;
      v35 = v54;
      v55[2 * v34 + 4] = WORD4(v49);
      v56[2 * v34] = v16;
      v56[2 * v34 + 9] = v32;
      *(_OWORD *)&v56[2 * v34 + 1] = v35;
      *(_OWORD *)&v56[2 * v34 + 5] = v30;
      if ( !v32 )
        goto LABEL_26;
      goto LABEL_25;
    }
LABEL_29:
    v36 = *v8;
    if ( *v8 == -1 )
      break;
    v37 = ++*(_DWORD *)(v3 + 16);
    if ( v37 == v36 )
    {
      *(_DWORD *)(v3 + 16) = 0;
      v37 = 0;
    }
  }
  while ( v37 != v4 && v7 == -1 );
  v38 = 0;
  for ( i = v56; *i == -1; i += 12 )
  {
    if ( (unsigned int)++v38 >= 5 )
      return 3221226021LL;
  }
  v40 = *(_DWORD *)(v3 + 4);
  if ( v40 )
  {
    v41 = *(_QWORD *)(v3 + 8);
    while ( *(unsigned __int16 *)(v41 + 16LL * v2 + 8) != v55[12 * v38 + 4] )
    {
      if ( ++v2 >= v40 )
        goto LABEL_39;
    }
    *(_QWORD *)(v41 + 16LL * v2) &= ~*(_QWORD *)&v56[12 * v38 + 5];
  }
LABEL_39:
  v42 = v52;
  v43 = *(_OWORD *)&v56[12 * v38 + 3];
  *v52 = *(_OWORD *)&v55[12 * v38 + 4];
  v44 = *(_OWORD *)&v56[12 * v38 + 7];
  v42[1] = v43;
  v42[2] = v44;
  return 0LL;
}
