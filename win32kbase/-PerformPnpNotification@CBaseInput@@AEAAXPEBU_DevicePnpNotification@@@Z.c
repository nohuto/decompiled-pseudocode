/*
 * XREFs of ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C002F5A4
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C002F3AC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C002EC7C (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     ApiSetEditionDevicePnpNotification @ 0x1C002F690 (ApiSetEditionDevicePnpNotification.c)
 *     GetKnownRIMDeviceKind @ 0x1C002FBBC (GetKnownRIMDeviceKind.c)
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C007DD00 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CBaseInput::PerformPnpNotification(CBaseInput *this, const struct _DevicePnpNotification *a2)
{
  PKDPC BufferChainingDpc; // rdi
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx
  int KnownRIMDeviceKind; // eax
  __int64 v7; // r10

  if ( !W32GetThreadWin32Thread(KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1996LL);
  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL);
  LODWORD(BufferChainingDpc) = BufferChainingDpc->DeferredRoutine;
  ExReleasePushLockSharedEx(p_DpcListEntry, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)BufferChainingDpc == 2 && (unsigned int)(*((_DWORD *)a2 + 5) - 2) <= 1 )
  {
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this)
      && (KeGetCurrentThread() != (struct _KTHREAD *)gpIVThread || (*(_DWORD *)(*(_QWORD *)a2 + 184LL) & 0x40) == 0) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2028LL);
    }
    KnownRIMDeviceKind = GetKnownRIMDeviceKind(*(_QWORD *)a2);
    CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, v7, *((_QWORD *)a2 + 1), *((_DWORD *)a2 + 5));
  }
  ApiSetEditionDevicePnpNotification(a2);
}
