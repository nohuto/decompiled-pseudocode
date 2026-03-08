/*
 * XREFs of PiDmListAddObject @ 0x1406CBAD4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PiDmListInitEnumCallback @ 0x1407FE3D0 (PiDmListInitEnumCallback.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PiDmListAddObjectWorker @ 0x1406CD594 (PiDmListAddObjectWorker.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1406D045C (PiDmGetObjectManagerForObjectType.c)
 */

void __fastcall PiDmListAddObject(unsigned int a1, ULONG_PTR a2, __int64 *a3, __int64 a4)
{
  __int64 ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // r10
  __int64 v10; // rbx
  struct _KTHREAD *v11; // r8

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(unsigned int *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v10 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)a3, 0LL);
  PiDmListAddObjectWorker(a1, v10, a2, a3, a4);
  ExReleasePushLockEx(a3, 0LL);
  KeLeaveCriticalRegion();
  ExReleasePushLockEx((__int64 *)a2, 0LL);
  KeLeaveCriticalRegion();
}
