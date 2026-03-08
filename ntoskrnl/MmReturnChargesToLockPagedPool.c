/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x140A2DCE0
 * Callers:
 *     MiDeleteSubsectionLargePages @ 0x14064C7F8 (MiDeleteSubsectionLargePages.c)
 *     MiCreatePagingFileMap @ 0x1407F3500 (MiCreatePagingFileMap.c)
 *     PopEnableHiberFile @ 0x14082ADA4 (PopEnableHiberFile.c)
 *     HalpUnloadMicrocode @ 0x140931E50 (HalpUnloadMicrocode.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiReturnResident @ 0x1402A52C8 (MiReturnResident.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 */

unsigned __int64 __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v4; // r8
  _OWORD v6[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+60h] [rbp-18h]

  v7 = 0LL;
  v2 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  memset(v6, 0, sizeof(v6));
  MiGetPteAddress(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v4, v2, 8, v6);
  return MiReturnResident((__int64)MiSystemPartition, v2);
}
