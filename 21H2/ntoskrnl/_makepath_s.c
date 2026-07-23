/*
 * XREFs of _makepath_s @ 0x1403D7110
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl makepath_s(
        char *PathResult,
        size_t SizeInWords,
        const char *Drive,
        const char *Dir,
        const char *Filename,
        const char *Ext)
{
  __int64 v7; // r11
  char *v8; // r10
  char v9; // al
  char v10; // al
  const char *v11; // rcx
  char v12; // r8
  const char *v13; // rcx
  errno_t v14; // ebx

  if ( !PathResult || !SizeInWords )
  {
    v14 = 22;
    goto LABEL_33;
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
    while ( ++v7 < SizeInWords )
    {
      v9 = *Dir++;
      *v8++ = v9;
      if ( !*Dir )
      {
        v10 = *(Dir - 1);
        if ( v10 != 47 && v10 != 92 )
        {
          if ( ++v7 >= SizeInWords )
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
  if ( !Ext )
    goto LABEL_29;
  v12 = *Ext;
  if ( !*Ext || *Ext == 46 )
  {
LABEL_25:
    if ( v12 )
    {
      v13 = (const char *)(Ext - v8);
      while ( ++v7 < SizeInWords )
      {
        *v8 = v8[(_QWORD)v13];
        if ( !(++v8)[(_QWORD)v13] )
          goto LABEL_29;
      }
      goto LABEL_30;
    }
LABEL_29:
    if ( v7 + 1 <= SizeInWords )
    {
      *v8 = 0;
      return 0;
    }
    goto LABEL_30;
  }
  if ( ++v7 < SizeInWords )
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
