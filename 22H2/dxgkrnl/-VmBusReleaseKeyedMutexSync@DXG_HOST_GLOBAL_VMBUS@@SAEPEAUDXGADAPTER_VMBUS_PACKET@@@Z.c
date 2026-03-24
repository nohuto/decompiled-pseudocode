/*
 * XREFs of ?VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0246740
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040684 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040F30 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x1C0239364 (DxgkpAcquireKeyedMutexFromHandle.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1C0291E6C (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusReleaseKeyedMutexSync(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned int *v4; // rax
  __int64 v5; // r8
  DXGKEYEDMUTEX *v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // rdx
  size_t Size; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = (unsigned int *)DxgkpAcquireKeyedMutexFromHandle(*((struct _KTHREAD ***)a1 + 7), *(_DWORD *)(v2 + 24));
  v6 = (DXGKEYEDMUTEX *)v4;
  if ( !v4 )
    return 0;
  v7 = v4[40];
  v8 = *((unsigned int *)a1 + 22) - 48LL;
  if ( v8 < v7 )
  {
    v9 = WdLogNewEntry5_WdWarning(v8, v7, v5);
    *(_QWORD *)(v9 + 24) = *((unsigned int *)a1 + 22);
    WdLogEvent5_WdWarning(v9);
    DXGKEYEDMUTEX::ReleaseReference(v6, v10);
    return 0;
  }
  LODWORD(Size) = v4[40];
  v14 = DXGKEYEDMUTEX::ReleaseSync(
          (DXGKEYEDMUTEX *)v4,
          *(_DWORD *)(v3 + 28),
          *(_QWORD *)(v3 + 32),
          *(_QWORD *)(v3 + 40),
          (void *)(v3 + 48),
          Size,
          0);
  DXGKEYEDMUTEX::ReleaseReference(v6, v12);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v14, 4u);
  return 1;
}
