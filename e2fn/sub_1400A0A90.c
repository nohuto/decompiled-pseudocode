bool __fastcall sub_1400A0A90(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 i; // rax

  v2 = a1 + 24;
  if ( *(_QWORD *)(a1 + 56) )
  {
    v3 = a1 + 24;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 32);
    v2 = v3;
  }
  for ( i = *(_QWORD *)(a1 + 32); i != v2; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_QWORD *)(i + 16) == a2 )
      return i != v3;
  }
  i = v2;
  return i != v3;
}
