__int64 __fastcall ExpRemoveEntryListAndClear2(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdx

  result = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v2 = (_QWORD *)a1[1], (_QWORD *)*v2 != a1) )
    __fastfail(3u);
  *v2 = result;
  *(_QWORD *)(result + 8) = v2;
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
