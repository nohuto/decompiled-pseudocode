__int64 __fastcall CmpKeyEnumStackStart(__int64 a1, __int16 a2)
{
  __int64 v4; // rbp
  __int64 Pool; // rax
  __int64 v6; // rsi

  if ( a2 >= 2 )
  {
    LOWORD(v4) = a2 - 1;
    Pool = CmpAllocatePool(256LL, ((__int64)a2 << 7) - 128, 943082819LL);
    v6 = 0LL;
    *(_QWORD *)(a1 + 344) = Pool;
    if ( !Pool )
      return 3221225626LL;
    v4 = (unsigned __int16)v4;
    do
    {
      CmpKeyEnumStackEntryInitialize((_QWORD *)(v6 + *(_QWORD *)(a1 + 344)));
      v6 += 128LL;
      --v4;
    }
    while ( v4 );
  }
  *(_WORD *)a1 = a2;
  return CmpStartKeyNodeStack(a1 + 8, a2);
}
