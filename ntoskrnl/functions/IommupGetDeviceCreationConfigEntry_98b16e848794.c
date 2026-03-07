__int64 *__fastcall IommupGetDeviceCreationConfigEntry(__int64 *a1)
{
  __int64 *result; // rax

  result = a1;
  while ( *((_DWORD *)result + 4) != 3 )
  {
    result = (__int64 *)*result;
    if ( result == a1 )
      return 0LL;
  }
  return result;
}
