__int64 __fastcall DpiClaimPersistedMemoryBlock(struct _FDO_CONTEXT *a1, __int64 a2, const struct _GUID *a3)
{
  void *Pool2; // r15
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *v10; // r13
  int v11; // eax
  unsigned __int64 v12; // r14
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned int v18; // r11d
  unsigned int v19; // edx
  unsigned int v20; // r10d
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  unsigned int v23; // r11d
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rcx
  int v29; // eax
  unsigned int v31; // [rsp+30h] [rbp-58h] BYREF
  int v32; // [rsp+34h] [rbp-54h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-50h]
  _QWORD v34[2]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-38h]
  int v36; // [rsp+54h] [rbp-34h]
  void *v37; // [rsp+58h] [rbp-30h]
  unsigned int v39; // [rsp+A8h] [rbp+20h] BYREF

  v39 = 0;
  v32 = 0;
  v31 = 0;
  Pool2 = 0LL;
  KsrQueryMetadata(a3, a2, 0LL, 0LL, &v31);
  if ( !v31 )
    goto LABEL_4;
  Pool2 = (void *)ExAllocatePool2(256LL, v31, 1685221444LL);
  if ( !Pool2 )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    goto LABEL_4;
  }
  v9 = KsrQueryMetadata(a3, a2, Pool2, v31, &v31);
  v7 = v9;
  if ( v9 >= 0 )
  {
LABEL_4:
    v6 = KsrClaimPersistedMemory(a3, a2, 0LL, 0LL, 0, &v39);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 || !v39 )
    {
      v7 = -1073741811;
      v8 = -1073741811LL;
LABEL_8:
      WdLogSingleEntry1(2LL, v8);
      goto LABEL_47;
    }
    v10 = (_QWORD *)ExAllocatePool2(256LL, 8LL * v39, 1953656900LL);
    if ( !v10 )
    {
      v7 = -1073741801;
      v8 = -1073741801LL;
      goto LABEL_8;
    }
    v11 = KsrClaimPersistedMemory(a3, a2, v10, v39, 1, &v32);
    v7 = v11;
    if ( v11 < 0 || v39 != v32 )
    {
      v17 = v11;
      goto LABEL_45;
    }
    v12 = 0LL;
    v13 = 0LL;
    if ( !v39 )
      goto LABEL_43;
    do
    {
      v14 = v10[v13];
      v13 = (unsigned int)(v13 + 1);
      v12 += v14 >> 40 << 12;
    }
    while ( (unsigned int)v13 < v39 );
    if ( !v12 )
    {
LABEL_43:
      v7 = -1073741811;
      v17 = -1073741811LL;
      goto LABEL_45;
    }
    v15 = ExAllocatePool2(64LL, v12 + 48, a1 != 0LL ? 1953656900 : 1836216388);
    v16 = v15;
    if ( !v15 )
    {
      v17 = -1073741801LL;
      v7 = -1073741801;
LABEL_45:
      WdLogSingleEntry1(2LL, v17);
      goto LABEL_46;
    }
    v18 = v39;
    *(_QWORD *)v15 = 0LL;
    *(_QWORD *)(v15 + 32) = 0LL;
    *(_WORD *)(v15 + 8) = 8 * (((v12 + 4095) >> 12) + 6);
    *(_DWORD *)(v15 + 44) = 0;
    *(_DWORD *)(v15 + 40) = v12;
    *(_WORD *)(v15 + 10) = 2;
    if ( v18 )
    {
      v33 = 0;
      v19 = 0;
      if ( v7 >= 0 )
      {
        do
        {
          v20 = 0;
          v21 = v10[v19];
          v22 = v21 >> 40;
          if ( v21 >> 40 )
          {
            v23 = v33;
            v24 = v21 & 0xFFFFFFFFFFLL;
            v25 = 0LL;
            do
            {
              v26 = v25 + v24;
              ++v20;
              v27 = v23++;
              *(_QWORD *)(v16 + 8 * v27 + 48) = v26;
              v25 = v20;
            }
            while ( v20 < v22 );
            v33 = v23;
            v18 = v39;
          }
          ++v19;
        }
        while ( v19 < v18 );
      }
    }
    if ( a1 )
    {
      v34[0] = 0LL;
      v36 = 0;
      v35 = v31;
      v34[1] = v16;
      v37 = Pool2;
      v29 = DpiDxgkDdiRestoreMemoryForHotUpdate(a1, (const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *)v34);
      v7 = v29;
      if ( v29 >= 0 )
      {
LABEL_46:
        ExFreePoolWithTag(v10, 0);
LABEL_47:
        if ( !Pool2 )
          goto LABEL_49;
        goto LABEL_48;
      }
      WdLogSingleEntry1(2LL, v29);
    }
    else
    {
      if ( qword_1C013B9A0 )
      {
        v7 = -1073741823;
      }
      else
      {
        if ( (*(_BYTE *)(v16 + 10) & 5) != 0 )
          v28 = *(_QWORD **)(v16 + 24);
        else
          v28 = MmMapLockedPagesSpecifyCache((PMDL)v16, 0, MmCached, 0LL, 0, 0x40000010u);
        qword_1C013B9A0 = (__int64)v28;
        if ( v28 )
        {
          if ( *(unsigned int *)v28 <= v12 )
          {
            v28[2] = v16;
            v16 = 0LL;
          }
          else
          {
            v7 = -1073741811;
            MmUnmapLockedPages(v28, (PMDL)v16);
            qword_1C013B9A0 = 0LL;
          }
        }
        else
        {
          v7 = -1073741823;
          WdLogSingleEntry1(2LL, -1073741823LL);
        }
      }
      if ( !v16 )
        goto LABEL_46;
    }
    MmFreePagesFromMdl((PMDL)v16);
    ExFreePoolWithTag((PVOID)v16, 0);
    goto LABEL_46;
  }
  WdLogSingleEntry1(2LL, v9);
LABEL_48:
  ExFreePoolWithTag(Pool2, 0);
LABEL_49:
  if ( qword_1C013B9A0 )
    *(_DWORD *)(qword_1C013B9A0 + 24) = v7;
  return (unsigned int)v7;
}
