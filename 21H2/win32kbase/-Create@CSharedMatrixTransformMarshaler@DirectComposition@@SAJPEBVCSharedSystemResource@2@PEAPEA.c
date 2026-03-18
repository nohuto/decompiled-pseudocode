/*
 * XREFs of ?Create@CSharedMatrixTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0239270
 * Callers:
 *     CreateSharedMatrixTransformMarshaler @ 0x1C0239630 (CreateSharedMatrixTransformMarshaler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?InitializeFromSharedResource@CSharedMatrixTransformMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C0239494 (-InitializeFromSharedResource@CSharedMatrixTransformMarshaler@DirectComposition@@QEAAJPEBVCShare.c)
 */

__int64 __fastcall DirectComposition::CSharedMatrixTransformMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedMatrixTransformMarshaler **a2)
{
  PVOID v2; // rdi
  __int64 v5; // rax
  __int64 Pool2; // rbx
  int v7; // edi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x766D4344) != 0x766D4344
    || (v5 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(261LL, 112LL);
LABEL_6:
    if ( !Pool2 )
    {
LABEL_13:
      v7 = -1073741801;
      goto LABEL_14;
    }
    goto LABEL_7;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != 1986872132 )
  {
    if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_5;
  }
  Pool2 = ExAllocatePool2(261LL, 128LL);
  if ( !Pool2 )
    goto LABEL_13;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v2,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_12;
    Pool2 += 16LL;
    goto LABEL_6;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v2,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_12:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_13;
  }
LABEL_7:
  memset((void *)Pool2, 0, 0x70uLL);
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_QWORD *)(Pool2 + 56) = 0LL;
  *(_QWORD *)Pool2 = &DirectComposition::CSharedMatrixTransformMarshaler::`vftable';
  *(_QWORD *)(Pool2 + 24) = 1LL;
  *(_DWORD *)(Pool2 + 48) = 106;
  v7 = DirectComposition::CSharedMatrixTransformMarshaler::InitializeFromSharedResource(
         (DirectComposition::CSharedMatrixTransformMarshaler *)Pool2,
         a1);
  if ( v7 < 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)Pool2 + 80LL))(Pool2, 1LL);
LABEL_14:
    Pool2 = 0LL;
  }
  *a2 = (struct DirectComposition::CSharedMatrixTransformMarshaler *)Pool2;
  return (unsigned int)v7;
}
