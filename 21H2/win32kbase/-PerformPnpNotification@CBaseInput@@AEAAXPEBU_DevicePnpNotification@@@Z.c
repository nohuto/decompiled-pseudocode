/*
 * XREFs of ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0048B2C
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C004894C (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003C780 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ApiSetEditionDevicePnpNotification @ 0x1C0048C08 (ApiSetEditionDevicePnpNotification.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C00B5F50 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     GetKnownRIMDeviceKind @ 0x1C00B614C (GetKnownRIMDeviceKind.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::PerformPnpNotification(CBaseInput *this, const struct _DevicePnpNotification *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  CInputThreadBase *v7; // rdi
  char *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int KnownRIMDeviceKind; // eax
  __int64 v13; // r10

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v7 = gpInputThread;
  v8 = (char *)gpInputThread + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v8, 0LL);
  LODWORD(v7) = *((_DWORD *)v7 + 6);
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v7 == 2 && (unsigned int)(*((_DWORD *)a2 + 5) - 2) <= 1 )
  {
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    {
      if ( KeGetCurrentThread() != (struct _KTHREAD *)gpIVThread
        || (v10 = *(unsigned int *)(*(_QWORD *)a2 + 184LL), (v10 & 0x40) == 0) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
      }
    }
    KnownRIMDeviceKind = GetKnownRIMDeviceKind(*(_QWORD *)a2);
    CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, v13, *((_QWORD *)a2 + 1), *((unsigned int *)a2 + 5));
  }
  ApiSetEditionDevicePnpNotification(a2);
}
