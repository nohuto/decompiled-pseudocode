/*
 * XREFs of ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z @ 0x1C02D2434
 * Callers:
 *     DpiKsrRestore @ 0x1C02D32DC (DpiKsrRestore.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C02D33DC (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x1C02D28BC (-DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDAT.c)
 */

__int64 __fastcall DpiClaimPersistedMemoryBlock(struct _FDO_CONTEXT *a1, __int64 a2, const struct _GUID *a3)
{
  PVOID PoolWithTag; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // r15
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  struct _MDL *v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  struct _MDL *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r11
  __int64 v32; // rcx
  unsigned int i; // eax
  unsigned int v34; // r10d
  __int64 v35; // r8
  __int64 v36; // rdx
  _QWORD *MappedSystemVa; // rcx
  int v38; // eax
  __int64 v39; // rax
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v42[2]; // [rsp+38h] [rbp-28h] BYREF
  int v43; // [rsp+48h] [rbp-18h]
  int v44; // [rsp+4Ch] [rbp-14h]
  PVOID v45; // [rsp+50h] [rbp-10h]
  unsigned int v46; // [rsp+A8h] [rbp+48h] BYREF

  v46 = 0;
  NumberOfBytes = 0LL;
  PoolWithTag = 0LL;
  KsrQueryMetadata(a3, a2, 0LL, 0LL, &NumberOfBytes);
  if ( (_DWORD)NumberOfBytes )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64727044u);
    if ( PoolWithTag )
    {
      v14 = KsrQueryMetadata(a3, a2, PoolWithTag, (unsigned int)NumberOfBytes, &NumberOfBytes);
      v12 = v14;
      if ( v14 < 0 )
      {
        v13 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v13 + 24) = v12;
        goto LABEL_10;
      }
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v9 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v9);
    }
  }
  v10 = KsrClaimPersistedMemory(a3, a2, 0LL, 0LL, 0, &v46);
  v11 = v10 + 0x80000000;
  if ( (int)v11 >= 0 && v10 != -1073741789 || !v46 )
  {
    LODWORD(v12) = -1073741811;
    v13 = WdLogNewEntry5_WdError(v11, 0x80000000LL);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
LABEL_10:
    WdLogEvent5_WdError(v13);
    goto LABEL_48;
  }
  v19 = ExAllocatePoolWithTag(PagedPool, 8LL * v46, 0x74727044u);
  if ( !v19 )
  {
    LODWORD(v12) = -1073741801;
    v13 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v13 + 24) = -1073741801LL;
    goto LABEL_10;
  }
  v20 = KsrClaimPersistedMemory(a3, a2, v19, v46, 1, (char *)&NumberOfBytes + 4);
  v12 = v20;
  if ( v20 < 0 || v46 != HIDWORD(NumberOfBytes) )
  {
    v30 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v30 + 24) = v12;
    goto LABEL_46;
  }
  v23 = 0LL;
  v24 = 0LL;
  if ( !v46 )
    goto LABEL_44;
  do
  {
    if ( (int)v12 < 0 )
      break;
    v25 = (unsigned int)v24;
    v24 = (unsigned int)(v24 + 1);
    v22 = v19[v25] >> 40 << 12;
    v23 += v22;
  }
  while ( (unsigned int)v24 < v46 );
  if ( !v23 )
  {
LABEL_44:
    LODWORD(v12) = -1073741811;
    v30 = WdLogNewEntry5_WdError(v22, v24);
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    goto LABEL_46;
  }
  v26 = (struct _MDL *)ExAllocatePoolWithTag((POOL_TYPE)512, v23 + 48, a1 != 0LL ? 1953656900 : 1836216388);
  v29 = v26;
  if ( v26 )
  {
    v26->Next = 0LL;
    v31 = 0LL;
    v26->StartVa = 0LL;
    v26->ByteOffset = 0;
    v32 = 0LL;
    v26->ByteCount = v23;
    v26->Size = 8 * (((v23 + 4095) >> 12) + 6);
    v26->MdlFlags = 2;
    for ( i = v46; (unsigned int)v32 < i; v32 = (unsigned int)(v32 + 1) )
    {
      if ( (int)v12 < 0 )
        break;
      v27 = v19[v32];
      v34 = 0;
      if ( (v27 & 0xFFFFFF0000000000uLL) != 0 )
      {
        v35 = 0LL;
        do
        {
          ++v34;
          v36 = v35 + (v27 & 0xFFFFFFFFFFLL);
          v35 = v34;
          *((_QWORD *)&v29[1].Next + v31) = v36;
          v31 = (unsigned int)(v31 + 1);
          v27 = v19[v32];
        }
        while ( v34 < v27 >> 40 );
        i = v46;
      }
    }
    if ( a1 )
    {
      v43 = NumberOfBytes;
      v42[0] = 0LL;
      v44 = 0;
      v42[1] = v29;
      v45 = PoolWithTag;
      v38 = DpiDxgkDdiRestoreMemoryForHotUpdate(a1, (const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *)v42);
      v12 = v38;
      if ( v38 < 0 )
        goto LABEL_43;
    }
    else
    {
      if ( qword_1C00B3018 )
      {
        LODWORD(v12) = -1073741823;
        goto LABEL_40;
      }
      if ( (v29->MdlFlags & 5) != 0 )
        MappedSystemVa = v29->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v29, 0, MmCached, 0LL, 0, 0x40000010u);
      qword_1C00B3018 = (__int64)MappedSystemVa;
      if ( !MappedSystemVa )
      {
        v12 = -1073741823LL;
LABEL_43:
        v39 = WdLogNewEntry5_WdError(MappedSystemVa, v27);
        *(_QWORD *)(v39 + 24) = v12;
        WdLogEvent5_WdError(v39);
LABEL_40:
        if ( v29 )
        {
          MmFreePagesFromMdl(v29);
          ExFreePoolWithTag(v29, 0);
        }
        goto LABEL_47;
      }
      if ( *(unsigned int *)MappedSystemVa > v23 )
      {
        LODWORD(v12) = -1073741811;
        MmUnmapLockedPages(MappedSystemVa, v29);
        qword_1C00B3018 = 0LL;
        goto LABEL_40;
      }
      MappedSystemVa[2] = v29;
    }
    v29 = 0LL;
    goto LABEL_40;
  }
  LODWORD(v12) = -1073741801;
  v30 = WdLogNewEntry5_WdError(v28, v27);
  *(_QWORD *)(v30 + 24) = -1073741801LL;
LABEL_46:
  WdLogEvent5_WdError(v30);
LABEL_47:
  ExFreePoolWithTag(v19, 0);
LABEL_48:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( qword_1C00B3018 )
    *(_DWORD *)(qword_1C00B3018 + 24) = v12;
  return (unsigned int)v12;
}
