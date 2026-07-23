/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x14068AC60
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ExpWnfCreateProcessContext @ 0x14068AD34 (ExpWnfCreateProcessContext.c)
 */

NTSTATUS __cdecl NtSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v4; // rdi
  int v5; // ebx
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = Process[1].EndPadding[7];
  v4 = v7;
  if ( !v7 )
  {
    v5 = ExpWnfCreateProcessContext(Process, &v7);
    if ( v5 < 0 )
      goto LABEL_5;
    v4 = v7;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(NotificationEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 128), (signed __int64)Object, 0LL) )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      v5 = -1073740008;
    }
    else
    {
      v5 = 0;
    }
  }
LABEL_5:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
