char __fastcall IS_USERCRIT_OWNED_SHAREDONLY(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // bl

  v2 = 0;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE(a1) )
    return IS_USERCRIT_OWNED_AT_ALL(v1);
  return v2;
}
