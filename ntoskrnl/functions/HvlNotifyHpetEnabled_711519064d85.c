__int64 HvlNotifyHpetEnabled()
{
  PHYSICAL_ADDRESS *v0; // rax
  __int16 v1; // bx
  __int128 v3; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+30h] [rbp-78h]
  __int64 v5; // [rsp+38h] [rbp-70h]
  _BYTE v6[80]; // [rsp+40h] [rbp-68h] BYREF

  v4 = 0LL;
  LODWORD(v5) = 0;
  v3 = 0LL;
  v0 = HvlpAcquireHypercallPage((__int64)&v3, 1, (__int64)v6, 40LL);
  v0->LowPart = 8;
  LOBYTE(v0[1].LowPart) = 1;
  v1 = HvcallInitiateHypercall(111);
  HvlpReleaseHypercallPage((__int64)&v3);
  return v1 != 0 ? 0xC0000001 : 0;
}
