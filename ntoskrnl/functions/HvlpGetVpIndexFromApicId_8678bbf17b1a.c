__int64 __fastcall HvlpGetVpIndexFromApicId(ULONG a1, ULONG *a2)
{
  PHYSICAL_ADDRESS *v4; // rbx
  ULONG LowPart; // esi
  PHYSICAL_ADDRESS *v6; // r14
  __int16 v7; // ax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+58h] [rbp-8h]

  v14 = 0LL;
  LODWORD(v15) = 0;
  v11 = 0LL;
  LODWORD(v12) = 0;
  v13 = 0LL;
  v10 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v13, 1, 0LL, 16LL);
  LowPart = 0;
  v6 = HvlpAcquireHypercallPage((__int64)&v10, 2, 0LL, 4LL);
  v4->QuadPart = -1LL;
  v4[1].QuadPart = 0LL;
  v4[2].LowPart = a1;
  v7 = HvcallInitiateHypercall(154);
  if ( !v7 )
    LowPart = v6->LowPart;
  *a2 = LowPart;
  v8 = v7 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage(&v10);
  HvlpReleaseHypercallPage(&v13);
  return v8;
}
