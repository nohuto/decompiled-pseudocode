__int64 __fastcall KdpSysWriteIoSpace(
        int a1,
        int a2,
        int a3,
        unsigned __int16 a4,
        unsigned __int8 *a5,
        int a6,
        _DWORD *a7)
{
  unsigned int v7; // r10d

  v7 = 0;
  if ( a1 == 1 && !a2 && a3 == 1 )
  {
    switch ( a6 )
    {
      case 1:
        __outbyte(a4, *a5);
        *a7 = 1;
        return v7;
      case 2:
        if ( (a4 & 1) == 0 )
        {
          __outword(a4, *(_WORD *)a5);
          *a7 = 2;
          return v7;
        }
        break;
      case 4:
        if ( (a4 & 3) == 0 )
        {
          __outdword(a4, *(_DWORD *)a5);
          *a7 = 4;
          return v7;
        }
        break;
      default:
        v7 = -1073741811;
        *a7 = 0;
        return v7;
    }
    return (unsigned int)-2147483646;
  }
  *a7 = 0;
  return 3221225473LL;
}
