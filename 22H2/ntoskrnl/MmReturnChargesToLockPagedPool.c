/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x1408C8530
 * Callers:
 *     MiDeleteSubsectionLargePages @ 0x1403F5BB4 (MiDeleteSubsectionLargePages.c)
 *     MiCreatePagingFileMap @ 0x14061C968 (MiCreatePagingFileMap.c)
 *     PopEnableHiberFile @ 0x14079B350 (PopEnableHiberFile.c)
 *     HalpUnloadMicrocode @ 0x140866220 (HalpUnloadMicrocode.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     MiReturnResident @ 0x1402E9FEC (MiReturnResident.c)
 */

unsigned __int64 __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v4; // r8
  _OWORD v6[3]; // [rsp+30h] [rbp-38h] BYREF

  v2 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  memset(v6, 0, sizeof(v6));
  MiGetPteAddress(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v4, v2, 8, v6);
  return MiReturnResident((__int64)&MiSystemPartition, v2);
}
