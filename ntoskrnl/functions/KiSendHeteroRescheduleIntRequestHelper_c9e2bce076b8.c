char __fastcall KiSendHeteroRescheduleIntRequestHelper(unsigned __int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // r13
  char v6; // r12
  _QWORD *v7; // rbx
  _DWORD *v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // ecx
  __int64 v16; // rdi
  volatile signed __int32 *v17; // r14
  char v18; // al
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned int v24; // ecx
  char v25; // al
  int v26; // edx
  _WORD *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v31; // [rsp+20h] [rbp-20h]
  int v32; // [rsp+24h] [rbp-1Ch]
  int v33; // [rsp+2Ch] [rbp-14h] BYREF
  int v34; // [rsp+30h] [rbp-10h] BYREF
  __int64 v35; // [rsp+38h] [rbp-8h] BYREF
  __int64 v36; // [rsp+80h] [rbp+40h]

  v31 = -1;
  v4 = 0;
  v35 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v32 = 0;
  v7 = a2;
  v9 = a3;
  v10 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      _BitScanForward64(&v11, v10);
      v36 = v10 ^ (1LL << v11);
      v12 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a4 + 208) + (unsigned int)v11];
      v13 = KiProcessorBlock[v12];
      KiAcquirePrcbLocksForIsolationUnit(v13, 0, &v35);
      v14 = *(_QWORD *)(v13 + 8);
      if ( (*(_BYTE *)(v13 + 35) & 1) == 0 || *(_QWORD *)(v13 + 16) )
        goto LABEL_67;
      if ( *(_BYTE *)(v13 + 13241) )
        goto LABEL_66;
      v15 = *(_DWORD *)(v14 + 80);
      if ( v15 <= *(_DWORD *)(v14 + 84) )
        v15 = *(_DWORD *)(v14 + 84);
      if ( v15 < KiDynamicHeteroCpuPolicyExpectedCycles
        || !KiCheckPreferredHeteroProcessor(*(_QWORD *)(v13 + 8), v13, 0) )
      {
        goto LABEL_66;
      }
      if ( a2 )
      {
        if ( (*(_DWORD *)(v14 + 120) & 0x1000) == 0 )
        {
          v5 |= 1LL << v12;
          if ( v31 == -1 || *(char *)(v14 + 195) > v31 )
          {
            v6 = 1;
            v31 = *(char *)(v14 + 195);
            v32 = v12;
          }
        }
        goto LABEL_66;
      }
      _InterlockedIncrement16((volatile signed __int16 *)(v14 + 868));
      KiReleasePrcbLocksForIsolationUnit(&v35);
      v33 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v33);
        while ( *(_QWORD *)(v14 + 64) );
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v16 = 0LL;
          v17 = 0LL;
          if ( *(_BYTE *)(v14 + 388) == 1 )
            break;
          switch ( *(_BYTE *)(v14 + 388) )
          {
            case 2:
LABEL_20:
              v19 = *(unsigned int *)(v14 + 536);
              if ( (int)v19 >= 0 )
              {
                v16 = KiProcessorBlock[v19];
                KiAcquirePrcbLocksForIsolationUnit(v16, 0, &v35);
                v20 = v14 == *(_QWORD *)(v16 + 8);
LABEL_37:
                if ( v20 )
                  goto LABEL_39;
LABEL_38:
                KiReleasePrcbLocksForIsolationUnit(&v35);
              }
              break;
            case 3:
              v21 = *(unsigned int *)(v14 + 536);
              if ( (int)v21 >= 0 )
              {
                v16 = KiProcessorBlock[v21];
                KiAcquirePrcbLocksForIsolationUnit(v16, 0, &v35);
                if ( v14 == *(_QWORD *)(v16 + 16) )
                  goto LABEL_39;
                if ( *(_BYTE *)(v14 + 388) == 3 && *(_DWORD *)(v14 + 536) == (_DWORD)v21 )
                  __fastfail(0x1Eu);
                goto LABEL_38;
              }
              break;
            case 5:
              v18 = *(_BYTE *)(v14 + 112) & 7;
              if ( v18 == 1 || (unsigned __int8)(v18 - 3) <= 3u )
                goto LABEL_39;
              goto LABEL_20;
            default:
              goto LABEL_39;
          }
        }
        v22 = *(unsigned int *)(v14 + 536);
        if ( (int)v22 >= 0 )
        {
          v16 = KiProcessorBlock[v22];
          KiAcquirePrcbLocksForIsolationUnit(v16, 0, &v35);
          if ( *(_BYTE *)(v14 + 388) != 1 )
            goto LABEL_38;
          v20 = *(_DWORD *)(v14 + 536) == (_DWORD)v22;
          goto LABEL_37;
        }
        v23 = (unsigned int)v22;
        LODWORD(v23) = v22 & 0x7FFFFFFF;
        v34 = 0;
        v17 = *(volatile signed __int32 **)(KiProcessorBlock[v23] + 34888);
        while ( _interlockedbittestandset64(v17, 0LL) )
        {
          do
            KeYieldProcessorEx(&v34);
          while ( *(_QWORD *)v17 );
        }
        if ( *(_BYTE *)(v14 + 388) == 1 && *(_DWORD *)(v14 + 536) == (_DWORD)v22 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
      }
LABEL_39:
      _InterlockedAdd16((volatile signed __int16 *)(v14 + 868), 0xFFFFu);
      if ( *(_BYTE *)(v14 + 388) == 2 && !*(_BYTE *)(v16 + 13241) )
      {
        v24 = *(_DWORD *)(v14 + 80);
        if ( v24 <= *(_DWORD *)(v14 + 84) )
          v24 = *(_DWORD *)(v14 + 84);
        if ( v24 >= KiDynamicHeteroCpuPolicyExpectedCycles
          && KiCheckPreferredHeteroProcessor(v14, v16, 0)
          && !_interlockedbittestandset((volatile signed __int32 *)(v14 + 120), 0xCu) )
        {
          *(_BYTE *)(v16 + 13241) = 1;
          v25 = *(_BYTE *)(a4 + 12761);
          if ( !v25 )
          {
            *(_BYTE *)(a4 + 12761) = 1;
            *(_DWORD *)(a4 + 12764) = *(_DWORD *)(v16 + 36);
            goto LABEL_56;
          }
          if ( v25 == 1 )
          {
            v26 = *(_DWORD *)(a4 + 12764);
            if ( v26 != *(_DWORD *)(v16 + 36) )
            {
              v27 = (_WORD *)(a4 + 12768);
              *(_BYTE *)(a4 + 12761) = 2;
              KeAddProcessorAffinityEx((unsigned __int16 *)(a4 + 12768), v26);
              goto LABEL_52;
            }
          }
          else
          {
            v27 = (_WORD *)(a4 + 12768);
LABEL_52:
            v28 = *(unsigned __int8 *)(v16 + 208);
            v29 = *(_QWORD *)(v16 + 200);
            if ( *v27 <= (unsigned __int16)v28 )
            {
              if ( v27[1] <= (unsigned __int16)v28 )
                goto LABEL_56;
              *v27 = v28 + 1;
            }
            *(_QWORD *)&v27[4 * v28 + 4] |= v29;
          }
LABEL_56:
          v6 = 1;
        }
      }
      if ( v16 )
        KiReleasePrcbLocksForIsolationUnit(&v35);
      if ( v17 )
        _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
      *(_QWORD *)(v14 + 64) = 0LL;
LABEL_66:
      if ( v35 )
LABEL_67:
        KiReleasePrcbLocksForIsolationUnit(&v35);
      v10 = v36;
      if ( !v36 )
      {
        v7 = a2;
        v9 = a3;
        v4 = v32;
        break;
      }
    }
  }
  KiFlushSoftwareInterruptBatch(a4 + 12760);
  if ( v7 )
    *v7 = v5;
  if ( v9 )
    *v9 = v4;
  return v6;
}
