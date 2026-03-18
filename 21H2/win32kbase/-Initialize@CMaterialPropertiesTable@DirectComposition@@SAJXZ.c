/*
 * XREFs of ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C005AAD8
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C005AAB0 (DCompositionSessionInitialize.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 DirectComposition::CMaterialPropertiesTable::Initialize(void)
{
  PVOID v0; // rdi
  __int64 Pool2; // rbx
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rbx
  NTSTATUS v4; // ebx
  __int64 v6; // rax
  PVOID BackTrace[21]; // [rsp+30h] [rbp-A8h] BYREF

  v0 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x74724344) != 0x74724344
    || (v6 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 72LL);
LABEL_3:
    if ( !Pool2 )
    {
LABEL_15:
      Table = 0LL;
      return (unsigned int)-1073741801;
    }
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != 1953645380 )
  {
    if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 88LL);
  if ( !Pool2 )
    goto LABEL_15;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v0,
                             Pool2,
                             BackTrace) )
      goto LABEL_14;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v0,
                           Pool2,
                           BackTrace) )
  {
LABEL_14:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_15;
  }
LABEL_4:
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)Pool2,
    DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::CompareTableEntries,
    DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::AllocateTableEntry,
    DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
    0LL);
  Table = (PRTL_GENERIC_TABLE)Pool2;
  v2 = (struct _ERESOURCE *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                              68LL,
                              0x68uLL,
                              1935885124);
  v3 = v2;
  if ( !v2 )
  {
    Resource = 0LL;
    return (unsigned int)-1073741801;
  }
  memset(v2, 0, sizeof(struct _ERESOURCE));
  Resource = v3;
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
  {
    if ( Resource )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        Resource);
    Resource = 0LL;
  }
  return (unsigned int)v4;
}
