_BOOL8 __fastcall MiProcessSuitableForCombining(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0xC00u) >= 0xC00 && !*(_QWORD *)(a1 + 1768) && !(unsigned int)MiIsStoreProcess(a1);
}
