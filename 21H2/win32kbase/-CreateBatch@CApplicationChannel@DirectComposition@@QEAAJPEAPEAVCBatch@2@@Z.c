/*
 * XREFs of ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C000E3E0
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C000E0C8 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0013148 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // edi
  int v5; // eax
  PVOID v6; // rsi
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rcx
  __int64 Pool2; // rbx
  __int64 v12; // rax
  PVOID *v13; // r8
  __int64 v14; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-148h] BYREF
  PVOID v16[20]; // [rsp+C0h] [rbp-A8h] BYREF

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this);
  v6 = gpLeakTrackingAllocator;
  v7 = v5 == 3;
  v8 = *((_DWORD *)gpLeakTrackingAllocator + 10);
  if ( v7 )
  {
    if ( (v8 & 0x61624344) == 0x61624344 )
    {
      v14 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v14) != 1633829700 )
        {
          if ( ++v14 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_9;
        }
        Pool2 = ExAllocatePool2(260LL, 176LL);
        if ( !Pool2 )
          goto LABEL_18;
        memset(v16, 0, sizeof(v16));
        RtlCaptureStackBackTrace(0, 0x14u, v16, 0LL);
        v13 = v16;
        goto LABEL_19;
      }
    }
LABEL_9:
    v9 = 260LL;
LABEL_4:
    Pool2 = ExAllocatePool2(v9, 160LL);
    goto LABEL_5;
  }
  if ( (v8 & 0x61624344) != 0x61624344 || (v12 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_3:
    v9 = 261LL;
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1633829700 )
  {
    if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_3;
  }
  Pool2 = ExAllocatePool2(261LL, 176LL);
  if ( !Pool2 )
    goto LABEL_18;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  v13 = BackTrace;
LABEL_19:
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(v6, Pool2, v13) )
    {
      Pool2 += 16LL;
      goto LABEL_5;
    }
    goto LABEL_17;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(v6, Pool2, v13) )
  {
LABEL_17:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_18:
    Pool2 = 0LL;
  }
LABEL_5:
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 8) = this;
    *(_QWORD *)(Pool2 + 120) = &DirectComposition::CBatch::CBatchListProxy::`vftable';
    *(_DWORD *)(Pool2 + 20) = 7;
    *(_QWORD *)(Pool2 + 128) = Pool2;
    *a2 = (struct DirectComposition::CBatch *)Pool2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
