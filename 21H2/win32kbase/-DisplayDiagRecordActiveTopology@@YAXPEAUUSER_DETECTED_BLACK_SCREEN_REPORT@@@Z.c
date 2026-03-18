/*
 * XREFs of ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C014A3A4
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C014A580 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0070630 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C00706F0 (DrvQueryDisplayConfig.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void __fastcall DisplayDiagRecordActiveTopology(struct USER_DETECTED_BLACK_SCREEN_REPORT *a1)
{
  int DisplayConfigBufferSizes; // eax
  __int64 v3; // rax
  PVOID v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 Pool2; // rbx
  int v8; // eax
  char v9; // bp
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v11; // [rsp+D0h] [rbp+8h] BYREF

  v11 = 0;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(2u, (__int64)&v11);
  *((_DWORD *)a1 + 4) = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes < 0 )
    return;
  v3 = v11;
  *((_DWORD *)a1 + 5) = v11;
  if ( !(_DWORD)v3 )
  {
LABEL_24:
    *((_DWORD *)a1 + 4) = 14;
    return;
  }
  v4 = gpLeakTrackingAllocator;
  v5 = 216 * v3;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x69647355) != 0x69647355
    || (v6 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_7:
    Pool2 = ExAllocatePool2(260LL, v5);
    goto LABEL_8;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != 1768190805 )
  {
    if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_7;
  }
  v9 = 0;
  if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
  {
    v9 = 1;
    v5 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v5);
  if ( !Pool2 )
    goto LABEL_17;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v9 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v4,
                            Pool2,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_8;
    }
LABEL_23:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_17:
    Pool2 = 0LL;
    goto LABEL_8;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v4,
                           Pool2,
                           BackTrace) )
    goto LABEL_23;
LABEL_8:
  if ( !Pool2 )
    goto LABEL_24;
  v8 = DrvQueryDisplayConfig(2u, &v11, Pool2, 0LL);
  *((_DWORD *)a1 + 4) = v8;
  if ( v8 >= 0 )
  {
    *((_QWORD *)a1 + 3) = Pool2;
    Pool2 = 0LL;
  }
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
}
