/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___lambda_2acc3c748d9b6116d218aa09d93926be___ @ 0x1C0179A24
 * Callers:
 *     ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z @ 0x1C0179E7C (-AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C002FE1C (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___lambda_2acc3c748d9b6116d218aa09d93926be___(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  __int64 v6; // r11
  unsigned int *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // rcx
  char v12; // si
  unsigned int *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // [rsp+38h] [rbp-61h] BYREF
  int v18; // [rsp+40h] [rbp-59h]
  int v19; // [rsp+44h] [rbp-55h]
  PVOID BackTrace[20]; // [rsp+48h] [rbp-51h] BYREF

  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(a1, a3) )
  {
    v7 = *(unsigned int **)(v4 + 8);
    v19 = 0;
    v8 = *v7;
    v9 = *(__int64 **)v4;
    v17 = 1LL;
    v10 = *v9;
    v18 = **(_DWORD **)(v6 + 16);
    return ExAllocatePool3(v10 | 2, v5, v8, &v17, 1);
  }
  v12 = 0;
  if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
  {
    v12 = 1;
    v5 += 16LL;
  }
  v13 = *(unsigned int **)(v6 + 8);
  v19 = 0;
  v17 = 1LL;
  v14 = *v13;
  v15 = **(_QWORD **)v6 | 2LL;
  v18 = **(_DWORD **)(v6 + 16);
  v16 = ExAllocatePool3(v15, v5, v14, &v17, 1);
  if ( v16 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v12 && (unsigned __int64)(v16 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              a1,
                              v16,
                              BackTrace) )
        return v16 + 16;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 a1,
                                 v16,
                                 BackTrace) )
    {
      return v16;
    }
    ExFreePoolWithTag((PVOID)v16, 0);
  }
  return 0LL;
}
