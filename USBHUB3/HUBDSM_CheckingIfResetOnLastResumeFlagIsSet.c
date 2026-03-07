__int64 __fastcall HUBDSM_CheckingIfResetOnLastResumeFlagIsSet(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 16LL) + 32LL) & 0x40) != 0 ? 4089 : 4061;
}
