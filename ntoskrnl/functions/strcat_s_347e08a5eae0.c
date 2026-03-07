errno_t __cdecl strcat_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  char *v3; // r9
  errno_t v4; // ebx
  signed __int64 v6; // r9
  char v7; // al

  if ( a1 && SizeInBytes )
  {
    if ( Src )
    {
      v3 = a1;
      while ( *v3 )
      {
        ++v3;
        if ( !--SizeInBytes )
          goto LABEL_7;
      }
      v6 = v3 - Src;
      while ( 1 )
      {
        v7 = *Src;
        Src[v6] = *Src;
        ++Src;
        if ( !v7 )
          return 0;
        if ( !--SizeInBytes )
        {
          v4 = 34;
          goto LABEL_8;
        }
      }
    }
    else
    {
LABEL_7:
      v4 = 22;
LABEL_8:
      *a1 = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
