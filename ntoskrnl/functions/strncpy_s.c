errno_t __cdecl strncpy_s(char *a1, rsize_t SizeInBytes, const char *Src, rsize_t MaxCount)
{
  rsize_t v4; // r10
  errno_t v6; // ebx
  char *v7; // r11
  signed __int64 v8; // r11
  char v9; // al
  signed __int64 v10; // r8
  char v11; // al
  rsize_t v12; // rbx

  v4 = SizeInBytes;
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
  if ( !MaxCount )
  {
    *a1 = 0;
    return 0;
  }
  if ( Src )
  {
    v7 = a1;
    if ( MaxCount == -1LL )
    {
      v8 = a1 - Src;
      while ( 1 )
      {
        v9 = *Src;
        Src[v8] = *Src;
        ++Src;
        if ( !v9 )
          break;
        if ( !--SizeInBytes )
          goto LABEL_25;
      }
    }
    else
    {
      v10 = Src - a1;
      while ( 1 )
      {
        v11 = v7[v10];
        v12 = MaxCount;
        *v7++ = v11;
        if ( !v11 )
          break;
        if ( --SizeInBytes )
        {
          if ( --MaxCount )
            continue;
        }
        MaxCount = v12 - 1;
        if ( !SizeInBytes )
          MaxCount = v12;
        if ( !MaxCount )
          *v7 = 0;
LABEL_25:
        if ( SizeInBytes )
          return 0;
        if ( MaxCount == -1LL )
        {
          a1[v4 - 1] = 0;
          return 80;
        }
        v6 = 34;
        goto LABEL_29;
      }
    }
    return 0;
  }
  v6 = 22;
LABEL_29:
  *a1 = 0;
  xHalTimerWatchdogStop();
  return v6;
}
