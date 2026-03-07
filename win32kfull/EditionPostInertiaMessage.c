__int64 __fastcall EditionPostInertiaMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int16 *a5)
{
  if ( a5 )
    return PostThreadMessage(a5, a2, a3, ((unsigned __int64)WORD2(a4) << 16) | (unsigned __int16)a4);
  else
    return PostMessage(
             *(_QWORD *)(a1 + 80),
             a2,
             a3,
             (__int128 *)((WORD2(a4) << 16) | (unsigned __int64)(unsigned __int16)a4));
}
