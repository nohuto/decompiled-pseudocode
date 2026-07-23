/*
 * XREFs of PpmCheckSnapAllUtility @ 0x1402CF960
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkSnapNodeStatistics @ 0x1402CF8C8 (PpmParkSnapNodeStatistics.c)
 *     PpmPerfSnapUtility @ 0x14056EAEC (PpmPerfSnapUtility.c)
 */

char PpmCheckSnapAllUtility()
{
  unsigned __int64 v0; // rdi
  unsigned __int16 v1; // r15
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  int v12; // ebp
  unsigned int v13; // r10d
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int64 i; // rdi
  unsigned int j; // ebx
  __int64 v24; // rcx

  PpmParkSnapNodeStatistics();
  v0 = qword_140C113C8[0];
  v1 = 0;
  while ( v0 )
  {
LABEL_3:
    _BitScanForward64(&v2, v0);
    v0 &= ~(1LL << v2);
    v3 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v1 + (unsigned __int8)v2];
    if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
    {
      v4 = 0LL;
    }
    else
    {
      _mm_lfence();
      v4 = KiProcessorBlock[v3];
    }
    v5 = *(_QWORD *)(v4 + 33144);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 128) - *(_QWORD *)(v5 + 32);
      v7 = *(_QWORD *)(v5 + 136) - *(_QWORD *)(v5 + 40);
      v8 = v7;
      v9 = *(_QWORD *)(v5 + 176) - *(_QWORD *)(v5 + 80);
      if ( !v7 )
        v8 = 1LL;
      v10 = (*(_QWORD *)(v5 + 160) - *(_QWORD *)(v5 + 64)) / v8;
      v11 = *(_QWORD *)(v5 + 176) - *(_QWORD *)(v5 + 80);
      v12 = v10;
      if ( !v9 )
        v11 = 1LL;
      v13 = (unsigned __int8)(100LL * (*(_QWORD *)(v5 + 184) - *(_QWORD *)(v5 + 88)) / v11);
      if ( v13 > 0x64 )
        LOWORD(v13) = 100;
      v14 = *(_QWORD *)(v4 + 33136);
      if ( !(_DWORD)v10 )
      {
        if ( v14 )
          v12 = *(_DWORD *)(v14 + 120);
        else
          v12 = 100;
      }
      v15 = *(_QWORD *)(v5 + 176) - *(_QWORD *)(v5 + 80);
      if ( !v9 )
        v15 = 1LL;
      v16 = 100LL * (*(_QWORD *)(v5 + 192) - *(_QWORD *)(v5 + 96)) / v15;
      if ( (unsigned __int8)v16 > 0x64u )
        LOBYTE(v16) = 100;
      *(_BYTE *)(v5 + 328) = v16;
      v17 = v9;
      if ( !v9 )
        v17 = 1LL;
      v18 = 100LL * (*(_QWORD *)(v5 + 200) - *(_QWORD *)(v5 + 104)) / v17;
      if ( (unsigned __int8)v18 > 0x64u )
        LOBYTE(v18) = 100;
      *(_BYTE *)(v5 + 329) = v18;
      if ( !v9 )
        v9 = 1LL;
      v19 = 100LL * (*(_QWORD *)(v5 + 208) - *(_QWORD *)(v5 + 112)) / v9;
      if ( (unsigned __int8)v19 > 0x64u )
        LOBYTE(v19) = 100;
      *(_BYTE *)(v5 + 330) = v19;
      *(_WORD *)(v4 + 33180) = v13;
      if ( v14 )
      {
        v20 = v7;
        if ( !v7 )
          v20 = 1LL;
        v21 = (*(_QWORD *)(v5 + 152) - *(_QWORD *)(v5 + 56)) / v20;
        if ( !(_DWORD)v21 )
          LODWORD(v21) = *(_DWORD *)(v14 + 116);
        *(_DWORD *)(v14 + 116) = v21;
        *(_DWORD *)(v14 + 120) = v12;
      }
      *(_OWORD *)(v5 + 32) = *(_OWORD *)(v5 + 128);
      *(_OWORD *)(v5 + 48) = *(_OWORD *)(v5 + 144);
      *(_OWORD *)(v5 + 64) = *(_OWORD *)(v5 + 160);
      *(_OWORD *)(v5 + 80) = *(_OWORD *)(v5 + 176);
      *(_OWORD *)(v5 + 96) = *(_OWORD *)(v5 + 192);
      *(_OWORD *)(v5 + 112) = *(_OWORD *)(v5 + 208);
      if ( *(_BYTE *)(v4 + 33188) )
      {
        *(_QWORD *)(v4 + 33224) += v7;
        *(_QWORD *)(v4 + 33232) += v6;
      }
    }
  }
  while ( ++v1 < (unsigned int)(unsigned __int16)PpmCheckRegistered )
  {
    v0 = qword_140C113C8[v1];
    if ( v0 )
      goto LABEL_3;
  }
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    for ( j = 0; j < *(_DWORD *)(i + 200); ++j )
    {
      v24 = *(_QWORD *)(i + 216) + 136LL * j;
      if ( *(_DWORD *)(v24 + 16) == 1 )
        PpmPerfSnapUtility(*(_QWORD *)v24);
    }
  }
  return 1;
}
