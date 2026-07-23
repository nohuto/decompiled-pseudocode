/*
 * XREFs of VfAllocateCrashDumpRegisters @ 0x1409CBD90
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateCrashDumpRegisters @ 0x1404B8F80 (HalAllocateCrashDumpRegisters.c)
 *     VfDisableHalVerifier @ 0x1405A11C8 (VfDisableHalVerifier.c)
 *     ADD_MAP_REGISTERS @ 0x1409CABC0 (ADD_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x1409CB0EC (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall VfAllocateCrashDumpRegisters(PADAPTER_OBJECT AdapterObject, PULONG NumberOfMapRegisters)
{
  __int64 AdapterInformationInternal; // rdi
  PVOID CrashDumpRegisters; // rbx

  if ( KeGetCurrentIrql() > 2u )
    VfDisableHalVerifier();
  AdapterInformationInternal = ViGetAdapterInformationInternal((int)AdapterObject);
  CrashDumpRegisters = HalAllocateCrashDumpRegisters(AdapterObject, NumberOfMapRegisters);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    _InterlockedExchangeAdd((volatile signed __int32 *)(AdapterInformationInternal + 152), *NumberOfMapRegisters);
    ADD_MAP_REGISTERS(AdapterInformationInternal, *NumberOfMapRegisters, 0);
    if ( ViVerifyDma )
    {
      if ( !CrashDumpRegisters )
        return -559026163LL;
    }
  }
  return (__int64)CrashDumpRegisters;
}
