__int64 *__fastcall DifGetAPIThunkContextById(int a1)
{
  __int64 *i; // rax

  for ( i = (__int64 *)DifAPIThunkContextHead; ; i = (__int64 *)*i )
  {
    if ( i == &DifAPIThunkContextHead )
      return 0LL;
    if ( a1 == *((_DWORD *)i - 2) )
      break;
  }
  return i - 2;
}
