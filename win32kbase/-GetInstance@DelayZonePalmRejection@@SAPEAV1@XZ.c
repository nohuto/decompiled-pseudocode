/*
 * XREFs of ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0096A80
 * Callers:
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C0096A2C (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C016E2A0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01FC724 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01FE660 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211320 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211380 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     AddEdgePalmRejectionZone @ 0x1C0216EE0 (AddEdgePalmRejectionZone.c)
 *     AddPalmRejectionDelayZone @ 0x1C0216F34 (AddPalmRejectionDelayZone.c)
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x1C0216FD0 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C00971FC (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

struct DelayZonePalmRejection *__fastcall DelayZonePalmRejection::GetInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v6; // rdi
  int v7; // eax
  __int64 Pool2; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r10
  _QWORD v11[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v13; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v14; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v15; // [rsp+110h] [rbp+77h] BYREF
  __int64 v16; // [rsp+118h] [rbp+7Fh] BYREF

  v4 = SGDGetUserSessionState(a1, a2, a3, a4) + 17344;
  if ( *(_QWORD *)v4 )
    return *(struct DelayZonePalmRejection **)v4;
  v6 = gpLeakTrackingAllocator;
  v15 = 260LL;
  v13 = 2053403477;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  v16 = 136LL;
  if ( !v7 )
  {
    Pool2 = ExAllocatePool2(260LL, 136LL, 2053403477LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
    goto LABEL_6;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v14 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x7A647355u, &v14) )
      {
        v11[0] = &v15;
        v11[1] = &v13;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v6,
                  (__int64)v11,
                  &v16);
        goto LABEL_6;
      }
      Pool2 = ExAllocatePool2(v10, 152LL, 2053403477LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v6,
                                  Pool2,
                                  v14,
                                  BackTrace) )
          {
            *(_QWORD *)v4 = Pool2;
            goto LABEL_7;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v6,
                                     Pool2,
                                     v14,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_6;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_24:
    *(_QWORD *)v4 = 0LL;
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x7A647355u) )
    goto LABEL_24;
  v9 = (_QWORD *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFDuLL, 152LL, v13);
  Pool2 = (__int64)v9;
  if ( !v9
    || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
        *v9 = 2053403477LL,
        Pool2 = (__int64)(v9 + 2),
        v9 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v6 + 1),
      (const void *)0x7A647355);
  }
LABEL_6:
  *(_QWORD *)v4 = Pool2;
  if ( Pool2 )
  {
LABEL_7:
    DelayZonePalmRejection::Initialize((DelayZonePalmRejection *)Pool2);
    return *(struct DelayZonePalmRejection **)v4;
  }
  return 0LL;
}
