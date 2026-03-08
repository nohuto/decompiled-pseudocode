/*
 * XREFs of FindFilterOperatorClose @ 0x1407656E4
 * Callers:
 *     FilterEvalStrict @ 0x140762048 (FilterEvalStrict.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindFilterOperatorClose(unsigned int a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  int v4; // r11d
  unsigned int v5; // r10d
  int v6; // eax

  v3 = 0;
  *a3 = 0;
  v4 = 0;
  if ( !a1 )
    return 3221225485LL;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(56LL * v5 + a2) & 0xFF00000;
    if ( v6 != 3145728 )
    {
      if ( v6 == 0x400000 )
        goto LABEL_12;
      if ( v6 != 0x100000 )
      {
        if ( v6 == 0x200000 )
          goto LABEL_12;
        if ( v6 != 5242880 )
        {
          if ( v6 != 6291456 )
            goto LABEL_9;
LABEL_12:
          ++v4;
          goto LABEL_9;
        }
      }
    }
    ++v3;
LABEL_9:
    if ( v3 == v4 )
      return 0LL;
    *a3 = ++v5;
    if ( v5 >= a1 )
      return 3221225485LL;
  }
}
