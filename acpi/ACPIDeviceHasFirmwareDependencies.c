bool __fastcall ACPIDeviceHasFirmwareDependencies(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1008) & 0x40) != 0 || *(_QWORD *)(a1 + 648) != 0LL;
}
