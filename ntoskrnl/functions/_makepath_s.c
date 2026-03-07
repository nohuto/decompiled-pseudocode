errno_t __cdecl makepath_s(
        char *PathResult,
        size_t SizeInWords,
        const char *Drive,
        const char *Dir,
        const char *Filename,
        const char *Ext)
{
  size_t v7; // r11
  char *v8; // r10
  const char *v9; // rcx
  char v10; // al
  const char *v11; // rcx
  const char *v12; // rcx

  if ( !PathResult || !SizeInWords )
  {
    xHalTimerWatchdogStop();
    return 22;
  }
  v7 = 0LL;
  v8 = PathResult;
  if ( Drive && *Drive )
  {
    v7 = 2LL;
    if ( SizeInWords <= 2 )
      goto LABEL_30;
    *PathResult = *Drive;
    PathResult[1] = 58;
    v8 = PathResult + 2;
  }
  if ( Dir && *Dir )
  {
    while ( 1 )
    {
      ++v7;
      v9 = Dir;
      if ( v7 >= SizeInWords )
        goto LABEL_30;
      v10 = *Dir++;
      *v8++ = v10;
      if ( !*Dir )
      {
        if ( *v9 != 47 && *v9 != 92 )
        {
          if ( ++v7 >= SizeInWords )
            goto LABEL_30;
          *v8++ = 92;
        }
        break;
      }
    }
  }
  if ( Filename && *Filename )
  {
    v11 = (const char *)(Filename - v8);
    while ( ++v7 < SizeInWords )
    {
      *v8 = v8[(_QWORD)v11];
      if ( !(++v8)[(_QWORD)v11] )
        goto LABEL_20;
    }
    goto LABEL_30;
  }
LABEL_20:
  if ( Ext )
  {
    if ( !*Ext || *Ext == 46 )
    {
LABEL_25:
      if ( *Ext )
      {
        v12 = (const char *)(Ext - v8);
        while ( ++v7 < SizeInWords )
        {
          *v8 = v8[(_QWORD)v12];
          if ( !(++v8)[(_QWORD)v12] )
            goto LABEL_29;
        }
        goto LABEL_30;
      }
      goto LABEL_29;
    }
    if ( ++v7 < SizeInWords )
    {
      *v8++ = 46;
      goto LABEL_25;
    }
LABEL_30:
    *PathResult = 0;
    xHalTimerWatchdogStop();
    return 34;
  }
LABEL_29:
  if ( v7 + 1 > SizeInWords )
    goto LABEL_30;
  *v8 = 0;
  return 0;
}
