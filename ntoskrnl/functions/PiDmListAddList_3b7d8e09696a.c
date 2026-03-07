void __fastcall PiDmListAddList(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 *v5; // rdi
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  unsigned __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _ERESOURCE *v9; // rbp
  _QWORD **v10; // r15
  struct _KTHREAD *v11; // rax
  _QWORD *i; // r14
  struct _KTHREAD *v13; // rax
  struct _KTHREAD *v14; // rax

  v5 = (__int64 *)a2;
  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v9 = ObjectManagerForObjectType;
  v10 = (_QWORD **)(v7 + 88);
  if ( (unsigned __int64)v5 >= v7 )
  {
    --CurrentThread->KernelApcDisable;
    if ( (unsigned __int64)v5 > v7 )
    {
      ExAcquirePushLockSharedEx((ULONG_PTR)a4, 0LL);
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
  }
  else
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)a4, 0LL);
  }
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    PiDmListAddObjectWorker(2, v9, (__int64)v5, (__int64)(i - 8), 0LL);
    ExReleasePushLockEx(i - 8, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v5 >= a4 )
  {
    if ( v5 > a4 )
    {
      ExReleasePushLockEx(v5, 0LL);
      KeLeaveCriticalRegion();
      v5 = a4;
    }
  }
  else
  {
    ExReleasePushLockEx(a4, 0LL);
    KeLeaveCriticalRegion();
  }
  ExReleasePushLockEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
