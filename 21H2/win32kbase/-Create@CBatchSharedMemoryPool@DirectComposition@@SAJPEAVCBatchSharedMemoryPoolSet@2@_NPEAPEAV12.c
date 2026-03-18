/*
 * XREFs of ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C000D294
 * Callers:
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C000D218 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C000E4B4 (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0013148 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPool::Create(
        struct DirectComposition::CBatchSharedMemoryPoolSet *a1,
        char a2,
        struct DirectComposition::CBatchSharedMemoryPool **a3)
{
  NTSTATUS v6; // edi
  PVOID v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  __int64 Pool2; // rbx
  PVOID v11; // rcx
  __int64 v13; // rax
  PVOID *v14; // r8
  __int64 v15; // rax
  PVOID MappedBase; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v20[20]; // [rsp+100h] [rbp+0h] BYREF
  PVOID Section; // [rsp+1E8h] [rbp+E8h] BYREF

  Section = 0LL;
  MappedBase = 0LL;
  ViewSize[0] = 0LL;
  v17 = 4096LL;
  v6 = MmCreateSection(&Section, 6LL, 0LL, &v17, 4, 138412032, 0LL, 0LL);
  if ( v6 < 0 )
    goto LABEL_32;
  v6 = MmMapViewInSessionSpace(Section, &MappedBase, ViewSize);
  if ( v6 < 0 )
    goto LABEL_32;
  v7 = gpLeakTrackingAllocator;
  v8 = *((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73624344;
  if ( a2 )
  {
    if ( v8 == 1935819588 )
    {
      v13 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v13) != 1935819588 )
        {
          if ( ++v13 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_5;
        }
        Pool2 = ExAllocatePool2(261LL, 88LL);
        if ( Pool2 )
        {
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          v14 = BackTrace;
LABEL_20:
          if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v7,
                                    Pool2,
                                    v14) )
            {
              Pool2 += 16LL;
              goto LABEL_7;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v7,
                                       Pool2,
                                       v14) )
          {
            goto LABEL_7;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_19;
        }
        goto LABEL_19;
      }
    }
LABEL_5:
    v9 = 261LL;
  }
  else
  {
    if ( v8 == 1935819588 )
    {
      v15 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v15) != 1935819588 )
        {
          if ( ++v15 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_11;
        }
        Pool2 = ExAllocatePool2(260LL, 88LL);
        if ( Pool2 )
        {
          memset(v20, 0, sizeof(v20));
          RtlCaptureStackBackTrace(0, 0x14u, v20, 0LL);
          v14 = v20;
          goto LABEL_20;
        }
LABEL_19:
        Pool2 = 0LL;
        goto LABEL_7;
      }
    }
LABEL_11:
    v9 = 260LL;
  }
  Pool2 = ExAllocatePool2(v9, 72LL);
LABEL_7:
  if ( Pool2 )
  {
    v11 = MappedBase;
    *(_QWORD *)(Pool2 + 24) = Section;
    *(_QWORD *)(Pool2 + 56) = v11;
    *(_QWORD *)(Pool2 + 16) = a1;
    *a3 = (struct DirectComposition::CBatchSharedMemoryPool *)Pool2;
    return (unsigned int)v6;
  }
  v6 = -1073741801;
LABEL_32:
  if ( MappedBase )
    MmUnmapViewInSessionSpace(MappedBase);
  if ( Section )
    ObfDereferenceObject(Section);
  return (unsigned int)v6;
}
