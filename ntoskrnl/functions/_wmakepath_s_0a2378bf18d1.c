errno_t __cdecl wmakepath_s(
        wchar_t *PathResult,
        size_t SIZE,
        const wchar_t *Drive,
        const wchar_t *Dir,
        const wchar_t *Filename,
        const wchar_t *Ext)
{
  size_t v7; // r11
  wchar_t *v8; // r10
  const wchar_t *v9; // rcx
  wchar_t v10; // ax
  char *v11; // rcx
  char *v12; // rcx

  if ( !PathResult || !SIZE )
  {
    xHalTimerWatchdogStop();
    return 22;
  }
  v7 = 0LL;
  v8 = PathResult;
  if ( Drive && *Drive )
  {
    v7 = 2LL;
    if ( SIZE <= 2 )
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
      if ( v7 >= SIZE )
        goto LABEL_30;
      v10 = *Dir++;
      *v8++ = v10;
      if ( !*Dir )
      {
        if ( *v9 != 47 && *v9 != 92 )
        {
          if ( ++v7 >= SIZE )
            goto LABEL_30;
          *v8++ = 92;
        }
        break;
      }
    }
  }
  if ( Filename && *Filename )
  {
    v11 = (char *)((char *)Filename - (char *)v8);
    while ( ++v7 < SIZE )
    {
      *v8 = *(wchar_t *)((char *)v8 + (_QWORD)v11);
      if ( !*(wchar_t *)((char *)++v8 + (_QWORD)v11) )
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
        v12 = (char *)((char *)Ext - (char *)v8);
        while ( ++v7 < SIZE )
        {
          *v8 = *(wchar_t *)((char *)v8 + (_QWORD)v12);
          if ( !*(wchar_t *)((char *)++v8 + (_QWORD)v12) )
            goto LABEL_29;
        }
        goto LABEL_30;
      }
      goto LABEL_29;
    }
    if ( ++v7 < SIZE )
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
  if ( v7 + 1 > SIZE )
    goto LABEL_30;
  *v8 = 0;
  return 0;
}
