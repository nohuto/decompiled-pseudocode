/*
 * XREFs of PiDmListAddObject @ 0x1407353A4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406AE700 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x140744910 (IopRegisterDeviceInterface.c)
 *     PiDmListInitEnumCallback @ 0x140790380 (PiDmListInitEnumCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1406AFB70 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListAddObjectWorker @ 0x1407352C0 (PiDmListAddObjectWorker.c)
 */

_QWORD *__fastcall PiDmListAddObject(int a1, ULONG_PTR a2, ULONG_PTR a3, char *a4)
{
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // r10
  struct _ERESOURCE *v10; // rbx
  struct _KTHREAD *v11; // r8

  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v10 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockSharedEx(a3, 0LL);
  PiDmListAddObjectWorker(a1, v10, a2, a3, a4);
  ExReleasePushLockEx(a3, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExReleasePushLockEx(a2, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
