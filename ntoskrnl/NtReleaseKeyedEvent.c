/*
 * XREFs of NtReleaseKeyedEvent @ 0x140A01E50
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeReleaseSemaphore @ 0x140292210 (KeReleaseSemaphore.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtReleaseKeyedEvent(HANDLE Handle, struct _LIST_ENTRY *a2, BOOLEAN a3, LARGE_INTEGER *a4)
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
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY **p_Blink; // r15
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v18; // rcx
  struct _LIST_ENTRY *v19; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  LIST_ENTRY *v23; // rax
  struct _KTHREAD *v24; // rcx
  struct _LIST_ENTRY *v25; // rdx
  LARGE_INTEGER v26; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  void *InitialStack; // [rsp+48h] [rbp-60h]
  PVOID v29; // [rsp+50h] [rbp-58h]
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  KPROCESSOR_MODE WaitMode; // [rsp+B8h] [rbp+10h]
  LARGE_INTEGER *Timeout; // [rsp+C8h] [rbp+20h]

  Timeout = a4;
  v5 = 0;
  v26.QuadPart = 0LL;
  InitialStack = 0LL;
  v6 = 1;
  if ( ((unsigned __int8)a2 & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  WaitMode = PreviousMode;
  if ( a4 )
  {
    if ( PreviousMode && ((unsigned __int64)&a4[1] > 0x7FFFFFFF0000LL || &a4[1] < a4) )
      MEMORY[0x7FFFFFFF0000] = 0;
    v26 = *a4;
    Timeout = &v26;
  }
  if ( Handle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 2u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v5 = result;
    v10 = (char *)Object;
    v29 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v10 = (char *)ExpCritSecOutOfMemoryEvent;
    v29 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v11 = (unsigned __int64 *)&v10[24 * (((unsigned __int64)a2 >> 5) & 0x3F)];
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
LABEL_21:
    InitialStack = CurrentThread[1].InitialStack;
    CurrentThread[1].InitialStack = (void *)((unsigned __int64)a2 | 1);
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
      p_Blink = &Flink[-73].Blink;
      if ( Flink[2].Flink == a2 && p_Blink[68] == (struct _LIST_ENTRY *)Process )
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
    v5 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, a3, Timeout);
    if ( !v5 )
    {
LABEL_43:
      CurrentThread[1].InitialStack = InitialStack;
      goto LABEL_44;
    }
    --CurrentThread->KernelApcDisable;
    v21 = KeAbPreAcquire((__int64)v11, 0LL);
    v22 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v21, (__int64)v11);
    if ( v22 )
      *(_BYTE *)(v22 + 18) = 1;
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
  KeReleaseSemaphore((PRKSEMAPHORE)(p_Blink + 155), 1, 1, 0);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
LABEL_44:
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( Handle )
    ObfDereferenceObject(v29);
  return v5;
}
