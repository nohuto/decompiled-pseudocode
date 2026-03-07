__int64 __fastcall NVMeReservationReleaseCommand(__int64 a1, __int64 a2)
{
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  GetSrbDataBuffer(a2, v5);
  v5[0] = 0LL;
  NVMeAllocateDmaBuffer(a1, 8u);
  *(_BYTE *)(a2 + 3) = 38;
  return 3238002691LL;
}
