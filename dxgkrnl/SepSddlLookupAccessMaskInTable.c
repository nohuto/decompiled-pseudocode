__int64 __fastcall SepSddlLookupAccessMaskInTable(wchar_t *Str1, _DWORD *a2, _QWORD *a3)
{
  wchar_t **v4; // rdi
  unsigned int v7; // ebx
  __int64 result; // rax

  v4 = &off_1C013AF40;
  v7 = 0;
  while ( wcsnicmp_0(Str1, *v4, *((unsigned int *)v4 + 2)) )
  {
    ++v7;
    v4 += 2;
    if ( v7 >= 8 )
    {
      *a2 = 0;
      result = 0LL;
      *a3 = Str1;
      return result;
    }
  }
  result = 1LL;
  *a2 = *((_DWORD *)&off_1C013AF40 + 4 * v7 + 3);
  *a3 = &Str1[*((unsigned int *)&off_1C013AF40 + 4 * v7 + 2)];
  return result;
}
