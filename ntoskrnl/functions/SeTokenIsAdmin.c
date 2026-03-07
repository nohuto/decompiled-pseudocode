BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  BOOLEAN v2; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = SepSidInToken((__int64)Token, 0LL, (__int64)SeAliasAdminsSid, 0LL, 0, 0);
  if ( v2 )
  {
    if ( SeTokenIsRestricted(Token) )
      return SepSidInToken((__int64)Token, 0LL, (__int64)SeAliasAdminsSid, 0LL, 1, 0);
  }
  return v2;
}
