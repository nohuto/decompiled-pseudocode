__int64 __fastcall EditionCommitMousePosAndMove(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        LARGE_INTEGER *a11)
{
  __int64 *v14; // rbx
  unsigned int v15; // eax

  if ( *(_DWORD *)a4 == 2 )
    v14 = *(__int64 **)(a4 + 8);
  else
    v14 = 0LL;
  v15 = UpconvertTime(a5, a2, a3, a4);
  return xxxMoveEventAbsolute(*a1, a1[1], a2, v14, a3, v15, a6, a7, a8, a9, a11);
}
