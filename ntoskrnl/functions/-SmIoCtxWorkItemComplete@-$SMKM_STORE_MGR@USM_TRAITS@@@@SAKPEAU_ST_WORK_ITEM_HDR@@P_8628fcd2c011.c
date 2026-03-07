__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(int *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rbx
  int v5; // r11d
  unsigned int v8; // esi
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r10d
  __int64 v13; // r14
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax

  v4 = (__int64 *)*((_QWORD *)a1 + 4);
  v5 = a3;
  v8 = 1;
  if ( (unsigned __int64)v4 <= 1 )
    v9 = 0LL;
  else
    v9 = *v4;
  v10 = *a1;
  v11 = *a1 & 7;
  v12 = *(_DWORD *)(a3 + 6016) & 0x3FF;
  if ( (v11 & 0xFFFFFFFD) != 0 )
  {
    v13 = 0LL;
    v14 = 0LL;
  }
  else
  {
    v13 = *((_QWORD *)a1 + 2);
    v14 = *(_DWORD *)(v13 + 40) >> 12;
    if ( (_DWORD)v11 == 2 )
    {
      v4[1] = 0LL;
      v10 = *a1;
    }
  }
  v15 = v10 & 7;
  if ( !v15 )
  {
    SMKM_STORE_MGR<SM_TRAITS>::SmProcessAddCompletion(a2, (_DWORD)a1, v14, v5, a4);
    goto LABEL_27;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( (a1[4] & 1) == 0 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(a2, (unsigned int *)a1 + 2, a1[3], v12);
      *(_DWORD *)v4 = 0;
      goto LABEL_27;
    }
    return 0;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v20 = a1[2];
    v11 = *((_QWORD *)a1 + 4);
    if ( (_BYTE)v20 )
    {
      *(_WORD *)(v11 + 8) = (unsigned __int8)v20;
      if ( (*(_BYTE *)(a2 + 1856) & 8) != 0 )
        a4 = 0;
    }
    *(_DWORD *)v11 = a4;
    if ( (*(_DWORD *)(a2 + 1856) & 0x10) != 0 )
      SmAcquireReleaseResAvailForRead(a2, (signed __int64)v4, v14, 1);
    goto LABEL_27;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    *(_DWORD *)v4 = a4;
    v4[1] = (unsigned int)a1[3];
    goto LABEL_27;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    if ( (a1[2] & 7) != 0 )
    {
LABEL_16:
      *(_DWORD *)v4 = a4;
      v4[1] = 0LL;
      goto LABEL_27;
    }
    return 0;
  }
  if ( v19 == 1 )
    goto LABEL_16;
LABEL_27:
  if ( v13 )
  {
    if ( (*(_BYTE *)(v13 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)v13, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( (*(_DWORD *)(a2 + 1856) & 2) != 0 )
      SmFpFree(a2 + 1544, 5, (__int64)v4, (struct _MDL *)v13);
  }
  if ( v9 )
    SmIoRequestComplete(v11, a1, v9, v4);
  return v8;
}
