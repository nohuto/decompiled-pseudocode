/*
 * XREFs of ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0083180
 * Callers:
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C008312C (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C01576A0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01CEE84 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01D0B94 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E1D50 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E1D90 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E28C0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     AddEdgePalmRejectionZone @ 0x1C01E70E0 (AddEdgePalmRejectionZone.c)
 *     AddPalmRejectionDelayZone @ 0x1C01E7134 (AddPalmRejectionDelayZone.c)
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x1C01E71D0 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C0083200 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

struct DelayZonePalmRejection *DelayZonePalmRejection::GetInstance(void)
{
  PVOID v1; // rdi
  DelayZonePalmRejection *v2; // rax
  DelayZonePalmRejection *v3; // rcx
  __int64 v4; // rax
  DelayZonePalmRejection *Pool2; // rbx
  PVOID BackTrace[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( DelayZonePalmRejection::s_instance )
    return DelayZonePalmRejection::s_instance;
  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x7A647355) == 0x7A647355
    && (v4 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v4) != 2053403477 )
    {
      if ( ++v4 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_4;
    }
    Pool2 = (DelayZonePalmRejection *)ExAllocatePool2(260LL, 152LL);
    if ( !Pool2 )
      goto LABEL_17;
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)((unsigned __int16)Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                              v1,
                              Pool2,
                              BackTrace) )
      {
        DelayZonePalmRejection::s_instance = Pool2;
        goto LABEL_6;
      }
      goto LABEL_16;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v1,
                             Pool2,
                             BackTrace) )
    {
LABEL_16:
      ExFreePoolWithTag(Pool2, 0);
LABEL_17:
      DelayZonePalmRejection::s_instance = 0LL;
      return 0LL;
    }
    v2 = (DelayZonePalmRejection *)((char *)Pool2 + 16);
  }
  else
  {
LABEL_4:
    v2 = (DelayZonePalmRejection *)ExAllocatePool2(260LL, 136LL);
  }
  DelayZonePalmRejection::s_instance = v2;
  if ( v2 )
  {
LABEL_6:
    DelayZonePalmRejection::Initialize(v3);
    return DelayZonePalmRejection::s_instance;
  }
  return 0LL;
}
