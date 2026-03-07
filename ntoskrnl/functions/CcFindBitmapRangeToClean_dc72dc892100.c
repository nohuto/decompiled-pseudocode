__int64 *__fastcall CcFindBitmapRangeToClean(__int64 a1, signed __int64 a2)
{
  __int64 *v2; // r8
  __int64 *i; // rcx

  *(_QWORD *)(a1 + 40) = -1LL;
  v2 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); ; i = (__int64 *)*i )
  {
    if ( i == v2 )
    {
      a2 = 0LL;
      continue;
    }
    if ( a2 <= i[2] + *((unsigned int *)i + 7) && *((_DWORD *)i + 8) )
      break;
  }
  return i;
}
