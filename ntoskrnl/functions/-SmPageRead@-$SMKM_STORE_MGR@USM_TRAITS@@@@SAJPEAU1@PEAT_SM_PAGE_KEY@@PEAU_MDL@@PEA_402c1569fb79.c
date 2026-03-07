__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        _SLIST_ENTRY *a4,
        _SLIST_ENTRY *a5)
{
  _SLIST_ENTRY *v5; // r14
  unsigned __int64 v6; // r12
  unsigned int v8; // ebx
  unsigned int v9; // esi
  _SLIST_ENTRY *v10; // r15
  int PickStore; // eax
  __int64 v12; // r13
  unsigned int v13; // edi
  char v14; // di
  PSLIST_ENTRY Pool2; // rsi
  bool v16; // zf
  struct _EX_RUNDOWN_REF *v17; // rax
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+18h] BYREF
  int v22; // [rsp+98h] [rbp+20h] BYREF

  v5 = a5;
  v22 = 0;
  v6 = a3;
  v19 = 0LL;
  v8 = 0;
  if ( (a3 & 3) != 0 )
  {
    v6 = a3 & 0xFFFFFFFFFFFFFFFCuLL;
    v8 = a3 & 1 | 2;
    if ( (a3 & 2) == 0 )
      v8 = a3 & 1;
  }
  *((_QWORD *)&a5->Next + 1) = 0LL;
  v5->Next = a4;
  v9 = *(_DWORD *)(v6 + 40) >> 12;
  LODWORD(a5) = v9;
  v10 = v5;
  v21 = v9;
  PickStore = SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
                a1,
                (_DWORD)a2,
                (unsigned int)&v21,
                (unsigned int)&v19,
                (__int64)&v22);
  v12 = v19;
  v13 = PickStore;
  if ( PickStore >= 0 )
  {
    v14 = v21;
    *((_QWORD *)&v5->Next + 1) = v21;
    if ( v8 >= 2 && !*(_BYTE *)(v12 + 6020) )
    {
      v13 = -1073741791;
      goto LABEL_27;
    }
    if ( (*(_DWORD *)(a1 + 1856) & 0x10) != 0 )
    {
      v8 |= 8 * (SmAcquireReleaseResAvailForRead(a1, v5, v9, 0LL) & 1);
      if ( v8 < 8 )
      {
        v13 = -1073741670;
        goto LABEL_27;
      }
      LOBYTE(v8) = v8 | 4;
    }
    if ( (v8 & 1) != 0 )
    {
      Pool2 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1248));
      if ( Pool2 )
        goto LABEL_18;
      Pool2 = (PSLIST_ENTRY)ExAllocatePool2(64LL, 88LL, 1633119603LL);
      if ( Pool2 )
        goto LABEL_18;
      LOBYTE(v8) = v8 & 0xFE;
    }
    Pool2 = (PSLIST_ENTRY)SmFpAllocate((PEX_SPIN_LOCK)(a1 + 1544), *(_DWORD *)(a1 + 1856) & 1);
    if ( !Pool2 )
    {
      v13 = -1073741670;
LABEL_26:
      v9 = (unsigned int)a5;
      goto LABEL_27;
    }
LABEL_18:
    v16 = (v22 & 1) == 0;
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    *((_DWORD *)&Pool2[1].Next + 2) = *a2;
    LODWORD(Pool2->Next) = 2;
    Pool2[1].Next = (_SLIST_ENTRY *)v6;
    *((_BYTE *)&Pool2->Next + 8) = v14;
    Pool2[2].Next = v5;
    if ( !v16 )
      *((_DWORD *)&Pool2->Next + 2) |= 0x1000000u;
    if ( (v8 & 1) != 0 )
      *((_DWORD *)&Pool2->Next + 2) |= 0x4000000u;
    if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v5, a1, *(_DWORD *)(v12 + 6016) & 0x3FF, Pool2) < 0 )
    {
      v13 = -1073741670;
      SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a1, Pool2, v5);
      v10 = v5;
    }
    else
    {
      v10 = 0LL;
      LOBYTE(v8) = -5;
      v12 = 0LL;
      v13 = 259;
    }
    goto LABEL_26;
  }
LABEL_27:
  if ( v12 )
  {
    v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v12 + 6016) & 0x3FF);
    ExReleaseRundownProtection_0(v17 + 1);
  }
  if ( (v8 & 4) != 0 )
    SmAcquireReleaseResAvailForRead(a1, v10, v9, 1LL);
  if ( v10 )
  {
    *v5 = 0LL;
    LODWORD(v5->Next) = v13;
  }
  return v13;
}
