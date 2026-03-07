__int64 __fastcall PpmInfoApplyMinMaxConstraint(unsigned int a1, __int64 a2)
{
  if ( a1 < *(_DWORD *)(a2 + 16) )
  {
    return *(unsigned int *)(a2 + 16);
  }
  else if ( a1 > *(_DWORD *)(a2 + 20) )
  {
    a1 = *(_DWORD *)(a2 + 16);
    if ( (*(_BYTE *)(a2 + 37) & 0x10) == 0 )
      return *(unsigned int *)(a2 + 20);
  }
  return a1;
}
