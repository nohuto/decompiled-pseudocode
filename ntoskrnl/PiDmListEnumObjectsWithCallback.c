/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x1406CFAD4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140746D28 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectConstraintList @ 0x1407776B0 (PiDmGetObjectConstraintList.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1407975D4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmListEnumObjectsWithCallback(
        int a1,
        __int64 *a2,
        __int64 (__fastcall *a3)(_QWORD, __int64, char *),
        __int64 a4)
{
  __int64 v5; // rdi
  int v6; // ebp
  _QWORD *Pool2; // r14
  int v8; // r12d
  __int64 v9; // r13
  bool v10; // si
  struct _KTHREAD *CurrentThread; // rax
  char *v12; // rbx
  unsigned int v13; // eax
  _QWORD *v14; // rdx
  volatile signed __int32 *v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // r15
  _QWORD *v18; // rsi
  __int64 (__fastcall *v19)(_QWORD, __int64, char *); // r12
  PVOID *v20; // rbx
  struct _KTHREAD *v22; // rax
  char *v23; // rax
  char v24; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall *v25)(_QWORD, __int64, char *); // [rsp+70h] [rbp+18h]
  __int64 v26; // [rsp+78h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v5 = 0LL;
  v24 = 0;
  v6 = 0;
  Pool2 = 0LL;
  v8 = 0;
  v9 = 5LL * a1;
  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  v12 = (char *)a2 + PiDmListDefs[5 * a1 + 1];
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)a2, 0LL);
  v13 = *((_DWORD *)v12 + 4);
  if ( v13 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * v13, 1517317712LL);
    if ( Pool2 )
    {
      v14 = *(_QWORD **)v12;
      if ( *(char **)v12 != v12 )
      {
        while ( (unsigned int)v5 < *((_DWORD *)v12 + 4) )
        {
          v15 = (volatile signed __int32 *)((char *)v14 - PiDmListDefs[v9 + 3]);
          Pool2[v5] = v15;
          _InterlockedAdd(v15 + 2, 1u);
          v14 = (_QWORD *)*v14;
          v5 = (unsigned int)(v5 + 1);
          if ( v14 == (_QWORD *)v12 )
            goto LABEL_6;
        }
        v10 = 1;
      }
LABEL_6:
      if ( (unsigned int)v5 < *((_DWORD *)v12 + 4) )
        v10 = 1;
    }
    else
    {
      v6 = -1073741670;
    }
  }
  else
  {
    v10 = *(_QWORD *)v12 != (_QWORD)v12;
  }
  ExReleasePushLockEx(a2, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 )
  {
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)a2, 0LL);
    v23 = *(char **)v12;
    while ( v23 != v12 )
    {
      v23 = *(char **)v23;
      ++v8;
    }
    *((_DWORD *)v12 + 4) = v8;
    ExReleasePushLockEx(a2, 0LL);
    KeLeaveCriticalRegion();
  }
  v16 = 0;
  if ( (_DWORD)v5 )
  {
    v17 = v26;
    v18 = Pool2;
    v19 = v25;
    do
    {
      v6 = v19(*v18, v17, &v24);
      if ( v6 < 0 )
        break;
      if ( v24 )
        break;
      ++v16;
      ++v18;
    }
    while ( v16 < (unsigned int)v5 );
  }
  if ( Pool2 )
  {
    if ( (_DWORD)v5 )
    {
      v20 = (PVOID *)Pool2;
      do
      {
        PiDmObjectRelease(*v20++);
        --v5;
      }
      while ( v5 );
    }
    ExFreePoolWithTag(Pool2, 0x5A706E50u);
  }
  return (unsigned int)v6;
}
