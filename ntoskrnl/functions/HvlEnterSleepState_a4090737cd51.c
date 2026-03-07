__int64 __fastcall HvlEnterSleepState(ULONG a1)
{
  __int16 v1; // bx
  __int128 v3; // [rsp+20h] [rbp-48h] BYREF
  __int64 v4; // [rsp+30h] [rbp-38h]
  __int64 v5; // [rsp+38h] [rbp-30h]
  _BYTE v6[16]; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0LL;
  LODWORD(v5) = 0;
  v3 = 0LL;
  HvlpAcquireHypercallPage((__int64)&v3, 1, (__int64)v6, 8LL)->LowPart = a1;
  v1 = HvcallInitiateHypercall(132);
  HvlpReleaseHypercallPage((__int64)&v3);
  return v1 != 0 ? 0xC0000001 : 0;
}
