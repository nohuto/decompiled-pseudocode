/*
 * XREFs of PopUpdateWakeSourceWorker @ 0x14056F420
 * Callers:
 *     <none>
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x14024566C (IoControlPnpDeviceActionQueue.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PopWakeInfoDereference @ 0x14038BB68 (PopWakeInfoDereference.c)
 *     PopReleaseWakeSourceSpinLock @ 0x14038BE64 (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14038BE98 (PopAcquireWakeSourceSpinLock.c)
 *     PopFreeWakeSource @ 0x1408E6BF8 (PopFreeWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x1408E6CC4 (PopProcessWakeSourceWork.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

PVOID *PopUpdateWakeSourceWorker()
{
  PVOID v0; // rbx
  __int64 v1; // rdi
  int v2; // esi
  PVOID ***v3; // rdx
  PVOID **v4; // rax
  PVOID **v5; // rax
  PVOID *v6; // rcx
  PVOID **v7; // rdx
  PVOID *v8; // rcx
  struct _KEVENT *v9; // rcx
  _QWORD *v10; // rax
  PVOID *v11; // rcx
  PVOID v12; // rcx
  PVOID *result; // rax
  __int64 v14; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  PVOID **v18; // [rsp+78h] [rbp+28h] BYREF
  PVOID **v19; // [rsp+80h] [rbp+30h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  p_P = &P;
  P = &P;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PopAcquireWakeSourceSpinLock(&LockHandle);
  while ( 1 )
  {
    v0 = PopWakeSourceWorkList;
    if ( PopWakeSourceWorkList == &PopWakeSourceWorkList )
      break;
    PopReleaseWakeSourceSpinLock(&LockHandle);
    v1 = *((_QWORD *)v0 + 3);
    IoControlPnpDeviceActionQueue(1);
    v2 = PopProcessWakeSourceWork(v0, &v18, &v19);
    IoControlPnpDeviceActionQueue(0);
    ObfDereferenceObjectWithTag(*((PVOID *)v0 + 2), 0x67446F50u);
    PopAcquireWakeSourceSpinLock(&LockHandle);
    if ( (v1 == PopCurrentWakeInfo || v1 == PopPendingWakeInfo) && v2 >= 0 )
    {
      v3 = *(PVOID ****)(v1 + 32);
      if ( *v3 != (PVOID **)(v1 + 24) )
        goto LABEL_25;
      v4 = v18;
      v18 = 0LL;
      *v4 = (PVOID *)(v1 + 24);
      v4[1] = (PVOID *)v3;
      *v3 = v4;
      *(_QWORD *)(v1 + 32) = v4;
      ++*(_DWORD *)(v1 + 40);
      v5 = v19;
      if ( !v19 )
        goto LABEL_15;
      v6 = *v19;
      if ( (*v19)[1] != v19 )
        goto LABEL_25;
      v7 = (PVOID **)v19[1];
      if ( *v7 != (PVOID *)v19 )
        goto LABEL_25;
      *v7 = v6;
      v6[1] = v7;
      --*(_DWORD *)(v1 + 40);
      v18 = v5;
    }
    else
    {
      v5 = v18;
    }
    if ( v5 )
    {
      v8 = p_P;
      if ( *p_P != &P )
        goto LABEL_25;
      v5[1] = p_P;
      *v5 = &P;
      *v8 = v5;
      p_P = (PVOID *)v5;
    }
LABEL_15:
    PopWakeInfoDereference(v1);
    v9 = (struct _KEVENT *)*((_QWORD *)v0 + 4);
    if ( v9 )
      KeSetEvent(v9, 0, 0);
    v10 = *(_QWORD **)v0;
    if ( *(PVOID *)(*(_QWORD *)v0 + 8LL) != v0 || (v11 = (PVOID *)*((_QWORD *)v0 + 1), *v11 != v0) )
LABEL_25:
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v0, 0x206D654Du);
  }
  PopWakeSourceWorkInProgress = 0;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  while ( 1 )
  {
    v12 = P;
    result = &P;
    if ( P == &P )
      return result;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_25;
    v14 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_25;
    P = *(PVOID *)P;
    *(_QWORD *)(v14 + 8) = &P;
    PopFreeWakeSource(v12);
  }
}
