__int64 __fastcall HUBPSM30_CheckingIfSuperSpeedShouldBeDisabled(__int64 a1)
{
  return (*(_DWORD *)(**(_QWORD **)(a1 + 960) + 40LL) & 0x800000) != 0 ? 3089 : 3005;
}
