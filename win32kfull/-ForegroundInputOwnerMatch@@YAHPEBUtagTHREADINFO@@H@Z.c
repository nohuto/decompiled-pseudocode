bool __fastcall ForegroundInputOwnerMatch(const struct tagTHREADINFO *a1, int a2)
{
  bool result; // al
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ecx

  result = 0;
  v4 = *(_QWORD *)(gpqForeground + 104LL);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 424);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)(gpqForeground + 96LL);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 424);
  else
    v7 = 0LL;
  v8 = *((_QWORD *)a1 + 53);
  if ( v5 == v8 || v7 == v8 )
    return 1;
  v9 = *(_DWORD *)(v8 + 868);
  if ( a2 && v9 )
  {
    if ( *(_DWORD *)(gpqForeground + 436LL) != v9 && (!v5 || *(_DWORD *)(v5 + 868) != v9) )
    {
      if ( v7 )
        return *(_DWORD *)(v7 + 868) == v9;
      return result;
    }
    return 1;
  }
  return result;
}
