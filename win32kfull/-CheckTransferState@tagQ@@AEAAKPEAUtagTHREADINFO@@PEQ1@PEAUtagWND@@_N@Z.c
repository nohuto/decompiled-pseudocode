__int64 __fastcall tagQ::CheckTransferState(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v7; // rax

  v4 = a3;
  v5 = *(_QWORD *)(a3 + *(_QWORD *)(a2 + 432));
  if ( !v5 || *(_QWORD *)(v5 + 16) != a2 )
    return 0LL;
  if ( *(_QWORD *)(v4 + a1) )
    return 1LL;
  if ( gpqForeground )
  {
    if ( a4 )
    {
      v7 = *(_QWORD *)(gpqForeground + v4);
      if ( v7 )
      {
        if ( v5 != v7 )
          return 1LL;
      }
    }
  }
  return 2LL;
}
