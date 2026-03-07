__int64 __fastcall ST_STORE<SM_TRAITS>::StGetStatsWorker(__int64 a1, int a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // r12d
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  ULONG v14; // eax
  __int64 v15; // r9
  _DWORD *v16; // rcx
  unsigned __int64 v17; // rdx
  ULONG v18; // eax
  __int64 v19; // r8
  _DWORD *v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 result; // rax
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // rdx
  _WORD *v26; // rcx
  unsigned __int64 v27; // rdx
  _WORD *v28; // r9
  int v29; // eax
  unsigned __int64 v30; // rdi
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  __int64 v33; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v34; // [rsp+78h] [rbp+20h]

  v34 = a4;
  v33 = 0LL;
  v4 = 0;
  if ( a2 >= 4 )
    return 3221225485LL;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v8 = 1536;
        break;
      case 2:
        v8 = ((a3 + 1537) & 0xFFFFFFFE) + 4 * *(_DWORD *)(a1 + 12) - a3;
        break;
      case 3:
        v23 = *(_DWORD *)(a1 + 12);
        v24 = *(_DWORD *)(a1 + 888) + 1;
        if ( v24 > 0x200 )
          v24 = 512;
        v4 = v23 * ((v24 + 7) >> 3);
        v8 = v4 + ((((a3 + 1537) & 0xFFFFFFFE) + 4 * v23 + 7) & 0xFFFFFFF8) - a3 + 12;
        break;
      default:
        v8 = -1;
        break;
    }
  }
  else
  {
    v8 = 188;
  }
  if ( *a4 < v8 )
  {
    *a4 = v8;
    return 3221225507LL;
  }
  else
  {
    *(_BYTE *)a3 = 11;
    *(_DWORD *)a3 ^= (*(_DWORD *)a3 ^ (a2 << 8)) & 0xF00;
    v9 = *(_DWORD *)a3 ^ ((unsigned __int16)*(_DWORD *)a3 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)a1 << 12)) & 0xF000;
    *(_DWORD *)a3 = v9;
    v10 = v9 ^ (v9 ^ (*(_DWORD *)a1 << 8)) & 0x10000;
    *(_DWORD *)a3 = v10;
    v11 = v10 ^ (v10 ^ (*(_DWORD *)a1 << 7)) & 0x20000;
    *(_DWORD *)a3 = v11;
    v12 = v11 ^ (v11 ^ (*(_DWORD *)(a1 + 4088) << 21)) & 0x3FFC0000;
    *(_DWORD *)a3 = v12;
    v13 = v12 ^ (*(_DWORD *)(a1 + 856) << 12);
    *(_DWORD *)(a3 + 4) = v8;
    *(_DWORD *)a3 = v12 ^ v13 & 0x40000000;
    *(_WORD *)(a3 + 8) = *(_WORD *)(a1 + 4032);
    *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a1 + 936) + *(_DWORD *)(a1 + 2872);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a3 + 24) = 16;
    memset((void *)(a3 + 28), 0, 0x50uLL);
    *(_DWORD *)(a3 + 28) = *(_DWORD *)(a1 + 936);
    *(_DWORD *)(a3 + 32) = *(_DWORD *)(a1 + 88);
    *(_DWORD *)(a3 + 36) = *(_DWORD *)(a1 + 152);
    v14 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 920));
    v15 = a1 + 80 - (a3 + 28);
    *(_DWORD *)(a3 + 40) = *(_DWORD *)(a1 + 920) - v14;
    v16 = (_DWORD *)(a3 + 44);
    v17 = (-(__int64)((unsigned __int8)*(_DWORD *)(a1 + 856) != 0) & 0xFFFFFFFFFFFFFFF9uLL) + 8;
    do
    {
      *v16 = *(_DWORD *)((char *)v16 + v15 + 1808);
      v16[1] = *(_DWORD *)((char *)v16 + v15 + 1812);
      v16 += 2;
      --v17;
    }
    while ( v17 );
    memset((void *)(a3 + 108), 0, 0x50uLL);
    *(_DWORD *)(a3 + 108) = *(_DWORD *)(a1 + 2872);
    *(_DWORD *)(a3 + 112) = *(_DWORD *)(a1 + 2024);
    v18 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 2856));
    v19 = a1 + 2016 - (a3 + 108);
    *(_DWORD *)(a3 + 120) = *(_DWORD *)(a1 + 2856) - v18;
    v20 = (_DWORD *)(a3 + 124);
    v21 = (-(__int64)((unsigned __int8)*(_DWORD *)(a1 + 2792) != 0) & 0xFFFFFFFFFFFFFFF9uLL) + 8;
    do
    {
      *v20 = *(_DWORD *)((char *)v20 + v19 + 1808);
      v20[1] = *(_DWORD *)((char *)v20 + v19 + 1812);
      v20 += 2;
      --v21;
    }
    while ( v21 );
    if ( !a2 )
      goto LABEL_10;
    ST_STORE<SM_TRAITS>::StCopyIoStats(a3 + 188, a1 + 4280);
    StLcBucketsCopy(a3 + 1472, v25, *(_QWORD *)(a1 + 5600), *(unsigned int *)(a1 + 5592));
    if ( a2 == 1 )
      goto LABEL_10;
    v26 = *(_WORD **)(a1 + 56);
    v27 = (a3 + 1537) & 0xFFFFFFFFFFFFFFFEuLL;
    v28 = &v26[*(unsigned int *)(a1 + 12)];
    while ( v26 < v28 )
    {
      *(_WORD *)v27 = *v26 & 0x1FFF;
      if ( *(_BYTE *)(a1 + 856) )
        LOBYTE(v29) = 0;
      else
        v29 = (unsigned __int16)*v26 >> 13;
      ++v26;
      *(_BYTE *)(v27 + 2) = v29;
      v27 += 4LL;
    }
    if ( a2 == 2 )
      goto LABEL_10;
    v30 = (((a3 + 1537) & 0xFFFFFFFFFFFFFFFEuLL) + 4LL * *(unsigned int *)(a3 + 20) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    memset((void *)(v30 + 12), 0, v4);
    v31 = *(_DWORD *)(a1 + 8) >> 9;
    if ( v31 <= 0x10 )
      v31 = 16;
    *(_DWORD *)(v30 + 8) = v31;
    v32 = v31 >> 4;
    result = ST_STORE<SM_TRAITS>::StDmGetStatsBitmap(a1 + 80, v32, v30 + 12, &v33);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)v30 = v33;
      result = ST_STORE<SM_TRAITS>::StDmGetStatsBitmap(a1 + 2016, v32, v30 + 12, &v33);
      if ( (int)result >= 0 )
      {
LABEL_10:
        *v34 = v8;
        return 0LL;
      }
    }
  }
  return result;
}
