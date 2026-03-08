/*
 * XREFs of ?VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I@Z @ 0x1C038CBE0
 * Callers:
 *     ?SendWnfNotificationToVmProcessWorkItem@DXGGLOBAL@@SAXPEAX@Z @ 0x1C0310630 (-SendWnfNotificationToVmProcessWorkItem@DXGGLOBAL@@SAXPEAX@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendAsyncPacket@@YAJPEAUVMBPACKET__@@PEAUDXGKVMB_COMMAND_BASE@@I@Z @ 0x1C005C61C (-VmBusSendAsyncPacket@@YAJPEAUVMBPACKET__@@PEAUDXGKVMB_COMMAND_BASE@@I@Z.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendWnfNotification(
        DXG_HOST_GLOBAL_VMBUS *this,
        struct DXGKVMB_COMMAND_SENDWNFNOTIFICATION *a2,
        unsigned int a3)
{
  __int64 v6; // rbp
  struct VMBPACKET__ *v7; // r14
  int v8; // eax

  LODWORD(v6) = 0;
  DXGPUSHLOCK::AcquireShared((DXG_HOST_GLOBAL_VMBUS *)((char *)this + 16));
  if ( *((_BYTE *)this + 68) && !*((_BYTE *)this + 70) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 19);
    if ( *((int *)this + 19) >= 16 )
    {
LABEL_8:
      _InterlockedDecrement((volatile signed __int32 *)this + 19);
      goto LABEL_9;
    }
    v7 = (struct VMBPACKET__ *)((__int64 (__fastcall *)(_QWORD))qword_1C013CF08)(*(_QWORD *)this);
    if ( !v7 )
    {
      WdLogSingleEntry1(6LL, 6547LL);
      DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to allocate VMBPACKET", 6547LL, 0LL, 0LL, 0LL, 0LL);
      LODWORD(v6) = -1073741801;
      goto LABEL_8;
    }
    ((void (__fastcall *)(struct VMBPACKET__ *, DXG_HOST_GLOBAL_VMBUS *))qword_1C013CF50)(v7, this);
    ((void (__fastcall *)(struct VMBPACKET__ *, void (__fastcall *)(struct VMBPACKET__ *, __int64, void *)))qword_1C013CF48)(
      v7,
      WnfPacketCompletionRoutine);
    v8 = VmBusSendAsyncPacket(v7, a2, a3);
    v6 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(2LL, v8);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendAsyncPacket failed. 0x%I64x",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
      ((void (__fastcall *)(struct VMBPACKET__ *))qword_1C013CF10)(v7);
      goto LABEL_8;
    }
  }
LABEL_9:
  _InterlockedDecrement((volatile signed __int32 *)this + 8);
  ExReleasePushLockSharedEx((char *)this + 16, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
