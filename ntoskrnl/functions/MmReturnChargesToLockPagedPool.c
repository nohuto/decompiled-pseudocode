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
