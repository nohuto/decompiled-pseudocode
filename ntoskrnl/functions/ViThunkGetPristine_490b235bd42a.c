__int64 __fastcall ViThunkGetPristine(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  bool v4; // zf
  __int64 v5; // r9

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  while ( *(_QWORD *)a2 )
  {
    if ( (*(_DWORD *)(a2 + 32) & 4) != 0 )
    {
      v4 = a1 == *(_QWORD *)(a2 + 8);
    }
    else
    {
      v5 = **(_QWORD **)(a2 + 40);
      if ( !v5 )
        goto LABEL_8;
      v4 = a1 == v5;
    }
    if ( v4 )
      return *(_QWORD *)(a2 + 24);
LABEL_8:
    a2 += 56LL;
  }
  return v2;
}
