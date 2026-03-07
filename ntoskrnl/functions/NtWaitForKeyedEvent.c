NTSTATUS __fastcall NtWaitForKeyedEvent(HANDLE Handle, unsigned __int64 a2, BOOLEAN a3, LARGE_INTEGER *a4)
{
  NTSTATUS v5; // r12d
  char v6; // r14
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  char *v10; // rcx
  unsigned __int64 *v11; // rsi
  struct _LIST_ENTRY *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY **p_Blink; // r15
  struct _LIST_ENTRY *v17; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r15
  LIST_ENTRY *v22; // rax
  struct _KTHREAD *v23; // rcx
  struct _LIST_ENTRY *v24; // rdx
  struct _LIST_ENTRY *v25; // rdx
  struct _LIST_ENTRY *Blink; // rax
  LARGE_INTEGER v27; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  void *InitialStack; // [rsp+48h] [rbp-60h]
  PVOID v30; // [rsp+50h] [rbp-58h]
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  KPROCESSOR_MODE WaitMode; // [rsp+B8h] [rbp+10h]
  LARGE_INTEGER *Timeout; // [rsp+C8h] [rbp+20h]

  Timeout = a4;
  v5 = 0;
  v27.QuadPart = 0LL;
  InitialStack = 0LL;
  v6 = 1;
  if ( (a2 & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  WaitMode = PreviousMode;
  if ( a4 )
  {
    if ( PreviousMode && ((unsigned __int64)&a4[1] > 0x7FFFFFFF0000LL || &a4[1] < a4) )
      MEMORY[0x7FFFFFFF0000] = 0;
    v27 = *a4;
    Timeout = &v27;
  }
  if ( Handle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 1u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v5 = result;
    v10 = (char *)Object;
    v30 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v10 = (char *)ExpCritSecOutOfMemoryEvent;
    v30 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v11 = (unsigned __int64 *)&v10[24 * ((a2 >> 5) & 0x3F)];
  v12 = (struct _LIST_ENTRY *)(v11 + 1);
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire((__int64)v11, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx(v11, v13, (__int64)v11);
  if ( v14 )
    *(_BYTE *)(v14 + 18) = 1;
  Flink = v12->Flink;
  if ( v12->Flink == v12 )
  {
LABEL_22:
    InitialStack = CurrentThread[1].InitialStack;
    CurrentThread[1].InitialStack = (void *)a2;
    p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
    v19 = (struct _LIST_ENTRY *)v11[2];
    if ( v19->Flink != v12 )
      goto LABEL_48;
    p_WaitListHead->Flink = v12;
    CurrentThread[1].Header.WaitListHead.Blink = v19;
    v19->Flink = p_WaitListHead;
    v11[2] = (unsigned __int64)p_WaitListHead;
    p_Blink = 0LL;
  }
  else
  {
    while ( 1 )
    {
      p_Blink = &Flink[-73].Blink;
      v17 = Flink[2].Flink;
      if ( ((unsigned __int8)v17 & 1) == 0 )
        goto LABEL_22;
      if ( v17 == (struct _LIST_ENTRY *)(a2 | 1) && p_Blink[68] == (struct _LIST_ENTRY *)Process )
        break;
      Flink = Flink->Flink;
      if ( Flink == v12 )
        goto LABEL_22;
    }
    v25 = Flink->Flink;
    Blink = Flink->Blink;
    if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
      goto LABEL_48;
    Blink->Flink = v25;
    v25->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v11);
  KeAbPostRelease((ULONG_PTR)v11);
  if ( p_Blink )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(p_Blink + 155), 1, 1, 0);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_45;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v5 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, a3, Timeout);
  if ( v5 )
  {
    --CurrentThread->KernelApcDisable;
    v20 = KeAbPreAcquire((__int64)v11, 0LL);
    v21 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v20, (__int64)v11);
    if ( v21 )
      *(_BYTE *)(v21 + 18) = 1;
    v22 = &CurrentThread[1].Header.WaitListHead;
    v23 = (struct _KTHREAD *)CurrentThread[1].Header.WaitListHead.Flink;
    if ( v23 == (struct _KTHREAD *)&CurrentThread[1].Header.WaitListHead )
      goto LABEL_36;
    v24 = CurrentThread[1].Header.WaitListHead.Blink;
    if ( v23->Header.WaitListHead.Flink == v22 && v24->Flink == v22 )
    {
      v24->Flink = (struct _LIST_ENTRY *)v23;
      v23->Header.WaitListHead.Flink = v24;
      CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
      v22->Flink = v22;
      v6 = 0;
LABEL_36:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v6 )
        v5 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
      goto LABEL_40;
    }
LABEL_48:
    __fastfail(3u);
  }
LABEL_40:
  CurrentThread[1].InitialStack = InitialStack;
LABEL_45:
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( Handle )
    ObfDereferenceObject(v30);
  return v5;
}
