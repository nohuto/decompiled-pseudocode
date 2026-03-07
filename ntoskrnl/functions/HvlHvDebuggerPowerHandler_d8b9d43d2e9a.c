__int64 __fastcall HvlHvDebuggerPowerHandler(char a1)
{
  PHYSICAL_ADDRESS *v2; // rax
  unsigned __int16 v3; // bx
  __int128 v5; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+30h] [rbp-78h]
  __int64 v7; // [rsp+38h] [rbp-70h]
  _BYTE v8[80]; // [rsp+40h] [rbp-68h] BYREF

  v6 = 0LL;
  LODWORD(v7) = 0;
  v5 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v5, 1, (__int64)v8, 40LL);
  v2->LowPart = 10;
  LOBYTE(v2[1].LowPart) = a1;
  v3 = HvcallInitiateHypercall(111);
  HvlpReleaseHypercallPage((__int64)&v5);
  return HvlpHvToNtStatus(v3);
}
