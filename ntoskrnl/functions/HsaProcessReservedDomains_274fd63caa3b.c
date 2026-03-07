__int64 __fastcall HsaProcessReservedDomains(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // r9
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rax

  v3 = a2;
  if ( a2 != **(_DWORD **)(a1 + 216) )
    return 3221225485LL;
  v5 = 0LL;
  if ( (_DWORD)v3 )
  {
    v6 = v3;
    do
    {
      v7 = *a3;
      v5 += 16LL;
      ++a3;
      *(_QWORD *)(*(_QWORD *)(a1 + 216) + v5) = v7;
      --v6;
    }
    while ( v6 );
  }
  return 0LL;
}
