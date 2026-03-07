__int64 __fastcall HUBDSM_CheckingIfDualRoleFeaturesSupported(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1632LL) & 0x40000) != 0 ? 4089 : 4061;
}
