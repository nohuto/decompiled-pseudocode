__int64 *__fastcall ExpAddFastOwnerEntryToThreadList2(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  if ( a3 )
    result = (__int64 *)(a1 + 1680);
  else
    result = (__int64 *)(a1 + 1656);
  v5 = *result;
  if ( *(__int64 **)(*result + 8) != result )
    __fastfail(3u);
  *a4 = v5;
  a4[1] = result;
  *(_QWORD *)(v5 + 8) = a4;
  *result = (__int64)a4;
  return result;
}
