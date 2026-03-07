char __fastcall IS_USERCRIT_OWNED_SHAREDONLY(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // bl

  v8 = 0;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3, a4) )
    return IS_USERCRIT_OWNED_AT_ALL(v5, v4, v6, v7);
  return v8;
}
