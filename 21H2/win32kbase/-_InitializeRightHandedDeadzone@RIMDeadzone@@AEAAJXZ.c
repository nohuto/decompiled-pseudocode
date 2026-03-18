/*
 * XREFs of ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01A2F18
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C01A23E4 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01A243C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01A293C (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMDeadzone::_InitializeRightHandedDeadzone(RIMDeadzone *this)
{
  _DWORD *v1; // rsi
  __int64 v3; // rax
  __int64 Pool2; // rbx
  __int64 result; // rax
  _DWORD *v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  _DWORD *v10; // rcx
  char v11; // r14
  PVOID BackTrace[20]; // [rsp+20h] [rbp-158h] BYREF
  PVOID v13[20]; // [rsp+C0h] [rbp-B8h] BYREF

  v1 = gpLeakTrackingAllocator;
  *((_DWORD *)this + 4) = 2;
  *((_DWORD *)this + 8) = 1;
  if ( (v1[10] & 0x7A645052) != 0x7A645052 || (v3 = 0LL, !v1[11]) )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, 24LL);
    goto LABEL_6;
  }
  while ( v1[v3] != 2053394514 )
  {
    if ( ++v3 >= (unsigned __int64)(unsigned int)v1[11] )
      goto LABEL_5;
  }
  Pool2 = ExAllocatePool2(260LL, 40LL);
  if ( !Pool2 )
    goto LABEL_9;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v1,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_12;
    Pool2 += 16LL;
  }
  else if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v1,
               Pool2,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_12:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_9:
    Pool2 = 0LL;
  }
LABEL_6:
  *((_QWORD *)this + 3) = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v6 = gpLeakTrackingAllocator;
  *(_DWORD *)Pool2 = 280;
  *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = 30;
  *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) = 1;
  v7 = 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 16LL);
  if ( (v6[10] & 0x7A645052) != 0x7A645052 || (v8 = 0LL, !v6[11]) )
  {
LABEL_19:
    v9 = ExAllocatePool2(260LL, v7);
    goto LABEL_20;
  }
  while ( v6[v8] != 2053394514 )
  {
    if ( ++v8 >= (unsigned __int64)(unsigned int)v6[11] )
      goto LABEL_19;
  }
  v11 = 0;
  if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
  {
    v11 = 1;
    v7 += 16LL;
  }
  v9 = ExAllocatePool2(260LL, v7);
  if ( !v9 )
    goto LABEL_26;
  memset(v13, 0, sizeof(v13));
  RtlCaptureStackBackTrace(0, 0x14u, v13, 0LL);
  if ( v11 && (unsigned __int64)(v9 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v6,
           (const void *)v9,
           (struct NSInstrumentation::CBackTrace *)v13) )
    {
      v9 += 16LL;
      goto LABEL_20;
    }
LABEL_32:
    ExFreePoolWithTag((PVOID)v9, 0);
LABEL_26:
    v9 = 0LL;
    goto LABEL_20;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v6,
          v9,
          (struct NSInstrumentation::CBackTrace *)v13) )
    goto LABEL_32;
LABEL_20:
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = v9;
  v10 = *(_DWORD **)(*((_QWORD *)this + 3) + 8LL);
  if ( !v10 )
  {
    RIMDeadzone::Release((DeadzonePalmTelemetry **)this);
    return 3221225495LL;
  }
  *v10 = 0;
  result = 0LL;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL) = 12000;
  *(_DWORD *)this = 1;
  return result;
}
