__int64 __fastcall HvlSetQpcBias(PHYSICAL_ADDRESS a1)
{
  PHYSICAL_ADDRESS *v2; // rax
  __int128 v4; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+30h] [rbp-78h]
  __int64 v6; // [rsp+38h] [rbp-70h]
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF

  v5 = 0LL;
  LODWORD(v6) = 0;
  v4 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v4, 1, (__int64)v7, 40LL);
  v2->LowPart = 18;
  v2[1] = a1;
  LOWORD(a1.LowPart) = HvcallInitiateHypercall(111);
  HvlpReleaseHypercallPage((__int64)&v4);
  return LOWORD(a1.LowPart) != 0 ? 0xC0000001 : 0;
}
