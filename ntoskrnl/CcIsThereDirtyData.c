BOOLEAN __stdcall CcIsThereDirtyData(PVPB Vpb)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v2 = Vpb;
  BYTE8(v2) = 0;
  CcForEachPartition(
    (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcIsThereDirtyDataHelper,
    (__int64)&v2,
    1,
    1);
  return BYTE8(v2);
}
