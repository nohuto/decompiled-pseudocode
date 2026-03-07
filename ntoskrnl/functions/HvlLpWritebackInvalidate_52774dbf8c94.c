__int64 __fastcall HvlLpWritebackInvalidate(ULONG a1)
{
  PHYSICAL_ADDRESS *v2; // rax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v6 = 0LL;
  LODWORD(v7) = 0;
  v5 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v5, 1, 0LL, 32LL);
  v2[1].QuadPart = 0LL;
  v2[2].QuadPart = 0LL;
  v2[3].QuadPart = 0LL;
  v2->LowPart = a1;
  v2->HighPart = 65538;
  v3 = (unsigned __int16)HvcallInitiateHypercall(137) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v5);
  return v3;
}
