__int64 __fastcall VIDMM_LINEAR_POOL::FreeMemoryBlocks(VIDMM_LINEAR_POOL *a1, char a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx

  if ( a2 != 7 )
    return 3221225485LL;
  v5 = (_QWORD *)((char *)a1 + 136);
  v6 = (_QWORD *)*((_QWORD *)a1 + 17);
  do
  {
    if ( v6 == v5 )
    {
      WdLogSingleEntry5(0LL, 275LL, 23LL, 7LL, *a4, a4[1]);
      return 3221225485LL;
    }
    v7 = v6 - 3;
    v6 = (_QWORD *)*v6;
  }
  while ( *((_BYTE *)v7 + 56) != 7 || *v7 != *a4 );
  v9 = v7[1];
  v10 = a4[1];
  if ( v9 != v10 )
    WdLogSingleEntry5(0LL, 275LL, 23LL, v9, v10, 0LL);
  VIDMM_LINEAR_POOL::Free(a1, (struct _VIDMM_POOL_BLOCK *)v7);
  return 0LL;
}
