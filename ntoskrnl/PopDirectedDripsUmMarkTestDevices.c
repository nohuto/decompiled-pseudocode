/*
 * XREFs of PopDirectedDripsUmMarkTestDevices @ 0x14099C874
 * Callers:
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140980630 (PopDirectedDripsIdleResiliencyCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     RtlLookupElementGenericTableAvl @ 0x140245A20 (RtlLookupElementGenericTableAvl.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     PopDirectedDripsNotify @ 0x140872AF4 (PopDirectedDripsNotify.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140951CA0 (IoLockUnlockPnpDeviceTree.c)
 *     PopDirectedDripsMarkCandidateDevice @ 0x1409809AC (PopDirectedDripsMarkCandidateDevice.c)
 */

void PopDirectedDripsUmMarkTestDevices()
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx
  _QWORD *i; // rax
  _QWORD *v5; // rax
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
  v0 = PopDirectedDripsUmTestDeviceCount;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, v0, v0);
  }
  while ( v1 != v0 );
  if ( v0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopDirectedDripsUmLock, 0LL);
    v8 = PopWnfCsEnterScenarioId;
    PopDirectedDripsNotify(PopDirectedDripsUmTestPermissive != 0 ? 4 : 2, (char *)&v8);
    IoLockUnlockPnpDeviceTree(1);
    v3 = IopRootDeviceNode;
    for ( i = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (_QWORD *)i[1] )
      v3 = i;
    while ( v3 != IopRootDeviceNode )
    {
      if ( v3[10] )
      {
        Buffer[1] = *((unsigned __int16 *)v3 + 20) >> 1;
        v7 = v3[6];
        Buffer[0] = 1;
        if ( RtlLookupElementGenericTableAvl(&PopDirectedDripsUmTestDeviceTable, Buffer) )
          PopDirectedDripsMarkCandidateDevice(v3[10]);
      }
      v5 = (_QWORD *)*v3;
      if ( *v3 )
      {
        do
        {
          v3 = v5;
          v5 = (_QWORD *)v5[1];
        }
        while ( v5 );
      }
      else
      {
        v3 = (_QWORD *)v3[2];
      }
    }
    IoLockUnlockPnpDeviceTree(0);
    PopDirectedDripsNotify(PopDirectedDripsUmTestPermissive != 0 ? 5 : 3, (char *)&v8);
    PopReleaseRwLock((ULONG_PTR)&PopDirectedDripsUmLock);
  }
}
