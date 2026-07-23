/*
 * XREFs of PspValidateEnvironmentBlock @ 0x140696A90
 * Callers:
 *     PspCaptureUserProcessParameters @ 0x14069635C (PspCaptureUserProcessParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspValidateEnvironmentBlock(__int16 *a1, __int64 *a2)
{
  __int64 v2; // r8
  char v3; // r11
  __int16 v5; // ax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  char v8; // r10

  v2 = *a2;
  v3 = 0;
  if ( !*a1 )
  {
    v2 -= 2LL;
    ++a1;
  }
  if ( !v2 )
    return 3221225485LL;
  do
  {
    v5 = *a1;
    v6 = 0LL;
    ++a1;
    v7 = 0LL;
    v8 = 0;
    v2 -= 2LL;
    if ( v2 )
    {
      do
      {
        if ( !v5 )
          break;
        if ( v5 == 61 )
        {
          ++v6;
          if ( !v7 )
            v8 = 1;
        }
        v5 = *a1;
        ++v7;
        ++a1;
        v2 -= 2LL;
      }
      while ( v2 );
      if ( v7 )
        goto LABEL_16;
    }
    if ( v5 )
    {
LABEL_16:
      if ( !v6 || v8 && v6 < 2 )
        return 3221225485LL;
    }
    else
    {
      if ( v2 )
      {
        *a2 -= v2;
        v2 = 0LL;
      }
      v3 = 1;
    }
  }
  while ( v2 );
  if ( v3 )
    return 0LL;
  else
    return 3221225485LL;
}
