/*
 * XREFs of ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C005ABC4
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C005AAB0 (DCompositionSessionInitialize.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 DirectComposition::CSynchronizationManager::OnSessionCreation(void)
{
  PVOID v0; // rdi
  __int64 Pool2; // rbx
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rsi
  NTSTATUS v4; // edi
  __int64 v6; // rax
  PVOID BackTrace[20]; // [rsp+30h] [rbp-A8h] BYREF

  v0 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65734344) != 0x65734344
    || (v6 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 72LL);
LABEL_3:
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != 1702052676 )
  {
    if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 88LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v0,
                             Pool2,
                             BackTrace) )
      goto LABEL_15;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v0,
                           Pool2,
                           BackTrace) )
  {
LABEL_15:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)-1073741801;
  }
LABEL_4:
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)Pool2,
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
    DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::AllocateTableEntry,
    DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
    0LL);
  v2 = (struct _ERESOURCE *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                              68LL,
                              0x68uLL,
                              1935885124);
  v3 = v2;
  if ( !v2 )
  {
    v4 = -1073741801;
    goto LABEL_21;
  }
  memset(v2, 0, sizeof(struct _ERESOURCE));
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v3);
LABEL_21:
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (void *)Pool2);
    return (unsigned int)v4;
  }
  DirectComposition::CSynchronizationManager::s_syncIdCounter = 0LL;
  DirectComposition::CSynchronizationManager::s_pSyncTable = (PRTL_GENERIC_TABLE)Pool2;
  DirectComposition::CSynchronizationManager::s_pSyncTableLock = v3;
  return (unsigned int)v4;
}
