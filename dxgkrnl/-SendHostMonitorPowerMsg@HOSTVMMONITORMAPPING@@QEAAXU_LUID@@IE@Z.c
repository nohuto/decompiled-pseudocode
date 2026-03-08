/*
 * XREFs of ?SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z @ 0x1C001A2D0
 * Callers:
 *     MonitorEnableDisableMonitor @ 0x1C01E18AC (MonitorEnableDisableMonitor.c)
 * Callees:
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C0057444 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ?VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z @ 0x1C005C778 (-VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z.c)
 */

void __fastcall HOSTVMMONITORMAPPING::SendHostMonitorPowerMsg(
        KSPIN_LOCK *this,
        struct _LUID a2,
        int a3,
        unsigned __int8 a4)
{
  char *v4; // rdi
  HOSTVMMONITORMAPPING *v9; // rsi
  HOSTVMMONITORMAPPING *v10; // rdi
  unsigned int v11; // r8d
  void *v12; // rcx
  int v13; // ecx
  int v14; // r8d
  char *v15; // [rsp+48h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  char v17; // [rsp+68h] [rbp-30h]
  LONG HighPart; // [rsp+ACh] [rbp+14h]

  HighPart = a2.HighPart;
  v4 = (char *)(this + 2);
  v17 = 0;
  v15 = (char *)(this + 2);
  KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v9 = (HOSTVMMONITORMAPPING *)*this;
  v17 = 1;
  if ( v9 == (HOSTVMMONITORMAPPING *)this )
    goto LABEL_2;
  do
  {
    v10 = v9;
    v9 = *(HOSTVMMONITORMAPPING **)v9;
    if ( *((_DWORD *)v10 + 4) == a2.LowPart && *((_DWORD *)v10 + 5) == HighPart )
    {
      v11 = *((_DWORD *)v10 + 6);
      if ( v11 == a3 || a3 == -1 )
      {
        v12 = (void *)*((_QWORD *)v10 + 4);
        if ( v12 && *((_DWORD *)v10 + 10) >= 0x25u )
        {
          DXG_HOST_GLOBAL_VMBUS::VmBusSendHostMonitorPower(v12, a2, v11, a4);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
            McTemplateK0xqpp_EtwWriteTransfer(
              v13,
              (unsigned int)&RemoteMonitorVSyncTrigger,
              v14,
              *((_QWORD *)v10 + 2),
              *((_DWORD *)v10 + 6),
              *((_QWORD *)v10 + 6),
              *((_QWORD *)v10 + 4));
        }
      }
    }
  }
  while ( v9 != (HOSTVMMONITORMAPPING *)this );
  if ( v17 )
  {
LABEL_2:
    v17 = 0;
    *((_QWORD *)v15 + 1) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
