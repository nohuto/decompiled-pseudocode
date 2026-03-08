/*
 * XREFs of RtlIsPartialPlaceholderFileInfo @ 0x1409BD350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlIsPartialPlaceholderFileInfo(int *a1, int a2, bool *a3)
{
  int v3; // eax
  __int64 result; // rax

  if ( a2 > 60 )
  {
    if ( a2 != 63 && a2 != 68 && a2 != 70 && (unsigned int)(a2 - 78) >= 2 )
      goto LABEL_13;
LABEL_16:
    v3 = a1[14];
    goto LABEL_17;
  }
  switch ( a2 )
  {
    case 60:
      goto LABEL_16;
    case 2:
    case 3:
      goto LABEL_7;
    case 35:
      v3 = *a1;
      goto LABEL_17;
  }
  if ( (unsigned int)(a2 - 37) <= 1 )
  {
LABEL_7:
    v3 = a1[14];
LABEL_17:
    *a3 = (v3 & 0x440000) != 0;
    return 0LL;
  }
LABEL_13:
  result = 3221225659LL;
  if ( a2 >= 82 )
    return 3221225475LL;
  return result;
}
