void __fastcall CcAsyncReadWorker(_DWORD *StartContext)
{
  unsigned int v1; // eax
  unsigned int v2; // esi
  __int64 v3; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r13
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 *v12; // rax
  bool v13; // zf
  void *v14; // rax
  NTSTATUS v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rdi
  _QWORD *v19; // r8
  struct _SLIST_ENTRY *NextWorkQueueEntry; // rbx
  _SLIST_ENTRY *v21; // rcx
  _SLIST_ENTRY *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  _SLIST_ENTRY *v25; // rax
  __int64 *v26; // rdi
  _QWORD *v27; // rcx
  __int64 v28; // r14
  PSLIST_ENTRY v29; // rbx
  _SLIST_ENTRY *Next; // rcx
  unsigned int v31; // edx
  __int64 v32; // rcx
  unsigned int v33; // [rsp+40h] [rbp-C0h]
  __int64 *BugCheckParameter2; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  unsigned int v37; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v38; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  PVOID Object[3]; // [rsp+98h] [rbp-68h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v46[64]; // [rsp+110h] [rbp+10h] BYREF
  PSLIST_ENTRY ListEntry[64]; // [rsp+310h] [rbp+210h] BYREF

  if ( !StartContext )
    return;
  v1 = StartContext[10];
  v2 = 0;
  v3 = (unsigned int)StartContext[9];
  v5 = *((_QWORD *)StartContext + 7);
  v6 = *((_QWORD *)StartContext + 9);
  v7 = *((_QWORD *)StartContext + 8);
  v8 = 3;
  v38 = 0LL;
  v33 = v1;
  v37 = v3;
  v41 = v5;
  v36 = v6;
  memset(v46, 0, sizeof(v46));
  memset(ListEntry, 0, sizeof(ListEntry));
  v9 = *(_QWORD *)(v6 + 272);
  v10 = (unsigned int)v3;
  v42 = 3 * v3;
  v40 = v10;
  v11 = v9 + 24 * v3;
  v35 = v11;
  v12 = (__int64 *)(v7 + 1160);
  v39 = *(_QWORD *)(v6 + 280) + 404 * v10;
  if ( !CcEnablePerVolumeLazyWriter )
    v12 = (__int64 *)(v5 + 1224);
  v13 = *(_DWORD *)(v6 + 4) == 1;
  BugCheckParameter2 = v12;
  v14 = (void *)(v5 + 1304);
  Object[0] = (PVOID)v11;
  if ( !v13 )
    v14 = (void *)(v7 + 1176);
  Object[1] = v14;
LABEL_7:
  if ( v2 < 0x3F && *(_QWORD *)(*(_QWORD *)(v6 + 256) + 16 * v10) != *(_QWORD *)(v6 + 256) + 16 * v10 )
    goto LABEL_24;
  if ( v2 )
  {
    v16 = MmWaitMultipleForCacheManagerPrefetch((__int64)v46, v2, (void *)v11);
    if ( v16 < v2 )
    {
      v8 = 1;
      _mm_lfence();
      v28 = v16;
      v29 = ListEntry[v28];
      if ( v29 && (Next = v29[3].Next) != 0LL )
      {
        ExFreePoolWithTag(Next, 0x73416343u);
        LODWORD(v29[8].Next) = 6;
        v29[3].Next = 0LL;
        v46[v16] = 0LL;
        ListEntry[v16] = 0LL;
        if ( LODWORD(v29[1].Next[33].Next) == 1 && *((_DWORD *)&v29[2].Next + 2) <= 0x20000u )
        {
          CcCompleteAsyncRead((__int64)v29);
          CcFreeWorkQueueEntry(v29);
        }
        else
        {
          CcPostWorkQueueAsyncRead(v29, 0LL);
        }
        v31 = --v2;
        while ( v16 < v31 )
        {
          v46[v28++] = v46[++v16];
          v46[v28 + 63] = ListEntry[v16];
        }
        v32 = v39;
        v11 = v35;
        v6 = v36;
        v46[v16] = 0LL;
        ListEntry[v16] = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v32 + 4LL * v33));
        if ( !v35 )
        {
          v11 = *(_QWORD *)(v36 + 272) + 8 * v42;
          v35 = v11;
        }
      }
      else
      {
        v11 = v35;
        v6 = v36;
      }
      goto LABEL_52;
    }
LABEL_24:
    v8 = 0;
LABEL_25:
    ExAcquirePushLockExclusiveEx((ULONG_PTR)BugCheckParameter2, 0LL);
    v18 = 16 * v40;
    while ( 1 )
    {
      v19 = (_QWORD *)(v18 + *(_QWORD *)(v6 + 256));
      if ( (_QWORD *)*v19 == v19 )
      {
        v26 = BugCheckParameter2;
LABEL_38:
        ExReleasePushLockEx(v26, 0LL);
        v27 = (_QWORD *)v38;
        if ( v38 )
        {
          *(_DWORD *)(v39 + 4LL * *(unsigned int *)(v38 + 40)) = 0;
          *v27 = 0LL;
          ExQueueWorkItemToPartition(v27, 0, *(_DWORD *)(v6 + 24), *(_QWORD *)(v41 + 8));
          v38 = 0LL;
        }
LABEL_52:
        v10 = v40;
        if ( v33 && !v2 )
          return;
        goto LABEL_7;
      }
      if ( v2 >= 0x3F )
      {
        v26 = BugCheckParameter2;
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        CcShouldSpinAsyncReadWorkerThread(v41, (_QWORD *)v6, &v38, v37);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)BugCheckParameter2, 0LL);
        goto LABEL_38;
      }
      NextWorkQueueEntry = (struct _SLIST_ENTRY *)CcFindNextWorkQueueEntry(v17, v6, v19);
      ExReleasePushLockEx(BugCheckParameter2, 0LL);
      if ( !CcAsyncReadPrefetch((__int64)NextWorkQueueEntry) )
        goto LABEL_34;
      v21 = NextWorkQueueEntry[3].Next;
      v22 = v21->Next;
      if ( v21->Next )
      {
        v23 = v39;
        v24 = v2++;
        v46[v24] = v22;
        ListEntry[v24] = NextWorkQueueEntry;
        _InterlockedIncrement((volatile signed __int32 *)(v23 + 4LL * v33));
        v11 &= -(__int64)(v2 < 0x3F);
        v35 = v11;
        goto LABEL_35;
      }
      ExFreePoolWithTag(v21, 0x73416343u);
      v25 = NextWorkQueueEntry[1].Next;
      NextWorkQueueEntry[3].Next = 0LL;
      LODWORD(NextWorkQueueEntry[8].Next) = 6;
      if ( LODWORD(v25[33].Next) == 1 && *((_DWORD *)&NextWorkQueueEntry[2].Next + 2) <= 0x20000u )
      {
LABEL_34:
        CcCompleteAsyncRead((__int64)NextWorkQueueEntry);
        CcFreeWorkQueueEntry(NextWorkQueueEntry);
      }
      else
      {
        CcPostWorkQueueAsyncRead(NextWorkQueueEntry, 0LL);
      }
LABEL_35:
      ExAcquirePushLockExclusiveEx((ULONG_PTR)BugCheckParameter2, 0LL);
      v6 = v36;
    }
  }
  v15 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  if ( v15 )
  {
    if ( v15 == 1 )
      v8 = 2;
  }
  else
  {
    v8 = 0;
  }
  if ( !v8 )
    goto LABEL_25;
  if ( v8 == 1 )
    goto LABEL_52;
  v35 = v11;
  if ( v8 != 2 )
    goto LABEL_52;
  if ( !v33 )
  {
    ExFreePoolWithTag(StartContext, 0x71576343u);
    CcDereferencePartition(v41);
    if ( v7 )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)(v7 + 8)) <= -1 )
        __fastfail(0xEu);
    }
  }
}
