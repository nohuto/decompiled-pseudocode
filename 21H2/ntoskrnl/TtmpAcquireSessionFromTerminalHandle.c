/*
 * XREFs of TtmpAcquireSessionFromTerminalHandle @ 0x140900A94
 * Callers:
 *     TtmpDispatchAssignDevice @ 0x140900BF4 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x140900C9C (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x140900DD4 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x140900EC4 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1409010D4 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x140901190 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14090123C (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1409012F0 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1409013AC (TtmpDispatchSetInputWakeCapability.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 */

__int64 __fastcall TtmpAcquireSessionFromTerminalHandle(void *a1, char a2, char a3, _QWORD *a4, __int64 *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  struct _OBJECT_TYPE *v11; // r8
  NTSTATUS v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // edi
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdx

  CurrentThread = KeGetCurrentThread();
  v7 = a5;
  *a4 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v11 = TtmpTerminalObjectType;
  *v7 = 0LL;
  a5 = 0LL;
  v12 = ObReferenceObjectByHandle(a1, 2u, v11, PreviousMode, (PVOID *)&a5, 0LL);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v13 = 0;
    *v7 = (__int64)a5;
  }
  else
  {
    *v7 = 0LL;
    TtmiLogError("TtmiReferenceTerminalByHandle", 869LL, (unsigned int)v12, (unsigned int)v12);
  }
  if ( (v13 & 0x80000000) != 0 )
  {
    TtmiLogError("TtmpAcquireSessionFromTerminalHandle", 88LL, v13, v13);
    return v13;
  }
  v15 = *v7;
  if ( *(_DWORD *)(v15 + 28) )
  {
    if ( !a3 )
    {
      v16 = 98LL;
      goto LABEL_9;
    }
  }
  else if ( !a2 )
  {
    v16 = 93LL;
LABEL_9:
    v17 = -1073741788;
LABEL_10:
    TtmiLogError("TtmpAcquireSessionFromTerminalHandle", v16, 0xFFFFFFFFLL, v17);
    return v17;
  }
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v19 = *(_QWORD *)(v15 + 16);
  if ( (*(_DWORD *)(v19 + 4) & 4) != 0 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    v16 = 105LL;
    v17 = -1073740715;
    goto LABEL_10;
  }
  *a4 = v19;
  return 0LL;
}
