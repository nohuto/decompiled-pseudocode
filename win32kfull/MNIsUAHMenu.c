__int64 __fastcall MNIsUAHMenu(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( gihmodUserApiHook >= 0 )
    return (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) & 0x800) != 0;
  return v1;
}
