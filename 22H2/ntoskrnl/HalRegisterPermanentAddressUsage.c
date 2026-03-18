/*
 * XREFs of HalRegisterPermanentAddressUsage @ 0x1403803E0
 * Callers:
 *     HalpHpetDiscover @ 0x140377E30 (HalpHpetDiscover.c)
 *     HalpIvtProcessDrhdEntry @ 0x14037EF04 (HalpIvtProcessDrhdEntry.c)
 *     HalpApicDiscover @ 0x1403A42D8 (HalpApicDiscover.c)
 *     HalpApicRegisterIoUnit @ 0x1403A4514 (HalpApicRegisterIoUnit.c)
 *     HalpIommuProcessIvhdEntry @ 0x14052E714 (HalpIommuProcessIvhdEntry.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14037E158 (HalpMmAllocateMemoryInternal.c)
 */

NTSTATUS __stdcall HalRegisterPermanentAddressUsage(LARGE_INTEGER PhysicalAddress, ULONG SizeInBytes)
{
  __int64 v3; // rdi
  __int64 MemoryInternal; // rax
  ULONG_PTR v5; // rcx
  NTSTATUS result; // eax

  v3 = SizeInBytes;
  if ( !HalpTimerRegistrationAllowed )
    return -1073741431;
  MemoryInternal = HalpMmAllocateMemoryInternal(45, 1u);
  v5 = MemoryInternal;
  if ( !MemoryInternal )
    return -1073741801;
  *(_QWORD *)(MemoryInternal + 29) = 0LL;
  *(_QWORD *)(MemoryInternal + 37) = 0LL;
  *(_DWORD *)(MemoryInternal + 8) = 3;
  *(_BYTE *)(MemoryInternal + 12) = 33;
  *(LARGE_INTEGER *)(MemoryInternal + 13) = PhysicalAddress;
  *(_QWORD *)(MemoryInternal + 21) = v3;
  *(_QWORD *)MemoryInternal = HalpAddressUsageList;
  result = 0;
  HalpAddressUsageList = v5;
  return result;
}
