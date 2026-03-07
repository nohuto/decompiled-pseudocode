__int64 __fastcall HvlDmaFlushDeviceDomain(int *a1)
{
  unsigned __int16 v1; // ax
  _QWORD v3[2]; // [rsp+40h] [rbp-38h] BYREF
  int v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+54h] [rbp-24h]
  __int64 v6; // [rsp+58h] [rbp-20h]

  v3[0] = -1LL;
  v3[1] = 0LL;
  v6 = 0LL;
  v4 = 1;
  v5 = *a1;
  v1 = HvcallFastExtended(65744LL, (__int64)v3, 0x20u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
