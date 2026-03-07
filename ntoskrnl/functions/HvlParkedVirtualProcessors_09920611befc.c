char HvlParkedVirtualProcessors()
{
  int v0; // eax
  PHYSICAL_ADDRESS *v2; // rax
  int v3; // eax
  PHYSICAL_ADDRESS *v4; // rax
  __int128 v5; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+48h] [rbp-B8h]
  __int64 v7; // [rsp+50h] [rbp-B0h]
  _BYTE v8[160]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = 0LL;
  LODWORD(v7) = 0;
  v5 = 0LL;
  memset(v8, 0, sizeof(v8));
  if ( (HvlEnlightenments & 0x80u) == 0 || (unsigned __int64)((HvlpFlags >> 8) & 0xF) + 3 >= 0xE )
  {
    v2 = HvlpAcquireHypercallPage((__int64)&v5, 1, (__int64)v8, 80LL);
    v3 = HvlpAffinityToHvProcessorSet(PpmPerfCoreParkingMask, v2, (v5 & 2) != 0 ? 64 : 4080);
    if ( v3 == -1 )
    {
      HvlpReleaseHypercallPage((__int64)&v5);
      v4 = HvlpAcquireHypercallPage((__int64)&v5, 1, 0LL, 0LL);
      v3 = HvlpAffinityToHvProcessorSet(PpmPerfCoreParkingMask, v4, 4080LL);
    }
    HvcallInitiateHypercall(((v3 + 7) << 14) & 0x3FE0000 | 9);
    return HvlpReleaseHypercallPage((__int64)&v5);
  }
  else
  {
    v0 = HvlpAffinityToHvProcessorSet(PpmPerfCoreParkingMask, v8, 96LL);
    return HvcallFastExtended(((v0 + 7) << 14) & 0x3FE0000 | 0x10009u, (__int64)v8, v0 + 16, 0LL, 0);
  }
}
