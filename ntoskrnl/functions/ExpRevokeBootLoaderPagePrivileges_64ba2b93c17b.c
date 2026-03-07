_UNKNOWN **__fastcall ExpRevokeBootLoaderPagePrivileges(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 *v2; // rsi
  __int64 *i; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = (__int64 *)(a1 + 32);
  v6 = 0uLL;
  for ( i = *(__int64 **)(a1 + 32); i != v2; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 6) == 4 )
    {
      v4 = i[4];
      v5 = i[5] + v4 - 1;
      while ( v4 <= v5 )
        result = (_UNKNOWN **)KeSetPagePrivilege(v4++, &v6, 16);
    }
  }
  return result;
}
