/*
 * XREFs of TtmpAcquireSessionFromTerminalHandle @ 0x1409A3258
 * Callers:
 *     TtmpDispatchAssignDevice @ 0x1409A33A8 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1409A3450 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1409A358C (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1409A367C (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1409A3890 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1409A394C (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1409A39F8 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1409A3AAC (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1409A3B68 (TtmpDispatchSetInputWakeCapability.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 */

__int64 __fastcall TtmpAcquireSessionFromTerminalHandle(void *a1, char a2, char a3, _QWORD *a4, _QWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rsi
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
  if ( v12 < 0 )
  {
    *v7 = 0LL;
    TtmiLogError("TtmiReferenceTerminalByHandle", 1007LL, (unsigned int)v12, (unsigned int)v12);
    TtmiLogError("TtmpAcquireSessionFromTerminalHandle", 88LL, v13, v13);
    return v13;
  }
  v15 = (__int64)a5;
  *v7 = a5;
  if ( *(_DWORD *)(v15 + 28) )
  {
    if ( !a3 )
    {
      v16 = 98LL;
      goto LABEL_6;
    }
  }
  else if ( !a2 )
  {
    v16 = 93LL;
LABEL_6:
    v17 = -1073741788;
LABEL_7:
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
    goto LABEL_7;
  }
  *a4 = v19;
  return 0LL;
}
