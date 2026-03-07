__int64 __fastcall ExpFindFastOwnerEntryForThread2(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax
  __int64 *v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // r9
  char v11; // r10

  if ( (*a2 & 1) != 0 && a2[10] == a1 )
    return (__int64)(a2 + 8);
  v8 = (__int64 *)(a1 + 1656);
  result = 0LL;
  v9 = *(__int64 **)(a1 + 1656);
  v10 = 0LL;
  while ( v9 != v8 )
  {
    v11 = *((_BYTE *)v9 + 37);
    if ( (v11 & 2) == 0 && (_QWORD *)v9[3] == a2 && (!a4 || (v11 & 1) != 0) )
      return (__int64)v9;
    v9 = (__int64 *)*v9;
    if ( ++v10 > a6 )
      return 1LL;
  }
  return result;
}
