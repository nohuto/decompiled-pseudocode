/*
 * XREFs of MatchObjType @ 0x1C004C064
 * Callers:
 *     ValidateTarget @ 0x1C004D4F0 (ValidateTarget.c)
 *     CopyObject @ 0x1C0056550 (CopyObject.c)
 * Callees:
 *     <none>
 */

char __fastcall MatchObjType(int a1, int a2)
{
  char v2; // r8

  v2 = 0;
  if ( a1 == a2 )
    return 1;
  if ( a1 == 14 )
  {
    if ( a2 == 1 )
      return 1;
LABEL_10:
    a1 = 134;
    goto LABEL_12;
  }
  if ( a1 != 1 && a1 != 2 && a1 != 3 && a1 != 4 )
  {
    if ( a1 != 5 )
      goto LABEL_13;
    goto LABEL_10;
  }
  a1 = 133;
LABEL_12:
  if ( a1 == a2 )
    return 1;
LABEL_13:
  if ( a2 == 135 && (unsigned int)(a1 - 133) <= 1 )
    return 1;
  if ( !a1 )
  {
    if ( a2 == 134 )
      return v2;
    return 1;
  }
  if ( !a2 )
    return 1;
  return v2;
}
