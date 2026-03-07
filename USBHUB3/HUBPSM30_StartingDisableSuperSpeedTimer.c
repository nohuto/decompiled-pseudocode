__int64 __fastcall HUBPSM30_StartingDisableSuperSpeedTimer(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1312LL), -50000000LL, 0LL, 0LL);
  return 3013LL;
}
