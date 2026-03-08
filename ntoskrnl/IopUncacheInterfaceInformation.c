/*
 * XREFs of IopUncacheInterfaceInformation @ 0x1406F75C8
 * Callers:
 *     PipProcessStartPhase1 @ 0x1406F7074 (PipProcessStartPhase1.c)
 *     IopDestroyDeviceNode @ 0x140782FD0 (IopDestroyDeviceNode.c)
 *     IopRemoveDevice @ 0x140866E38 (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KeReleaseSemaphore @ 0x140292210 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopUncacheInterfaceInformation(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rsi
  void *v11; // rbp
  __int64 v12; // rbp
  void *v13; // r12

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  if ( a1 )
    v5 = *(_QWORD **)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = v5 + 61;
  v7 = (_QWORD *)v5[61];
  while ( v7 != v6 )
  {
    v10 = v7[3];
    v11 = v7;
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD))(v10 + 24))(*(_QWORD *)(v10 + 8));
      ExFreePoolWithTag((PVOID)v10, 0);
    }
    v7 = (_QWORD *)*v7;
    ExFreePoolWithTag(v11, 0);
  }
  v8 = v5 + 63;
  v9 = (_QWORD *)v5[63];
  while ( v9 != v8 )
  {
    v12 = v9[3];
    v13 = v9;
    if ( v12 )
    {
      (*(void (__fastcall **)(_QWORD))(v12 + 24))(*(_QWORD *)(v12 + 8));
      ExFreePoolWithTag((PVOID)v12, 0);
    }
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v13, 0);
  }
  v5[62] = v5 + 61;
  *v6 = v6;
  v5[64] = v5 + 63;
  *v8 = v8;
  v5[65] = 0LL;
  if ( a2 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegion();
  }
}
