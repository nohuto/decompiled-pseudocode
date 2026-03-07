errno_t __cdecl strncat_s(char *a1, rsize_t SizeInBytes, const char *Src, rsize_t MaxCount)
{
  rsize_t v4; // r11
  char *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  char v9; // al
  signed __int64 v10; // r8
  char v11; // al

  v4 = SizeInBytes;
  v5 = a1;
  if ( MaxCount )
  {
    if ( !a1 )
      goto LABEL_4;
  }
  else if ( !a1 )
  {
    if ( SizeInBytes )
    {
LABEL_4:
      xHalTimerWatchdogStop();
      return 22;
    }
    return 0;
  }
  if ( !SizeInBytes )
    goto LABEL_4;
  if ( MaxCount && !Src )
  {
LABEL_11:
    v7 = 22;
LABEL_28:
    *v5 = 0;
    xHalTimerWatchdogStop();
    return v7;
  }
  while ( *a1 )
  {
    ++a1;
    if ( !--SizeInBytes )
      goto LABEL_11;
  }
  if ( MaxCount == -1LL )
  {
    v8 = a1 - Src;
    do
    {
      v9 = *Src;
      Src[v8] = *Src;
      ++Src;
      if ( !v9 )
        break;
      --SizeInBytes;
    }
    while ( SizeInBytes );
  }
  else
  {
    if ( MaxCount )
    {
      v10 = Src - a1;
      while ( 1 )
      {
        v11 = a1[v10];
        *a1++ = v11;
        if ( !v11 )
          return 0;
        if ( --SizeInBytes )
        {
          if ( --MaxCount )
            continue;
        }
        if ( MaxCount )
          goto LABEL_24;
        break;
      }
    }
    *a1 = 0;
  }
LABEL_24:
  if ( !SizeInBytes )
  {
    if ( MaxCount == -1LL )
    {
      v5[v4 - 1] = 0;
      return 80;
    }
    v7 = 34;
    goto LABEL_28;
  }
  return 0;
}
