__int64 __fastcall NVMeReservationRegisterCommand(__int64 a1, __int64 a2)
{
  __int64 v5; // [rsp+38h] [rbp-8h] BYREF

  GetSrbDataBuffer(a2, &v5);
  v5 = 0LL;
  NVMeAllocateDmaBuffer(a1, 0x10u);
  *(_BYTE *)(a2 + 3) = 38;
  return 3238002691LL;
}
