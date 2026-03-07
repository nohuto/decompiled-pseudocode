_QWORD *__fastcall MmLocateUnloadedDriver(unsigned __int64 a1)
{
  int v1; // edx
  _QWORD *result; // rax

  if ( !MmUnloadedDrivers )
    return 0LL;
  v1 = 0;
  if ( !MmLastUnloadedDriver )
    return 0LL;
  while ( 1 )
  {
    result = (char *)MmUnloadedDrivers + 40 * (unsigned int)(MmLastUnloadedDriver - v1 - 1);
    if ( result[1] )
    {
      if ( a1 >= result[2] && a1 < result[3] )
        break;
    }
    if ( ++v1 >= (unsigned int)MmLastUnloadedDriver )
      return 0LL;
  }
  return result;
}
