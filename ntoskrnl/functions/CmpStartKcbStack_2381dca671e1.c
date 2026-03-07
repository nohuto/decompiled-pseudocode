__int64 __fastcall CmpStartKcbStack(__int64 a1, __int16 a2)
{
  __int64 Pool; // rax
  __int64 result; // rax

  Pool = 0LL;
  if ( a2 > 1 )
  {
    Pool = CmpAllocatePool(256LL, 8LL * (unsigned int)(a2 - 1), 892751171LL);
    if ( !Pool )
      return 3221225626LL;
  }
  *(_QWORD *)(a1 + 24) = Pool;
  *(_WORD *)(a1 + 2) = -1;
  result = 0LL;
  *(_WORD *)a1 = a2;
  return result;
}
