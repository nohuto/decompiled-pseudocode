/*
 * XREFs of VfAllocateCrashDumpRegisters @ 0x140AC2380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfDisableHalVerifier @ 0x1405CC438 (VfDisableHalVerifier.c)
 *     ADD_MAP_REGISTERS @ 0x140AC1180 (ADD_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140AC16AC (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfAllocateCrashDumpRegisters(int a1, unsigned int *a2)
{
  __int64 AdapterInformationInternal; // rdi
  __int64 RealDmaAdapter; // rax
  __int64 v6; // rbx

  if ( KeGetCurrentIrql() > 2u )
    VfDisableHalVerifier();
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  v6 = ((__int64 (__fastcall *)(__int64, unsigned int *))pXdvHalAllocateCrashDumpRegisters)(RealDmaAdapter, a2);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    _InterlockedExchangeAdd((volatile signed __int32 *)(AdapterInformationInternal + 184), *a2);
    ADD_MAP_REGISTERS(AdapterInformationInternal, *a2, 0);
    if ( ViVerifyDma )
    {
      if ( !v6 )
        return -559026163LL;
    }
  }
  return v6;
}
