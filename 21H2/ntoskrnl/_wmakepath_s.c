/*
 * XREFs of _wmakepath_s @ 0x1403D7820
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wmakepath_s(
        wchar_t *PathResult,
        size_t SIZE,
        const wchar_t *Drive,
        const wchar_t *Dir,
        const wchar_t *Filename,
        const wchar_t *Ext)
{
  __int64 v7; // r11
  wchar_t *v8; // r10
  wchar_t v9; // ax
  __int16 v10; // ax
  char *v11; // rcx
  wchar_t v12; // r8
  char *v13; // rcx
  errno_t v14; // ebx

  if ( !PathResult || !SIZE )
  {
    v14 = 22;
    goto LABEL_33;
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
    while ( ++v7 < SIZE )
    {
      v9 = *Dir++;
      *v8++ = v9;
      if ( !*Dir )
      {
        v10 = *(Dir - 1);
        if ( v10 != 47 && v10 != 92 )
        {
          if ( ++v7 >= SIZE )
            goto LABEL_30;
          *v8++ = 92;
        }
        goto LABEL_15;
      }
    }
    goto LABEL_30;
  }
LABEL_15:
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
  if ( !Ext )
    goto LABEL_29;
  v12 = *Ext;
  if ( !*Ext || *Ext == 46 )
  {
LABEL_25:
    if ( v12 )
    {
      v13 = (char *)((char *)Ext - (char *)v8);
      while ( ++v7 < SIZE )
      {
        *v8 = *(wchar_t *)((char *)v8 + (_QWORD)v13);
        if ( !*(wchar_t *)((char *)++v8 + (_QWORD)v13) )
          goto LABEL_29;
      }
      goto LABEL_30;
    }
LABEL_29:
    if ( v7 + 1 <= SIZE )
    {
      *v8 = 0;
      return 0;
    }
    goto LABEL_30;
  }
  if ( ++v7 < SIZE )
  {
    *v8++ = 46;
    v12 = *Ext;
    goto LABEL_25;
  }
LABEL_30:
  *PathResult = 0;
  v14 = 34;
LABEL_33:
  xHalTimerWatchdogStop();
  return v14;
}
