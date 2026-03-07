__int64 __fastcall EtwpReceiveNotification(void *a1, unsigned int a2, char a3, _DWORD *a4)
{
  int v4; // esi
  struct _LIST_ENTRY *Flink; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // rbx
  char *p_Blink; // r14
  char *v13; // rdi
  char *v14; // rdx
  void **v15; // rax
  __int64 v16; // rbp
  char *v17; // r12
  signed __int32 v18; // ebx
  char *v20; // rax

  v4 = 0;
  Flink = KeGetCurrentThread()->ApcState.Process[1].ReadyListHead.Flink;
  if ( !Flink )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  v11 = (__int64 *)&Flink[1];
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Flink[1], 0LL);
  p_Blink = (char *)&Flink[1].Blink;
  v13 = *(char **)p_Blink;
  if ( *(char **)p_Blink == p_Blink )
  {
LABEL_15:
    ExReleasePushLockEx(v11, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)-2147483622;
  }
  while ( 1 )
  {
    v14 = *(char **)v13;
    if ( a3 == (*(_BYTE *)(*((_QWORD *)v13 + 3) + 99LL) & 1) )
      break;
    v13 = *(char **)v13;
    if ( v14 == p_Blink )
      goto LABEL_15;
  }
  if ( *((char **)v14 + 1) != v13 )
    goto LABEL_19;
  v15 = (void **)*((_QWORD *)v13 + 1);
  if ( *v15 != v13 )
    goto LABEL_19;
  *v15 = v14;
  *((_QWORD *)v14 + 1) = v15;
  v16 = *((_QWORD *)v13 + 2);
  if ( *(_DWORD *)(v16 + 4) <= a2 )
    goto LABEL_7;
  v20 = *(char **)p_Blink;
  if ( *(char **)(*(_QWORD *)p_Blink + 8LL) != p_Blink )
LABEL_19:
    __fastfail(3u);
  *(_QWORD *)v13 = v20;
  v4 = -1073741789;
  *((_QWORD *)v13 + 1) = p_Blink;
  *((_QWORD *)v20 + 1) = v13;
  *(_QWORD *)p_Blink = v13;
LABEL_7:
  v17 = *(char **)p_Blink;
  *a4 = *(_DWORD *)(v16 + 4);
  ExReleasePushLockEx(v11, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v18 = _InterlockedIncrement((volatile signed __int32 *)(v16 + 20));
    memmove(a1, (const void *)v16, *(unsigned int *)(v16 + 4));
    *((_QWORD *)a1 + 3) = 0LL;
    *((_DWORD *)a1 + 5) = v18;
    *((_DWORD *)a1 + 6) = *((unsigned __int16 *)v13 + 24);
    if ( *(_BYTE *)(v16 + 12) )
      *((_DWORD *)a1 + 4) = *((unsigned __int16 *)v13 + 25);
    EtwpUnreferenceDataBlock(v16);
    EtwpReleaseQueueEntry(v13);
    if ( v17 != p_Blink )
      return 261;
  }
  return (unsigned int)v4;
}
