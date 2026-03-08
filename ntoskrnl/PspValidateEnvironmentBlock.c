/*
 * XREFs of PspValidateEnvironmentBlock @ 0x14075A170
 * Callers:
 *     PspCaptureUserProcessParameters @ 0x140759A00 (PspCaptureUserProcessParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspValidateEnvironmentBlock(__int16 *a1, __int64 *a2)
{
  __int64 v3; // r8
  unsigned int v4; // r11d
  __int16 v5; // ax
  char v6; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  char v9; // al

  v3 = *a2;
  if ( !*a1 )
  {
    v3 -= 2LL;
    ++a1;
  }
  if ( !v3 )
    return 3221225485LL;
  v4 = 0;
  while ( 1 )
  {
    v5 = *a1;
    v6 = 0;
    ++a1;
    v7 = 0LL;
    v8 = 0LL;
    v3 -= 2LL;
    if ( !v3 )
      goto LABEL_18;
    do
    {
      if ( !v5 )
        break;
      if ( v5 == 61 )
      {
        ++v7;
        if ( !v8 )
          v6 = 1;
      }
      v5 = *a1;
      ++v8;
      ++a1;
      v3 -= 2LL;
    }
    while ( v3 );
    if ( !v8 )
    {
LABEL_18:
      if ( !v5 )
        break;
    }
    if ( !v7 || v6 && v7 < 2 )
      return 3221225485LL;
    v9 = 0;
    if ( !v3 )
      goto LABEL_13;
  }
  if ( v3 )
    *a2 -= v3;
  v9 = 1;
LABEL_13:
  if ( !v9 )
    return (unsigned int)-1073741811;
  return v4;
}
