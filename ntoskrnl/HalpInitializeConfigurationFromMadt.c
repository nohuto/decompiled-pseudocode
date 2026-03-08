/*
 * XREFs of HalpInitializeConfigurationFromMadt @ 0x140B633D4
 * Callers:
 *     HalpNumaInitializeStaticConfiguration @ 0x140B63268 (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 *     HalpParseChannelCount @ 0x14039F7AC (HalpParseChannelCount.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140B63680 (HalpChannelInitializeStaticConfiguration.c)
 *     HalpAllocateNumaConfigData @ 0x140B636D0 (HalpAllocateNumaConfigData.c)
 */

__int64 __fastcall HalpInitializeConfigurationFromMadt(__int64 a1)
{
  unsigned int v1; // edi
  __int64 result; // rax
  char *v3; // rcx
  unsigned __int64 v4; // r8
  unsigned int v5; // ebp
  __int64 v6; // rdx
  char *v7; // rax
  char v8; // r9
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rsi
  unsigned int v13; // edx
  unsigned __int64 v14; // r8
  char *v15; // r14
  unsigned __int64 v16; // r10
  char *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // rbx
  _QWORD *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int16 v24; // dx
  _QWORD *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // r8
  __int64 v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r10
  __int64 v34; // rcx

  v1 = 0;
  result = HalpAcpiGetTable(a1, 1128878145, 0, 0);
  if ( result )
  {
    v3 = (char *)(result + 44);
    v4 = result + *(unsigned int *)(result + 4);
    v5 = 2048;
    if ( result + 46 <= v4 )
    {
      do
      {
        v6 = (unsigned __int8)v3[1];
        if ( (unsigned __int8)v6 < 2u || (unsigned __int64)&v3[v6] > v4 )
          break;
        v7 = v3;
        v3 += v6;
        v8 = *v7;
        if ( !*v7 && (_BYTE)v6 == 8 || v8 == 9 && (_BYTE)v6 == 16 || v8 == 11 && (unsigned __int8)v6 >= 0x28u )
          ++v1;
      }
      while ( (unsigned __int64)(v3 + 2) <= v4 );
      if ( v1 > 0x800 )
        v1 = 2048;
    }
    if ( HalpSplitLargeNumaNodes )
    {
      v5 = HalpMaximumGroupSize;
      v9 = (v1 + HalpMaximumGroupSize - 1) / HalpMaximumGroupSize;
      if ( v9 > 0x40 )
      {
        v9 = 64;
        v1 = HalpMaximumGroupSize << 6;
      }
    }
    else
    {
      v9 = 1;
    }
    v10 = HalpParseChannelCount();
    result = HalpAllocateNumaConfigData(v9, v1, 0LL, v10);
    v12 = HalpNumaConfig;
    if ( HalpNumaConfig )
    {
      *(_DWORD *)(HalpNumaConfig + 60) = v1;
      v13 = 0;
      *(_DWORD *)(v12 + 56) = v9;
      if ( v1 )
      {
        if ( v1 < 4 )
          goto LABEL_29;
        v11 = *(_QWORD *)v12;
        v14 = v12 + 8;
        v15 = *(char **)(v12 + 8);
        v16 = *(_QWORD *)v12 + 4LL * (v1 - 1);
        v17 = &v15[4 * v1 - 4];
        if ( (unsigned __int64)v15 <= v16 && (unsigned __int64)v17 >= v11 )
          goto LABEL_29;
        if ( (unsigned __int64)v15 <= v12 && (unsigned __int64)v17 >= v12 )
          goto LABEL_29;
        if ( (unsigned __int64)v15 <= v14 && (unsigned __int64)v17 >= v14 )
          goto LABEL_29;
        if ( v11 <= v12 && v16 >= v12 )
          goto LABEL_29;
        if ( v11 <= v14 && v16 >= v14 )
          goto LABEL_29;
        v18 = v1 & 0xFFFFFFFC;
        do
        {
          v13 += 4;
          v19 = v13;
        }
        while ( v13 < (unsigned int)v18 );
        v20 = 4 * v18;
        memset(*(void **)v12, -1, 4 * v18);
        memset(v15, -1, v20 & 0xFFFFFFFFFFFFFFFCuLL);
        v13 = v19;
        if ( v19 < v1 )
        {
LABEL_29:
          v21 = (_QWORD *)HalpNumaConfig;
          v22 = 4LL * v13;
          v23 = v1 - v13;
          do
          {
            *(_DWORD *)(v22 + *v21) = -1;
            *(_DWORD *)(v22 + v21[1]) = -1;
            v22 += 4LL;
            --v23;
          }
          while ( v23 );
        }
      }
      v24 = 0;
      if ( *(_DWORD *)(v12 + 56) )
      {
        v25 = (_QWORD *)HalpNumaConfig;
        LODWORD(v11) = 0;
        do
        {
          v26 = v24++;
          *(_DWORD *)(v25[3] + 4 * v26) = v11;
          v11 = v24;
          *(_DWORD *)(v25[4] + 4 * v26) = 0;
          *(_DWORD *)(v25[5] + 4 * v26) = v5;
        }
        while ( (unsigned int)v24 < *(_DWORD *)(v12 + 56) );
      }
      v27 = HalpNumaConfig;
      v28 = 0LL;
      v29 = v24;
      *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 40) + 4LL * v24 - 4) = v1 - v5 * (v24 - 1);
      if ( v1 )
      {
        v11 = 0LL;
        do
        {
          v29 = *(_QWORD *)(v27 + 16);
          v30 = v28;
          v28 = (unsigned int)(v28 + 1);
          *(_DWORD *)(v11 + v29) = v30 / v5;
          v11 += 4LL;
        }
        while ( (unsigned int)v28 < v1 );
      }
      v31 = *(_DWORD *)(v12 + 56);
      v32 = 0LL;
      if ( v31 )
      {
        LODWORD(v11) = 0;
        do
        {
          v28 = 0LL;
          v29 = v31;
          if ( v31 )
          {
            v33 = HalpNumaConfig;
            do
            {
              v34 = (unsigned int)(v28 + *(_DWORD *)(v33 + 64) * v11);
              v28 = (unsigned int)(v28 + 1);
              *(_WORD *)(*(_QWORD *)(v33 + 48) + 2 * v34) = 0;
              v29 = *(unsigned int *)(v12 + 56);
            }
            while ( (unsigned int)v28 < (unsigned int)v29 );
          }
          LOWORD(v32) = v32 + 1;
          v31 = v29;
          v11 = (unsigned __int16)v32;
        }
        while ( (unsigned __int16)v32 < (unsigned int)v29 );
      }
      return HalpChannelInitializeStaticConfiguration(v29, v32, v28, v11);
    }
  }
  return result;
}
