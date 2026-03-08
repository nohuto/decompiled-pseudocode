/*
 * XREFs of IsArrayType @ 0x1409D1A10
 * Callers:
 *     LocalGetConditionForString @ 0x1409D1B24 (LocalGetConditionForString.c)
 * Callees:
 *     <none>
 */

char __fastcall IsArrayType(unsigned __int8 a1)
{
  char v1; // r8
  bool v2; // zf
  int v3; // edx
  int v4; // edx
  int v5; // edx

  v1 = 0;
  if ( a1 > 0x8Eu )
  {
    v3 = a1 - 143;
    v2 = a1 == 143;
  }
  else
  {
    if ( a1 == 142 || a1 == 134 )
      return 1;
    v3 = a1 - 136;
    v2 = a1 == 136;
  }
  if ( v2 )
    return 1;
  v4 = v3 - 1;
  if ( !v4 )
    return 1;
  v5 = v4 - 1;
  if ( !v5 || (unsigned int)(v5 - 1) <= 1 )
    return 1;
  return v1;
}
