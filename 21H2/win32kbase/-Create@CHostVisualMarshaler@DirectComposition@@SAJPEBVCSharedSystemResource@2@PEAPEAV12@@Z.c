/*
 * XREFs of ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C009AFE4
 * Callers:
 *     CreateHostVisualMarshaler @ 0x1C009AF90 (CreateHostVisualMarshaler.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00161D4 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C009B0A8 (-InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemReso.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CHostVisualMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CHostVisualMarshaler **a2)
{
  PVOID v2; // rdi
  __int64 Pool2; // rbx
  int v6; // edi
  __int64 v8; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76684344) != 0x76684344
    || (v8 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(261LL, 400LL);
LABEL_3:
    if ( !Pool2 )
    {
LABEL_15:
      v6 = -1073741801;
LABEL_16:
      Pool2 = 0LL;
      goto LABEL_6;
    }
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != 1986544452 )
  {
    if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(261LL, 416LL);
  if ( !Pool2 )
    goto LABEL_15;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v2,
                             Pool2,
                             BackTrace) )
      goto LABEL_14;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v2,
                           Pool2,
                           BackTrace) )
  {
LABEL_14:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_15;
  }
LABEL_4:
  memset((void *)Pool2, 0, 0x190uLL);
  DirectComposition::CVisualMarshaler::CVisualMarshaler((DirectComposition::CVisualMarshaler *)Pool2);
  *(_QWORD *)Pool2 = &DirectComposition::CHostVisualMarshaler::`vftable';
  v6 = DirectComposition::CHostVisualMarshaler::InitializeFromSharedResource(
         (DirectComposition::CHostVisualMarshaler *)Pool2,
         a1);
  if ( v6 < 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)Pool2 + 80LL))(Pool2, 1LL);
    goto LABEL_16;
  }
  *(_DWORD *)(Pool2 + 16) |= 2u;
  *(_DWORD *)(Pool2 + 392) |= 1u;
LABEL_6:
  *a2 = (struct DirectComposition::CHostVisualMarshaler *)Pool2;
  return (unsigned int)v6;
}
