/*
 * XREFs of PpmParkDistributeUtility @ 0x1402CF3F0
 * Callers:
 *     PpmParkDistributeAllUtility @ 0x1402CF790 (PpmParkDistributeAllUtility.c)
 *     PpmHeteroDistributeUtility @ 0x140578180 (PpmHeteroDistributeUtility.c)
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     PpmHeteroNormalizedUtilityToUtility @ 0x14057850C (PpmHeteroNormalizedUtilityToUtility.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x14057864C (PpmHeteroUtilityToNormalizedUtility.c)
 */

__int16 __fastcall PpmParkDistributeUtility(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        unsigned int a6,
        _DWORD *a7)
{
  unsigned __int16 v8; // r11
  unsigned __int8 v10; // bl
  char v11; // di
  char v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // ecx
  unsigned int v20; // r14d
  unsigned int v21; // esi
  int v22; // edi
  int v23; // r11d
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int v27; // ecx
  unsigned int v28; // r10d
  unsigned int v29; // eax
  unsigned int v30; // r9d
  int v31; // r9d
  unsigned __int64 v32; // rdx
  __int64 v33; // r8
  unsigned int v34; // ecx
  int v35; // eax
  int v36; // eax
  __int64 Prcb; // rax
  __int64 v38; // rdx
  unsigned __int8 v39; // bl
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // r9d
  unsigned int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // rax
  unsigned int v47; // edx
  __int64 v48; // rax
  unsigned int v50; // [rsp+20h] [rbp-38h] BYREF
  __int64 v51; // [rsp+28h] [rbp-30h]
  unsigned __int16 *v52; // [rsp+30h] [rbp-28h] BYREF
  __int64 v53; // [rsp+38h] [rbp-20h]
  unsigned __int16 v54; // [rsp+40h] [rbp-18h]
  int v55; // [rsp+42h] [rbp-16h]
  __int16 v56; // [rsp+46h] [rbp-12h]
  __int64 v57; // [rsp+A0h] [rbp+48h]
  unsigned __int16 v59; // [rsp+B0h] [rbp+58h]
  char v60; // [rsp+B8h] [rbp+60h]
  int v61; // [rsp+C8h] [rbp+70h]

  v59 = a3;
  v8 = a3;
  v54 = a3;
  v55 = 0;
  v56 = 0;
  v10 = 0;
  v50 = 0;
  v11 = 0;
  v57 = a2 ^ a1;
  v12 = 0;
  v61 = (unsigned __int16)a3;
  v13 = 0LL;
  v52 = 0LL;
  v14 = a2 ^ a1;
  v15 = a2 ^ a1;
  a3 = (unsigned __int16)a3;
  while ( v15 )
  {
LABEL_3:
    a3 = v54;
    _BitScanForward64(&v16, v15);
    v53 = v15 & ~(1LL << v16);
    v50 = KiProcessorNumberToIndexMappingTable[64 * v54 + (unsigned __int8)v16];
    if ( v50 >= (unsigned int)KeNumberProcessors_0 )
      v17 = 0LL;
    else
      v17 = KiProcessorBlock[v50];
    if ( *(_BYTE *)(v17 + 33208) )
    {
      ++v12;
      v13 |= *(_QWORD *)(v17 + 200);
    }
    else
    {
      ++v11;
    }
    v18 = *(_DWORD *)(v17 + 33168);
    if ( PpmHeteroImplementationGeneration )
    {
      v19 = *(_DWORD *)(v17 + 33184);
      if ( v19 )
        v18 = (v19 * v18) >> 16;
    }
    v15 = v53;
    ++v10;
    a6 += v18;
  }
  while ( ++v54 < (unsigned int)(a3 + 1) )
  {
    v53 = *(_QWORD *)(8LL * v54 + 8);
    v15 = v53;
    if ( v53 )
      goto LABEL_3;
  }
  v53 = a2;
  v51 = v13;
  v60 = v12;
  v54 = v8;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v50, &v52) )
  {
    Prcb = KeGetPrcb(v50);
    v38 = (unsigned int)(*(_DWORD *)(Prcb + 33168) - *(_DWORD *)(Prcb + 33172));
    if ( PpmHeteroImplementationGeneration )
      LODWORD(v38) = PpmHeteroUtilityToNormalizedUtility(Prcb + 33128, v38);
    a6 += v38;
  }
  if ( v10 <= 1u )
    v10 = 1;
  if ( a4 >= v10 )
    a4 = v10;
  if ( a4 <= 1u )
    a4 = 1;
  v20 = a6 / v10;
  v21 = a6 / a4;
  if ( v11 )
  {
    v22 = 0;
    if ( v60 )
    {
      v54 = v59;
      v53 = v51;
      v52 = 0LL;
      while ( 1 )
      {
        v39 = a4;
        if ( (unsigned int)KeEnumerateNextProcessor(&v50, &v52) )
          break;
        v40 = KeGetPrcb(v50);
        v14 ^= *(_QWORD *)(v40 + 200);
        v41 = PpmHeteroNormalizedUtilityToUtility(v40 + 33128, v21);
        v43 = v41;
        if ( v41 <= *(_DWORD *)(v42 + 40) )
        {
          if ( a5 )
          {
            v44 = *(_DWORD *)(v42 + 44);
            if ( v44 <= v43 )
              v44 = v43;
            *(_DWORD *)(v42 + 40) = v44;
          }
        }
        else
        {
          *(_DWORD *)(v42 + 40) = v41;
        }
        --a4;
        if ( !v39 )
          a4 = 0;
      }
    }
  }
  else
  {
    v22 = 0;
  }
  v23 = v61;
  v24 = v14;
  v54 = v59;
  while ( v24 )
  {
LABEL_24:
    v23 = v54;
    _BitScanForward64(&v25, v24);
    v53 = v24 & ~(1LL << v25);
    v50 = KiProcessorNumberToIndexMappingTable[64 * v54 + (unsigned __int8)v25];
    if ( v50 >= (unsigned int)KeNumberProcessors_0 )
      v26 = 0LL;
    else
      v26 = KiProcessorBlock[v50];
    v27 = *(_DWORD *)(v26 + 33184);
    v28 = *(_DWORD *)(v26 + 33168);
    if ( v27 )
      v29 = (v28 * v27) >> 16;
    else
      v29 = *(_DWORD *)(v26 + 33168);
    if ( v20 <= v29 )
    {
      v14 ^= *(_QWORD *)(v26 + 200);
      v30 = v21;
      if ( v27 )
      {
        if ( v27 == 0x10000 )
          v30 = (unsigned __int16)v21;
        else
          v30 = (v21 << 16) / v27;
      }
      if ( v30 <= v28 )
      {
        if ( !a5 )
          goto LABEL_29;
        v45 = *(_DWORD *)(v26 + 33172);
        v24 = v53;
        if ( v45 <= v30 )
          v45 = v30;
        *(_DWORD *)(v26 + 33168) = v45;
      }
      else
      {
        v24 = v53;
        *(_DWORD *)(v26 + 33168) = v30;
      }
    }
    else
    {
LABEL_29:
      v24 = v53;
    }
  }
  while ( ++v54 < (unsigned int)(v23 + 1) )
  {
    v53 = *(_QWORD *)(8LL * v54 + 8);
    v24 = v53;
    if ( v53 )
      goto LABEL_24;
  }
  v31 = v61;
  v54 = v59;
  v52 = 0LL;
  while ( v14 )
  {
LABEL_38:
    v31 = v54;
    _BitScanForward64(&v32, v14);
    v53 = v14 & ~(1LL << v32);
    v50 = KiProcessorNumberToIndexMappingTable[64 * v54 + (unsigned __int8)v32];
    if ( v50 >= (unsigned int)KeNumberProcessors_0 )
      v33 = 0LL;
    else
      v33 = KiProcessorBlock[v50];
    v34 = *(_DWORD *)(v33 + 33184);
    v35 = v20;
    if ( v34 )
    {
      if ( v34 == 0x10000 )
        v35 = (unsigned __int16)v20;
      else
        v35 = (v20 << 16) / v34;
    }
    v14 = v53;
    *(_DWORD *)(v33 + 33168) = v35;
  }
  while ( 1 )
  {
    LOWORD(v36) = ++v54;
    if ( v54 >= (unsigned int)(v31 + 1) )
      break;
    v53 = *(_QWORD *)(8LL * v54 + 8);
    v14 = v53;
    if ( v53 )
      goto LABEL_38;
  }
  if ( a7 )
  {
    v53 = v57;
    v52 = 0LL;
    v54 = v59;
    while ( 1 )
    {
      v36 = KeEnumerateNextProcessor(&v50, &v52);
      if ( v36 )
        break;
      v46 = KeGetPrcb(v50);
      v47 = *(_DWORD *)(v46 + 33168);
      if ( v47 > 0x2710 )
        v22 += PpmHeteroUtilityToNormalizedUtility(v46 + 33128, v47 - 10000);
    }
    *a7 = v22;
  }
  if ( a5 )
  {
    v53 = a2;
    v54 = v59;
    v52 = 0LL;
    while ( 1 )
    {
      v36 = KeEnumerateNextProcessor(&v50, &v52);
      if ( v36 )
        break;
      v48 = KeGetPrcb(v50);
      *(_DWORD *)(v48 + 33168) = *(_DWORD *)(v48 + 33172);
    }
  }
  return v36;
}
