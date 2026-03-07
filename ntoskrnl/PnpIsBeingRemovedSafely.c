bool __fastcall PnpIsBeingRemovedSafely(_DWORD *a1, int a2)
{
  int v3; // ecx

  if ( !a2 || (unsigned int)(a2 - 1) > 1 || (a1[140] & 0x200) != 0 )
    return 1;
  v3 = a1[75];
  if ( (unsigned int)(v3 - 784) <= 1 )
    v3 = a1[76];
  return (unsigned int)(v3 - 777) > 1 && (unsigned int)(v3 - 780) > 1;
}
