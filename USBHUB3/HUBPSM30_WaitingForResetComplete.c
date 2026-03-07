__int64 __fastcall HUBPSM30_WaitingForResetComplete(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1312LL), -30000000LL, 0LL, 0LL);
  return 1000LL;
}
