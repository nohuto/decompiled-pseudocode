__int64 __fastcall HvlLpReadCpuid(ULONG a1, ULONG a2, ULONG *a3, LONG *a4, ULONG *a5, LONG *a6)
{
  PHYSICAL_ADDRESS *v10; // rbx
  PHYSICAL_ADDRESS *v11; // rdi
  __int16 v12; // ax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+58h] [rbp-8h]

  v18 = 0LL;
  LODWORD(v19) = 0;
  v15 = 0LL;
  LODWORD(v16) = 0;
  v17 = 0LL;
  v14 = 0LL;
  v10 = HvlpAcquireHypercallPage((__int64)&v17, 1, 0LL, 16LL);
  v11 = HvlpAcquireHypercallPage((__int64)&v14, 2, 0LL, 16LL);
  v10[1].HighPart = 0;
  v10->LowPart = a1;
  v10->HighPart = 0x10000;
  v10[1].LowPart = a2;
  v12 = HvcallInitiateHypercall(136);
  *a3 = v11->LowPart;
  *a4 = v11->HighPart;
  LODWORD(v10) = v12 != 0 ? 0xC0000001 : 0;
  *a5 = v11[1].LowPart;
  *a6 = v11[1].HighPart;
  HvlpReleaseHypercallPage((__int64)&v14);
  HvlpReleaseHypercallPage((__int64)&v17);
  return (unsigned int)v10;
}
