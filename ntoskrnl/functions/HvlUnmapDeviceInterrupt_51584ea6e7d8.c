__int64 __fastcall HvlUnmapDeviceInterrupt(PHYSICAL_ADDRESS a1, __int128 *a2)
{
  PHYSICAL_ADDRESS *v4; // rax
  __int128 v5; // xmm0
  __int128 v7; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+30h] [rbp-78h]
  __int64 v9; // [rsp+38h] [rbp-70h]
  _BYTE v10[80]; // [rsp+40h] [rbp-68h] BYREF

  v8 = 0LL;
  LODWORD(v9) = 0;
  v7 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v7, 1, (__int64)v10, 40LL);
  v4->QuadPart = -1LL;
  v4[1] = a1;
  v5 = *a2;
  v4[4].LowPart = 0;
  *(_OWORD *)&v4[2].LowPart = v5;
  LOWORD(a1.LowPart) = HvcallInitiateHypercall(125);
  HvlpReleaseHypercallPage((__int64)&v7);
  return HvlpHvToNtStatus(a1.LowPart);
}
