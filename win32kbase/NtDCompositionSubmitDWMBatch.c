__int64 __fastcall NtDCompositionSubmitDWMBatch(__int64 a1, __int64 a2, void *a3, int a4)
{
  int v6; // r12d
  __int64 v7; // rdi
  int v8; // ebp
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v10; // r14
  struct _ERESOURCE *v11; // rbx
  struct _RTL_GENERIC_TABLE *v12; // rcx
  __int64 v13; // rsi
  _QWORD *v14; // rax
  struct _ERESOURCE *v15; // rbx
  const struct DirectComposition::SynchronizationObject *v16; // r12
  struct DirectComposition::CBatch *v17; // rbx
  __int64 v18; // rcx
  int v19; // r13d
  struct _KEVENT *v20; // rcx
  PSLIST_ENTRY v21; // rsi
  __int64 i; // r14
  __int64 v23; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v24; // rsi
  __int64 v25; // rcx
  struct _ERESOURCE *v26; // rsi
  _QWORD *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  char v32; // al
  struct _ERESOURCE *v33; // rdi
  struct _ERESOURCE *v34; // rdi
  __int64 v35; // rsi
  struct _ERESOURCE *v36; // rdi
  struct _ERESOURCE *v37; // rcx
  __int64 v38; // rax
  union _SLIST_HEADER *v39; // rdi
  struct _ERESOURCE *v40; // rcx
  unsigned __int64 v42; // rax
  char v43; // cl
  struct DirectComposition::CBatch *v44; // rdi
  struct DirectComposition::CBatchSharedMemoryPool *v45; // [rsp+20h] [rbp-58h] BYREF
  PVOID Object; // [rsp+28h] [rbp-50h] BYREF
  struct DirectComposition::CBatch *v47; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-40h] BYREF
  int Buffer; // [rsp+40h] [rbp-38h] BYREF
  __int64 v50; // [rsp+44h] [rbp-34h]
  int v51; // [rsp+4Ch] [rbp-2Ch]

  v6 = a1;
  v7 = 0LL;
  v8 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process )
    return 3221225473LL;
  if ( !*CurrentProcessWin32Process )
    return 3221225473LL;
  v10 = CurrentProcessWin32Process[32];
  if ( !v10 )
    return 3221225473LL;
  v11 = *(struct _ERESOURCE **)(v10 + 8);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v11, 1u);
  v12 = *(struct _RTL_GENERIC_TABLE **)v10;
  Buffer = v6;
  v50 = 0LL;
  v13 = 0LL;
  v51 = 0;
  v14 = RtlLookupElementGenericTable(v12, &Buffer);
  if ( v14 && (v13 = v14[1]) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
  else
    v8 = -1073741790;
  ExReleaseResourceLite(*(PERESOURCE *)(v10 + 8));
  KeLeaveCriticalRegion();
  if ( v13 )
  {
    v15 = *(struct _ERESOURCE **)(v13 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v15, 1u);
    v7 = v13;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) == 2 )
  {
    v16 = 0LL;
    Object = 0LL;
    if ( a3 )
    {
      v8 = DirectComposition::SynchronizationObject::ResolveHandle(
             a3,
             1u,
             1,
             (struct DirectComposition::SynchronizationObject **)&Object);
      i = v7;
      if ( v8 < 0 )
      {
LABEL_41:
        if ( Object )
          ObfDereferenceObject(Object);
        (**(void (__fastcall ***)(__int64))i)(i);
        return (unsigned int)v8;
      }
      v16 = (const struct DirectComposition::SynchronizationObject *)Object;
    }
    if ( a4 )
      *(_BYTE *)(v7 + 240) |= 0x30u;
    ++*(_DWORD *)(v7 + 384);
    v17 = 0LL;
    v18 = *(_QWORD *)(v7 + 216);
    v19 = *(_DWORD *)(v7 + 384);
    v47 = 0LL;
    v45 = 0LL;
    v20 = *(struct _KEVENT **)(v18 + 8);
    v48 = 0LL;
    KeResetEvent(v20);
    v21 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + 192));
    for ( i = v7; v21; v21 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + 192)) )
    {
      --*(_DWORD *)(v7 + 228);
      v42 = *((_QWORD *)&v21[4].Next + 1);
      if ( v42 > *(_QWORD *)(v7 + 232) )
      {
        *(_BYTE *)(v7 + 240) |= 2u;
        *(_QWORD *)(v7 + 232) = v42;
      }
      DirectComposition::CBatch::Clear((DirectComposition::CBatch *)v21);
      v21->Next = *(struct _SLIST_ENTRY **)(v7 + 184);
      *(_QWORD *)(v7 + 184) = v21;
    }
    if ( *(_QWORD *)(v7 + 168) )
    {
      v17 = *(struct DirectComposition::CBatch **)(v7 + 168);
      *(_QWORD *)(v7 + 168) = 0LL;
    }
    else
    {
      while ( 1 )
      {
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
        if ( (int)DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(
                    (DirectComposition::CBatchSharedMemoryPoolSet *)(v7 + 2592),
                    v23 + 40,
                    &v45,
                    &v48) >= 0 )
          break;
        DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
          (DirectComposition::CApplicationChannel *)v7,
          0);
      }
      v24 = v45;
      if ( !v45 )
        goto LABEL_26;
      v25 = *((_QWORD *)v45 + 5);
      if ( (unsigned __int64)(4096 - v25) >= 0x28 )
        *((_QWORD *)v45 + 5) = v25 + 40;
      v17 = *(struct DirectComposition::CBatch **)(v7 + 184);
      if ( v17 )
      {
        *(_QWORD *)(v7 + 184) = *(_QWORD *)v17;
      }
      else
      {
        do
        {
          if ( (int)DirectComposition::CApplicationChannel::CreateBatch(
                      (DirectComposition::CApplicationChannel *)v7,
                      &v47) >= 0 )
          {
            v17 = v47;
            goto LABEL_22;
          }
        }
        while ( *(int *)(v7 + 228) <= 0
             || !DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
                   (DirectComposition::CApplicationChannel *)v7,
                   0) );
        v17 = *(struct DirectComposition::CBatch **)(v7 + 184);
        *(_QWORD *)(v7 + 184) = *(_QWORD *)v17;
      }
LABEL_22:
      if ( !v17 )
      {
        *((_BYTE *)v24 + 64) = 0;
        goto LABEL_26;
      }
      *((_QWORD *)v17 + 18) = v48;
      *((_QWORD *)v17 + 17) = v24;
    }
    if ( v17 )
    {
      *((_DWORD *)v17 + 4) = v19;
      *(_QWORD *)v17 = 0LL;
      ++*(_DWORD *)(v7 + 228);
      *(_BYTE *)(v7 + 240) |= 8u;
      v26 = *(struct _ERESOURCE **)(v7 + 368);
      if ( v26 )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v26, 1u);
        if ( ++*(_DWORD *)(v7 + 224) == 1 )
          KeResetEvent(*(PRKEVENT *)(*(_QWORD *)(v7 + 360) + 8LL));
        ExReleaseResourceLite(*(PERESOURCE *)(v7 + 368));
        KeLeaveCriticalRegion();
      }
    }
LABEL_26:
    v27 = 0LL;
    *((_BYTE *)v17 + 32) ^= (*((_BYTE *)v17 + 32) ^ ~(*(_BYTE *)(v7 + 48) >> 1)) & 1;
    *(_BYTE *)(v7 + 48) |= 2u;
    v28 = *((_QWORD *)v17 + 17);
    *((_DWORD *)v17 + 5) = 8;
    v29 = *(_QWORD *)(v28 + 40);
    if ( (unsigned __int64)(4096 - v29) >= 8 )
    {
      v30 = *(_QWORD *)(v28 + 56);
      *(_QWORD *)(v28 + 40) = v29 + 8;
      v31 = (_QWORD *)(v29 + v30);
      if ( v31 )
      {
        *((_QWORD *)v17 + 19) += 8LL;
        v27 = v31;
      }
    }
    *v27 = a2;
    *(_BYTE *)(*((_QWORD *)v17 + 17) + 64LL) = 0;
    v32 = *(_BYTE *)(v7 + 240);
    if ( (v32 & 0x10) != 0 )
    {
      v43 = *((_BYTE *)v17 + 32) | 8;
      *((_BYTE *)v17 + 32) = v43;
      if ( (v32 & 0x20) != 0 )
        *((_BYTE *)v17 + 32) = v43 | 0x10;
      *(_BYTE *)(v7 + 240) &= ~0x10u;
      *(_BYTE *)(v7 + 240) &= ~0x20u;
    }
    *((_QWORD *)v17 + 8) = 0LL;
    v33 = *(struct _ERESOURCE **)(*(_QWORD *)(v7 + 40) + 8LL);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v33, 1u);
    if ( v16 && !*((_BYTE *)v16 + 33) )
      DirectComposition::CBatch::SetSynchronizationObject(v17, v16);
    v34 = *(struct _ERESOURCE **)(i + 368);
    if ( v34 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v34, 1u);
    }
    if ( *(int *)(i + 24) <= 0 )
    {
      v35 = *(_QWORD *)(i + 40);
      v36 = *(struct _ERESOURCE **)(v35 + 8);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v36, 1u);
      v37 = *(struct _ERESOURCE **)(v35 + 8);
      if ( *(_DWORD *)(v35 + 148) )
      {
        ExReleaseResourceLite(v37);
        KeLeaveCriticalRegion();
        v38 = *(_QWORD *)v17;
        v39 = *(union _SLIST_HEADER **)(i + 40);
        *((_QWORD *)v17 + 3) = *(_QWORD *)v17;
        if ( v38 )
          *(_QWORD *)(v38 + 24) = v17;
        ExpInterlockedPushEntrySList(v39 + 6, (PSLIST_ENTRY)v17);
        KeSetEvent(*(PRKEVENT *)(v39[5].Alignment + 8), 1, 0);
LABEL_38:
        v40 = *(struct _ERESOURCE **)(i + 368);
        if ( v40 )
        {
          ExReleaseResourceLite(v40);
          KeLeaveCriticalRegion();
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(i + 40) + 8LL));
        KeLeaveCriticalRegion();
        goto LABEL_41;
      }
      ExReleaseResourceLite(v37);
      KeLeaveCriticalRegion();
    }
    if ( (*((_BYTE *)v17 + 32) & 1) != 0 )
      *(_BYTE *)(i + 48) &= ~2u;
    do
    {
      v44 = *(struct DirectComposition::CBatch **)v17;
      *(_QWORD *)v17 = 0LL;
      DirectComposition::CBatch::ReturnToApplication(v17, 0);
      v17 = v44;
    }
    while ( v44 );
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)i + 16LL))(i, 0LL);
    goto LABEL_38;
  }
  (**(void (__fastcall ***)(__int64))v7)(v7);
  return 3221225485LL;
}
