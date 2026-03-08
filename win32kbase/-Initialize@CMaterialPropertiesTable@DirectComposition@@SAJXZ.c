/*
 * XREFs of ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C0095618
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C00955F0 (DCompositionSessionInitialize.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 DirectComposition::CMaterialPropertiesTable::Initialize(void)
{
  NSInstrumentation::CLeakTrackingAllocator *v0; // rdi
  int v1; // eax
  __int64 Pool2; // rbx
  struct _ERESOURCE *v3; // rax
  struct _ERESOURCE *v4; // rbx
  NTSTATUS v5; // ebx
  _QWORD *v7; // rax
  __int64 v8; // r10
  _QWORD v9[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v11; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v12; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v13; // [rsp+120h] [rbp+77h] BYREF
  __int64 v14; // [rsp+128h] [rbp+7Fh] BYREF

  v0 = gpLeakTrackingAllocator;
  v11 = 1953645380;
  v13 = 260LL;
  v14 = 72LL;
  v1 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 72LL, 1953645380LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v0 + 14);
    goto LABEL_4;
  }
  if ( v1 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x74724344u) )
      goto LABEL_22;
    v7 = (_QWORD *)ExAllocatePool2(v13 & 0xFFFFFFFFFFFFFFFDuLL, 88LL, v11);
    Pool2 = (__int64)v7;
    if ( !v7
      || (_InterlockedIncrement64((volatile signed __int64 *)v0 + 14),
          *v7 = 1953645380LL,
          Pool2 = (__int64)(v7 + 2),
          v7 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v0 + 1),
        (const void *)0x74724344);
    }
LABEL_4:
    if ( Pool2 )
      goto LABEL_5;
LABEL_22:
    Table = 0LL;
    return (unsigned int)-1073741801;
  }
  if ( v1 != 2 )
    goto LABEL_22;
  v12 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x74724344u, &v12) )
  {
    v9[0] = &v13;
    v9[1] = &v11;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v0,
              (__int64)v9,
              &v14);
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(v8, 88LL, 1953645380LL);
  if ( !Pool2 )
    goto LABEL_22;
  _InterlockedIncrement64((volatile signed __int64 *)v0 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v0,
                            Pool2,
                            v12,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_4;
    }
LABEL_21:
    _InterlockedIncrement64((volatile signed __int64 *)v0 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_22;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v0,
                           Pool2,
                           v12,
                           BackTrace) )
    goto LABEL_21;
LABEL_5:
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)Pool2,
    DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::CompareTableEntries,
    DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::AllocateTableEntry,
    DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
    0LL);
  Table = (PRTL_GENERIC_TABLE)Pool2;
  v3 = (struct _ERESOURCE *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              gpLeakTrackingAllocator,
                              68LL,
                              0x68uLL,
                              0x73634344u);
  v4 = v3;
  if ( !v3 )
  {
    Resource = 0LL;
    return (unsigned int)-1073741801;
  }
  memset(v3, 0, sizeof(struct _ERESOURCE));
  Resource = v4;
  v5 = ExInitializeResourceLite(v4);
  if ( v5 < 0 )
  {
    if ( Resource )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Resource);
    Resource = 0LL;
  }
  return (unsigned int)v5;
}
