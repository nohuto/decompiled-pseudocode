__int64 __fastcall HUBDSM_CheckingIfDeviceHasReceivedFirstStart(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1636LL) & 0x4000) != 0 ? 4089 : 4061;
}
