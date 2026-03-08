/*
 * XREFs of PoUnregisterPowerSettingCallback @ 0x140984070
 * Callers:
 *     SSHSupportUnregisterPowerSettingCallback @ 0x14099F4B4 (SSHSupportUnregisterPowerSettingCallback.c)
 *     TtmCleanupCurrentSession @ 0x1409A0EB0 (TtmCleanupCurrentSession.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PopUnregisterPowerSettingCallback @ 0x14058B784 (PopUnregisterPowerSettingCallback.c)
 */

NTSTATUS __stdcall PoUnregisterPowerSettingCallback(PVOID Handle)
{
  NTSTATUS v1; // edi

  v1 = 0;
  if ( Handle && *((_DWORD *)Handle + 4) == 1952797520 )
  {
    ExAcquireFastMutex(&PopSettingLock);
    if ( *((_BYTE *)Handle + 33) || *((_BYTE *)Handle + 32) || *(PVOID *)Handle == Handle )
    {
      v1 = -1073741811;
      goto LABEL_15;
    }
    if ( *((_QWORD *)Handle + 3) )
    {
      if ( *((struct _KTHREAD **)Handle + 3) == KeGetCurrentThread() )
      {
        *((_BYTE *)Handle + 32) = 1;
        goto LABEL_15;
      }
      *((_BYTE *)Handle + 33) = 1;
      while ( *((_QWORD *)Handle + 3) )
      {
        ExReleaseFastMutex(&PopSettingLock);
        KeWaitForSingleObject(&PopPowerSettingCallbackReturned, Executive, 0, 0, 0LL);
        KeResetEvent(&PopPowerSettingCallbackReturned);
        ExAcquireFastMutex(&PopSettingLock);
      }
      *((_BYTE *)Handle + 33) = 0;
    }
    PopUnregisterPowerSettingCallback(Handle);
LABEL_15:
    ExReleaseFastMutex(&PopSettingLock);
    return v1;
  }
  return -1073741811;
}
