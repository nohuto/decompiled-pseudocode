/*
 * XREFs of ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C006BC68
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C006BB5C (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannel::OnProcessCreation(
        struct DirectComposition::CProcessData *a1,
        unsigned __int64 a2)
{
  struct _ERESOURCE *v2; // rsi
  struct _RTL_GENERIC_TABLE *QuotaZInit; // rax
  struct _RTL_GENERIC_TABLE *v5; // rdi
  struct _ERESOURCE *v6; // rax
  NTSTATUS v7; // ebx
  __int64 result; // rax

  v2 = 0LL;
  QuotaZInit = (struct _RTL_GENERIC_TABLE *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                              a1,
                                              a2,
                                              0x48uLL,
                                              0x74634344u);
  v5 = QuotaZInit;
  if ( !QuotaZInit )
  {
    v5 = 0LL;
    v7 = -1073741801;
    goto LABEL_4;
  }
  RtlInitializeGenericTable(
    QuotaZInit,
    DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::CompareTableEntries,
    DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::AllocateTableEntry,
    DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
    0LL);
  v6 = (struct _ERESOURCE *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              gpLeakTrackingAllocator,
                              68LL,
                              0x68uLL,
                              0x73634344u);
  v2 = v6;
  if ( v6 )
  {
    memset(v6, 0, sizeof(struct _ERESOURCE));
    v7 = ExInitializeResourceLite(v2);
    if ( v7 >= 0 )
      goto LABEL_4;
  }
  else
  {
    v2 = 0LL;
    v7 = -1073741801;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  v5 = 0LL;
  if ( v2 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
    v2 = 0LL;
  }
LABEL_4:
  *(_QWORD *)a1 = v5;
  result = (unsigned int)v7;
  *((_QWORD *)a1 + 1) = v2;
  return result;
}
