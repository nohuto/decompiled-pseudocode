bool __fastcall DMMVIDPNSOURCEMODE::operator==(__int64 a1, __int64 a2)
{
  int v2; // r8d

  v2 = *(_DWORD *)(a1 + 72);
  if ( v2 != *(_DWORD *)(a2 + 72) )
    return 0;
  if ( v2 != 1 )
  {
    if ( v2 == 2 )
      return *(_DWORD *)(a1 + 76) == *(_DWORD *)(a2 + 76);
    if ( (unsigned int)(v2 - 3) >= 2 )
    {
      if ( (unsigned int)(v2 - 1) <= 3 )
        WdLogSingleEntry0(1LL);
      return 0;
    }
  }
  return operator==((_DWORD *)(a1 + 76), (_DWORD *)(a2 + 76));
}
