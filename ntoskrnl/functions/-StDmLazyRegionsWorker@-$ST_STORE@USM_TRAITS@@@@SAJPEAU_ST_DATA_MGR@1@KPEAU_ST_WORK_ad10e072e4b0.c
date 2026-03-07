__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(__int64 a1, char a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v6; // ebp
  char v7; // si
  unsigned int v8; // r10d
  __int64 v9; // rdi
  unsigned int v10; // r8d
  unsigned __int64 v11; // r11
  _DWORD *v12; // rdx
  int v13; // r9d
  _DWORD *i; // rax
  unsigned int v15; // r9d
  __int64 v16; // rcx
  unsigned __int64 j; // rax
  unsigned int *v18; // rax
  unsigned int v19; // r8d
  unsigned int v20; // edi
  __int64 v21; // r12
  __int64 *v22; // rax
  __int64 *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  void *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r9
  int v30; // ecx
  __int16 v31; // ax
  int v33; // [rsp+80h] [rbp+8h]
  char v34; // [rsp+88h] [rbp+10h]
  int v35; // [rsp+90h] [rbp+18h]
  unsigned int v36; // [rsp+98h] [rbp+20h]

  v35 = 0;
  v4 = 0;
  v33 = 0;
  if ( a3 )
  {
    _InterlockedAnd16((volatile signed __int16 *)(a3 + 12), 0xFFFEu);
    *(_WORD *)(a3 + 14) &= ~1u;
  }
  v6 = 0;
  v7 = a2 & 1;
  v34 = a2 & 1;
LABEL_4:
  while ( 1 )
  {
    v8 = *(_DWORD *)(a1 + 840);
    if ( v8 <= v6 )
      break;
    v9 = *(_QWORD *)(a1 + 848);
    v10 = 0;
    v11 = v9 + 4 * ((unsigned __int64)(v8 - 1) >> 5);
    v12 = (_DWORD *)(v9 + 4 * ((unsigned __int64)v6 >> 5));
    v13 = ((1 << (v6 & 0x1F)) - 1) | *v12;
    for ( i = v12 + 1; ; ++i )
    {
      v15 = ~v13;
      if ( v15 )
        break;
      if ( (unsigned __int64)i > v11 )
        goto LABEL_10;
      v13 = *++v12;
    }
    _BitScanForward64((unsigned __int64 *)&v16, v15);
    v6 = v16 + 32 * (((__int64)v12 - v9) >> 2);
    if ( v6 > v8 )
    {
LABEL_10:
      v6 = *(_DWORD *)(a1 + 840);
      goto LABEL_20;
    }
    for ( j = ~(v15 | ((1 << v16) - 1)); !(_DWORD)j; j = *v18 )
    {
      v18 = v12 + 1;
      if ( (unsigned __int64)(v12 + 1) > v11 )
      {
        LODWORD(j) = 32;
        goto LABEL_17;
      }
      ++v12;
    }
    _BitScanForward64(&j, j);
LABEL_17:
    v19 = j + 32 * (((__int64)v12 - v9) >> 2);
    if ( v19 > v8 )
      v19 = *(_DWORD *)(a1 + 840);
    v10 = v19 - v6;
LABEL_20:
    if ( !v10 )
      break;
    v20 = v10 + v6;
    v36 = v10 + v6;
    if ( v6 < v10 + v6 )
    {
      v21 = 2LL * v6;
      v22 = (__int64 *)(a1 + 800);
      v23 = (__int64 *)(a1 + 800);
      while ( 1 )
      {
        if ( (++v35 & 0xF) == 0 )
        {
          v23 = v22;
          if ( a3 )
          {
            v23 = (__int64 *)(a1 + 800);
            if ( (unsigned int)SmWorkQueueGetDepth(
                                 *(_QWORD *)(a1 + 800),
                                 *(_BYTE *)(*(_QWORD *)(a1 + 800) + 6022LL) == 0) )
            {
              v30 = 1;
              v4 = 1;
              goto LABEL_40;
            }
          }
        }
        if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v6) == 8 )
        {
          v25 = *v23;
          if ( (*(_WORD *)(v21 + *(_QWORD *)(a1 + 1032)) & 0x1FFF) != 0 )
          {
            if ( SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(v25, v6)
              && SMKM_STORE<SM_TRAITS>::SmStMapRegion(v28, v6, 0, v29, 8) == 3 )
            {
LABEL_37:
              v4 = 1;
              v33 = 1;
              goto LABEL_32;
            }
          }
          else if ( (*(_BYTE *)(v25 + 6021) & 4) != 0 )
          {
            if ( (int)SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(v25, v6, v7 | 2u) < 0 )
              goto LABEL_37;
          }
          else
          {
            v26 = *(_QWORD *)(v25 + 6216);
            v27 = (void *)(*(_QWORD *)(v26 + 8LL * v6) & 0xFFFFFFFFFFFFFFF8uLL);
            MiFreePagesFromMdl((ULONG_PTR)v27, 0);
            ExFreePoolWithTag(v27, 0);
            *(_QWORD *)(v26 + 8LL * v6) = 0LL;
            v20 = v36;
            v7 = v34;
            v4 = v33;
          }
          ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, v6, 0LL);
        }
        else
        {
          ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, v24, 0LL);
          v23 = (__int64 *)(a1 + 800);
        }
LABEL_32:
        ++v6;
        v22 = (__int64 *)(a1 + 800);
        v21 += 2LL;
        if ( v6 >= v20 )
          goto LABEL_4;
      }
    }
  }
  v30 = 0;
  if ( a3 )
  {
LABEL_40:
    v31 = *(_WORD *)(a3 + 12) & 1;
    if ( v31 || v4 )
    {
      if ( v30 )
        *(_WORD *)(a3 + 14) |= 1u;
      if ( !v31 )
        ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a3);
    }
  }
  return 0LL;
}
