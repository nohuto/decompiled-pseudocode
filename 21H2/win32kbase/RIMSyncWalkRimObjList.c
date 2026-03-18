/*
 * XREFs of RIMSyncWalkRimObjList @ 0x1C00B4890
 * Callers:
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x1C00B4690 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C00B4790 (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     RIMSetSystemInputMode @ 0x1C00D1C3C (RIMSetSystemInputMode.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00D3FB0 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C014C410 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     RIMSetTestModeStatus @ 0x1C017F320 (RIMSetTestModeStatus.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void __fastcall RIMSyncWalkRimObjList(int a1, __int64 a2, void (__fastcall *a3)(_QWORD *, __int64))
{
  char *v5; // rbx
  unsigned int v6; // edi
  struct _LIST_ENTRY *Flink; // rax
  PVOID v8; // rsi
  unsigned __int64 v9; // rdx
  struct _LIST_ENTRY *v10; // rsi
  struct _LIST_ENTRY *v11; // rbp
  __int64 v12; // rax
  char *v13; // rsi
  __int64 v14; // r15
  _QWORD *v15; // rdi
  _QWORD *v16; // rbp
  __int64 v17; // rax
  char v18; // di
  PVOID BackTrace[27]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 Pool2; // [rsp+118h] [rbp+20h]

  if ( !gbRIMInitialized )
    return;
  v5 = 0LL;
  Pool2 = 0LL;
  v6 = 0;
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink != &gObRimList )
  {
    do
    {
      if ( !LOBYTE(Flink[4].Flink) && !BYTE1(Flink[4].Flink) )
        ++v6;
      Flink = Flink->Flink;
    }
    while ( Flink != &gObRimList );
    if ( v6 )
    {
      v8 = gpLeakTrackingAllocator;
      v9 = 8LL * v6;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x706D7452) == 0x706D7452 )
      {
        v17 = 0LL;
        if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
        {
          while ( *((_DWORD *)gpLeakTrackingAllocator + v17) != 1886221394 )
          {
            if ( ++v17 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_9;
          }
          v18 = 0;
          if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
          {
            v18 = 1;
            v9 += 16LL;
          }
          Pool2 = ExAllocatePool2(260LL, v9);
          v5 = (char *)Pool2;
          if ( Pool2 )
          {
            memset(BackTrace, 0, 0xA0uLL);
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v18 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v8,
                                      Pool2,
                                      BackTrace) )
              {
                v5 = (char *)(Pool2 + 16);
                goto LABEL_10;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v8,
                                         Pool2,
                                         BackTrace) )
            {
LABEL_11:
              v10 = gObRimList.Flink;
              v6 = 0;
              while ( v10 != &gObRimList )
              {
                v11 = v10 - 1;
                if ( !LOBYTE(v10[4].Flink)
                  && !BYTE1(v11[5].Flink)
                  && ObReferenceObjectByPointer(&v10[-1], 3u, ExRawInputManagerObjectType, 0) >= 0 )
                {
                  v12 = v6++;
                  *(_QWORD *)&v5[8 * v12] = v11;
                }
                v10 = v10->Flink;
              }
              goto LABEL_18;
            }
            ExFreePoolWithTag((PVOID)Pool2, 0);
          }
          v5 = 0LL;
          goto LABEL_10;
        }
      }
LABEL_9:
      v5 = (char *)ExAllocatePool2(260LL, v9);
LABEL_10:
      Pool2 = (__int64)v5;
      goto LABEL_11;
    }
  }
LABEL_18:
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( v6 )
  {
    v13 = v5;
    v14 = v6;
    do
    {
      v15 = *(_QWORD **)v13;
      if ( a1 == 1 )
      {
        RIMLockExclusive((__int64)(v15 + 13));
        v16 = v15 + 99;
        RIMLockExclusive((__int64)(v15 + 99));
      }
      else
      {
        v16 = v15 + 99;
      }
      a3(v15, a2);
      if ( a1 == 1 )
      {
        v16[1] = 0LL;
        ExReleasePushLockExclusiveEx(v16, 0LL);
        KeLeaveCriticalRegion();
        v15[14] = 0LL;
        ExReleasePushLockExclusiveEx(v15 + 13, 0LL);
        KeLeaveCriticalRegion();
      }
      ObfDereferenceObject(v15);
      v13 += 8;
      --v14;
    }
    while ( v14 );
    v5 = (char *)Pool2;
  }
  if ( v5 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
}
