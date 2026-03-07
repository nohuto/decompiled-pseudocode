__int64 __fastcall _SetCloseDefault(__int64 **a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = (__int64)a1[2];
  if ( !v2 )
    v2 = **a1;
  result = SetMenuDefaultItem(v2, 0xF060u, 0);
  if ( !(_DWORD)result )
  {
    v4 = (__int64)a1[2];
    if ( !v4 )
      v4 = **a1;
    result = SetMenuDefaultItem(v4, 0x8060u, 0);
    if ( !(_DWORD)result )
    {
      v5 = (__int64)a1[2];
      if ( !v5 )
        v5 = **a1;
      return SetMenuDefaultItem(v5, 0xC070u, 0);
    }
  }
  return result;
}
