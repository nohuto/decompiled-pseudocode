__int64 __fastcall LinkNodepGetFilter(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(v2 + 8) & 0x60) != 0 && *(_QWORD *)(v2 + 784) == a2 )
    return a1;
  v5 = *(_QWORD *)(v2 + 800);
  if ( v5 == v2 + 800 )
    return 0LL;
  v6 = v5 - 816;
  v7 = v5 - 816;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v7 + 768);
    if ( v8 )
    {
      result = LinkNodepGetFilter(v8, a2);
      if ( result )
        break;
    }
    v7 = *(_QWORD *)(v7 + 816) - 816LL;
    if ( v7 == v6 )
      return 0LL;
  }
  return result;
}
