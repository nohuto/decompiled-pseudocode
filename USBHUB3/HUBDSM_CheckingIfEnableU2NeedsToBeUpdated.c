__int64 __fastcall HUBDSM_CheckingIfEnableU2NeedsToBeUpdated(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // ecx

  v1 = 4077;
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 960) + 2216LL);
  if ( (v2 & 0x20) != 0 )
  {
    if ( (v2 & 8) == 0 )
      return 4013;
  }
  else if ( (v2 & 8) != 0 )
  {
    return 4009;
  }
  return v1;
}
