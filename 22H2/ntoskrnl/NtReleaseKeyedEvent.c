/*
 * XREFs of NtReleaseKeyedEvent @ 0x14095B290
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeReleaseSemaphore @ 0x1402F19A0 (KeReleaseSemaphore.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReleaseKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS v5; // r12d
  char v6; // r15
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  char *v10; // rcx
  unsigned __int64 *v11; // rsi
  struct _LIST_ENTRY *v12; // r14
  __int64 v13; // rax
  __int64 v14; // r13
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY **p_Blink; // r13
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v18; // rcx
  struct _LIST_ENTRY *v19; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v21; // rax
  __int64 v22; // r14
  LIST_ENTRY *v23; // rax
  struct _KTHREAD *v24; // rcx
  struct _LIST_ENTRY *v25; // rdx
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  LONGLONG QuadPart; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  void *InitialStack; // [rsp+48h] [rbp-60h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-58h]
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER *Timeouta; // [rsp+C8h] [rbp+20h]

  Timeouta = Timeout;
  v5 = 0;
  QuadPart = 0LL;
  InitialStack = 0LL;
  v6 = 1;
  if ( ((unsigned __int8)KeyValue & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  WaitMode = PreviousMode;
  if ( Timeout )
  {
    if ( PreviousMode && ((unsigned __int64)&Timeout[1] > 0x7FFFFFFF0000LL || &Timeout[1] < Timeout) )
      MEMORY[0x7FFFFFFF0000] = 0;
    QuadPart = Timeout->QuadPart;
    Timeouta = (LARGE_INTEGER *)&QuadPart;
  }
  if ( KeyedEventHandle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(KeyedEventHandle, 2u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v5 = result;
    v10 = (char *)Object;
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v10 = (char *)ExpCritSecOutOfMemoryEvent;
    DmaAdapter = (PADAPTER_OBJECT)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v11 = (unsigned __int64 *)&v10[24 * (((unsigned __int64)KeyValue >> 5) & 0x3F)];
  v12 = (struct _LIST_ENTRY *)(v11 + 1);
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx(v11, v13, (ULONG_PTR)v11);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  Flink = v12->Flink;
  if ( v12->Flink == v12 )
  {
LABEL_21:
    InitialStack = CurrentThread[1].InitialStack;
    CurrentThread[1].InitialStack = (void *)((unsigned __int64)KeyValue | 1);
    p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
    v18 = v12->Flink;
    if ( v12->Flink->Blink != v12 )
      goto LABEL_47;
    p_WaitListHead->Flink = v18;
    CurrentThread[1].Header.WaitListHead.Blink = v12;
    v18->Blink = p_WaitListHead;
    v12->Flink = p_WaitListHead;
    p_Blink = 0LL;
  }
  else
  {
    while ( 1 )
    {
      p_Blink = &Flink[-68].Blink;
      if ( Flink[2].Flink == KeyValue && p_Blink[68] == (struct _LIST_ENTRY *)Process )
        break;
      Flink = Flink->Flink;
      if ( Flink == v12 )
        goto LABEL_21;
    }
    v19 = Flink->Flink;
    Blink = Flink->Blink;
    if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
      goto LABEL_47;
    Blink->Flink = v19;
    v19->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v11);
  KeAbPostRelease((ULONG_PTR)v11);
  if ( !p_Blink )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v5 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, Alertable, Timeouta);
    if ( !v5 )
    {
LABEL_43:
      CurrentThread[1].InitialStack = InitialStack;
      goto LABEL_44;
    }
    --CurrentThread->KernelApcDisable;
    v21 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0);
    v22 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v21, (ULONG_PTR)v11);
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
    v23 = &CurrentThread[1].Header.WaitListHead;
    v24 = (struct _KTHREAD *)CurrentThread[1].Header.WaitListHead.Flink;
    if ( v24 == (struct _KTHREAD *)&CurrentThread[1].Header.WaitListHead )
    {
LABEL_39:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v6 )
        v5 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
      goto LABEL_43;
    }
    v25 = CurrentThread[1].Header.WaitListHead.Blink;
    if ( v24->Header.WaitListHead.Flink == v23 && v25->Flink == v23 )
    {
      v25->Flink = (struct _LIST_ENTRY *)v24;
      v24->Header.WaitListHead.Flink = v25;
      CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
      v23->Flink = v23;
      v6 = 0;
      goto LABEL_39;
    }
LABEL_47:
    __fastfail(3u);
  }
  KeReleaseSemaphore((PRKSEMAPHORE)(p_Blink + 145), 1, 1, 0);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
LABEL_44:
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( KeyedEventHandle )
    HalPutDmaAdapter(DmaAdapter);
  return v5;
}
