/*
 * XREFs of PopThermalTraceRundownEvents @ 0x14058DBD4
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1405928C0 (PopDiagTraceThermalZoneRundown.c)
 */

void PopThermalTraceRundownEvents()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // r8d
  PVOID *i; // rbx
  char v3; // r10

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    LOBYTE(v1) = *((_BYTE *)i + 65);
    if ( (v1 & 2) != 0 )
    {
      v3 = v1 & 1;
      LOBYTE(v1) = (v1 & 4) != 0;
      PopDiagTraceThermalZoneRundown(
        (unsigned int)i[6],
        (_DWORD)i + 1040,
        v1,
        *((unsigned __int8 *)i + 69),
        v3,
        *((_DWORD *)i + 20),
        *((_BYTE *)i + 72),
        *((_BYTE *)i + 73));
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
