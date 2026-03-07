__int64 __fastcall HUBDSM_CheckingIfDeviceNeedsResetOnResumeInSxOnEnabled(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1644LL) & 4) != 0 ? 4089 : 4061;
}
