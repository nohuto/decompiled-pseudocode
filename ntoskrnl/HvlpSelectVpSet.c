/*
 * XREFs of HvlpSelectVpSet @ 0x14053F57C
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403714E0 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlIsSingleGroupRequired @ 0x1403A4F6C (HvlIsSingleGroupRequired.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlpComputeLpComparisonMetrics @ 0x14053E614 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x14053EDD0 (HvlpLpComparison.c)
 *     HviGetImplementationLimits @ 0x140613064 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectVpSet(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r15
  unsigned int v5; // ebp
  _DWORD *v6; // rsi
  _WORD *v7; // rcx
  __int64 v8; // rdx
  char v9; // al
  unsigned int v10; // esi
  unsigned int v11; // ecx
  unsigned int v12; // ebp
  unsigned int v13; // r8d
  __int128 *v14; // r10
  __int64 v15; // rdx
  unsigned int v16; // r9d
  unsigned __int16 *v17; // rcx
  bool IsSingleGroupRequired; // al
  unsigned int v19; // r10d
  unsigned int v20; // edx
  _DWORD *v21; // r8
  unsigned __int64 v22; // r11
  int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // rbp
  int v26; // r8d
  _WORD *v27; // rcx
  __int64 v28; // r9
  _DWORD *v29; // rcx
  int v30; // r9d
  __int64 v31; // r11
  unsigned int v32; // r8d
  unsigned int v33; // ecx
  unsigned __int64 v34; // r9
  unsigned int v35; // eax
  _BYTE *v36; // rcx
  unsigned int v37; // esi
  _BYTE *v38; // rbp
  unsigned int v39; // eax
  unsigned int v40; // r9d
  _BYTE *v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  _BYTE *v44; // rsi
  __int64 v45; // rcx
  char v46; // r12
  unsigned int v47; // ebp
  __int64 v48; // rsi
  char v49; // al
  int v50; // r8d
  _WORD *i; // rdx
  unsigned int v52; // ecx
  __int128 v54; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v55[64]; // [rsp+40h] [rbp-78h] BYREF

  v2 = a1;
  v54 = 0LL;
  v3 = 0;
  HvlpMinrootConfigurationError = 0;
  HviGetImplementationLimits(&v54);
  if ( (HvlpFlags & 0x800000) == 0 || (HvlpRootFlags & 0x800) != 0 )
  {
    if ( (_DWORD)v2 )
    {
LABEL_11:
      v7 = (_WORD *)(a2 + 8);
      v8 = v2;
      do
      {
        v7[2] = *v7;
        v9 = 0;
        *(v7 - 4) = 1;
        if ( (HvlpRootFlags & 0x800) == 0 )
          v9 = *((_BYTE *)v7 - 6);
        *((_BYTE *)v7 - 5) = v9;
        v7 += 20;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v3 = 1;
    v5 = 0;
    if ( (_DWORD)v2 )
    {
      v6 = (_DWORD *)(a2 + 28);
      while ( 1 )
      {
        HvlpComputeLpComparisonMetrics(v2, a2, v5);
        if ( *((_BYTE *)v6 - 26) )
        {
          if ( !*v6 )
            break;
        }
        ++v5;
        v6 += 10;
        if ( v5 >= (unsigned int)v2 )
          goto LABEL_11;
      }
      v3 = 0;
      goto LABEL_11;
    }
  }
  if ( !v3 )
    goto LABEL_67;
  if ( (KeRootProcPerNodeSpecified & 1) != 0 )
  {
    KeRootProcPerNodeSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
  if ( (BYTE5(Mm64BitPhysicalAddress) & 1) != 0 )
  {
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5) = 0;
    HvlpMinrootConfigurationError = 1;
  }
  if ( (KeRootProcSpecified & 1) != 0 )
  {
    HvlpMinrootConfigurationError = 1;
    ++KeRootProcSpecified;
  }
  v10 = KeRootProcNumaNodesSpecified;
  if ( KeRootProcNumaNodesSpecified )
  {
    v11 = 0;
    do
    {
      if ( *((_WORD *)&KeRootProcNumaNodes + v11) == *(_WORD *)(a2 + 8) )
        break;
      ++v11;
    }
    while ( v11 < KeRootProcNumaNodesSpecified );
    if ( v11 == KeRootProcNumaNodesSpecified )
    {
      v10 = 0;
      KeRootProcNumaNodesSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
  }
  if ( !KeRootProcSpecified )
    goto LABEL_54;
  memset(v55, 0, sizeof(v55));
  v12 = 0;
  if ( !v10 )
    v10 = (unsigned __int16)KeNumberNodes;
  v13 = 0;
  if ( !v10 )
  {
LABEL_47:
    if ( KeRootProcNumaNodesSpecified )
    {
      KeRootProcNumaNodesSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
    goto LABEL_54;
  }
  v14 = &KeRootProcNumaNodes;
  do
  {
    if ( KeRootProcNumaNodesSpecified )
    {
      v15 = *(unsigned __int16 *)v14;
      if ( (unsigned int)v15 >= 0x40 || v55[v15] )
        goto LABEL_45;
      v55[v15] = 1;
    }
    else
    {
      LODWORD(v15) = v13;
    }
    v16 = 0;
    if ( (_DWORD)v2 )
    {
      v17 = (unsigned __int16 *)(a2 + 8);
      while ( !*((_BYTE *)v17 - 6) || *v17 != (_DWORD)v15 )
      {
        ++v16;
        v17 += 20;
        if ( v16 >= (unsigned int)v2 )
          goto LABEL_45;
      }
      ++v12;
    }
LABEL_45:
    ++v13;
    v14 = (__int128 *)((char *)v14 + 2);
  }
  while ( v13 < v10 );
  if ( !v12 )
    goto LABEL_47;
  if ( KeRootProcSpecified <= v12 )
  {
    IsSingleGroupRequired = HvlIsSingleGroupRequired();
    HvlpMinrootConfigurationError = 1;
    if ( IsSingleGroupRequired )
    {
      KeRootProcSpecified = 64;
      if ( v12 >= 0x40 )
      {
        LOWORD(KeRootProcNumaNodes) = *(_WORD *)(a2 + 8);
        KeRootProcNumaNodesSpecified = 1;
      }
    }
    else
    {
      KeRootProcSpecified = 0;
    }
  }
LABEL_54:
  if ( KeRootProcNumaNodeLpsSpecified )
  {
    if ( !KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8)]
      || !_bittest64((const signed __int64 *)KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8) + 1], 0) )
    {
      goto LABEL_64;
    }
    v19 = 1;
    v20 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
    if ( (unsigned int)v2 > 1 )
    {
      v21 = (_DWORD *)(a2 + 76);
      while ( 1 )
      {
        if ( (v20 & *(v21 - 8)) == (v20 & *(_DWORD *)(a2 + 4)) )
        {
          v22 = (unsigned int)*v21;
          if ( v22 >= KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8)]
            || !_bittest64(
                  (const signed __int64 *)(KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(a2 + 8) + 1] + 8 * (v22 >> 6)),
                  *v21 & 0x3F) )
          {
            break;
          }
        }
        ++v19;
        v21 += 10;
        if ( v19 >= (unsigned int)v2 )
          goto LABEL_67;
      }
LABEL_64:
      if ( HvlIsSingleGroupRequired() )
      {
        LOWORD(KeRootProcNumaNodes) = *(_WORD *)(a2 + 8);
        KeRootProcSpecified = 64;
        KeRootProcNumaNodesSpecified = 1;
      }
      KeRootProcNumaNodeLpsSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
  }
LABEL_67:
  *(_BYTE *)(a2 + 1) = 1;
  *(_BYTE *)(a2 + 3) = 1;
  v23 = 1;
  while ( 1 )
  {
    if ( (_DWORD)v2 )
    {
      v24 = a2;
      v25 = v2;
      do
      {
        if ( *(_BYTE *)v24 )
        {
          if ( *(_BYTE *)(v24 + 1) || !*(_BYTE *)(v24 + 2) || v23 == (_DWORD)v54 )
            goto LABEL_98;
          if ( KeRootProcPerNodeSpecified )
          {
            v26 = 0;
            v27 = (_WORD *)(a2 + 8);
            v28 = v2;
            do
            {
              if ( *((_BYTE *)v27 - 7) && *v27 == *(_WORD *)(v24 + 8) )
                ++v26;
              v27 += 20;
              --v28;
            }
            while ( v28 );
            if ( v26 == KeRootProcPerNodeSpecified )
              goto LABEL_98;
          }
          if ( *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5) )
          {
            v29 = (_DWORD *)(a2 + 4);
            v30 = 0;
            v31 = v2;
            v32 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
            do
            {
              if ( *((_BYTE *)v29 - 3) && (*v29 & v32) == (v32 & *(_DWORD *)(v24 + 4)) )
                ++v30;
              v29 += 10;
              --v31;
            }
            while ( v31 );
            if ( v30 == *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5) )
              goto LABEL_98;
          }
          if ( KeRootProcNumaNodesSpecified )
          {
            v33 = 0;
            while ( *((_WORD *)&KeRootProcNumaNodes + v33) != *(_WORD *)(v24 + 12) )
            {
              if ( ++v33 >= KeRootProcNumaNodesSpecified )
                goto LABEL_98;
            }
          }
          if ( KeRootProcSpecified && v23 == KeRootProcSpecified
            || KeRootProcNumaNodeLpsSpecified
            && ((v34 = *(unsigned int *)(v24 + 36), v34 >= KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(v24 + 8)])
             || !_bittest64(
                   (const signed __int64 *)(KeRootProcNumaNodeLps[2 * *(unsigned __int16 *)(v24 + 8) + 1]
                                          + 8 * (v34 >> 6)),
                   *(_DWORD *)(v24 + 36) & 0x3F)) )
          {
LABEL_98:
            *(_BYTE *)v24 = 0;
          }
        }
        v24 += 40LL;
        --v25;
      }
      while ( v25 );
      v35 = 0;
      v36 = (_BYTE *)a2;
      do
      {
        if ( *v36 )
          break;
        ++v35;
        v36 += 40;
      }
      while ( v35 < (unsigned int)v2 );
    }
    else
    {
      v35 = 0;
    }
    if ( v35 == (_DWORD)v2 )
      break;
    v37 = 0;
    if ( (_DWORD)v2 )
    {
      v38 = (_BYTE *)a2;
      do
      {
        if ( *v38 )
          HvlpComputeLpComparisonMetrics(v2, a2, v37);
        ++v37;
        v38 += 40;
      }
      while ( v37 < (unsigned int)v2 );
      v39 = 0;
      v40 = -1;
      v41 = (_BYTE *)a2;
      while ( !*v41 )
      {
        ++v39;
        v41 += 40;
        if ( v39 >= (unsigned int)v2 )
        {
          v42 = 0LL;
          goto LABEL_115;
        }
      }
      v42 = v39 + 1;
      v40 = v39;
      if ( (unsigned int)v42 >= (unsigned int)v2 )
        goto LABEL_122;
LABEL_115:
      v43 = 5 * v42;
      v44 = (_BYTE *)(a2 + 40 * v42);
      do
      {
        if ( *v44 )
        {
          if ( (unsigned int)HvlpLpComparison(v43, a2, v42, v40) == -1 )
            v40 = v42;
        }
        LODWORD(v42) = v42 + 1;
        v44 += 40;
      }
      while ( (unsigned int)v42 < (unsigned int)v2 );
    }
    else
    {
      v40 = -1;
    }
LABEL_122:
    ++v23;
    v45 = 5LL * v40;
    *(_BYTE *)(a2 + 8 * v45 + 1) = 1;
    *(_BYTE *)(a2 + 8 * v45 + 3) = 1;
  }
  v46 = 0;
  if ( v3 )
  {
    v47 = 1;
    if ( (unsigned int)v2 > 1 )
    {
      v48 = a2 + 41;
      do
      {
        if ( *(_BYTE *)v48 )
        {
          HvlpComputeLpComparisonMetrics(v2, a2, v47);
          if ( !*(_DWORD *)(v48 + 27) )
          {
            *(_BYTE *)v48 = 0;
            v49 = 0;
            if ( (HvlpRootFlags & 0x800) == 0 )
              v49 = *(_BYTE *)(v48 + 1);
            *(_BYTE *)(v48 + 2) = v49;
            v46 = 1;
            HvlpMinrootConfigurationError = 1;
          }
        }
        ++v47;
        v48 += 40LL;
      }
      while ( v47 < (unsigned int)v2 );
    }
  }
  if ( KeRootProcNumaNodesSpecified )
    return 0LL;
  if ( KeRootProcNumaNodeLpsSpecified )
    return 0LL;
  if ( v46 )
    return 0LL;
  v50 = 0;
  if ( !(_DWORD)v2 )
    return 0LL;
  for ( i = (_WORD *)(a2 + 8); ; i += 20 )
  {
    if ( *((_BYTE *)i - 6) )
    {
      v52 = 0;
      do
      {
        if ( *(_WORD *)(a2 + 40LL * v52 + 8) == *i && *(_BYTE *)(a2 + 40LL * v52 + 1) )
          break;
        ++v52;
      }
      while ( v52 < (unsigned int)v2 );
      if ( v52 == (_DWORD)v2 )
        break;
    }
    if ( ++v50 >= (unsigned int)v2 )
      return 0LL;
  }
  return 3221225473LL;
}
