/*
 * XREFs of ViIsContextIdValid @ 0x1409C9534
 * Callers:
 *     VfInsertContext @ 0x1405A0A80 (VfInsertContext.c)
 *     VfQueryDeviceContext @ 0x1405A0B50 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x1405A0B90 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x1405A0BD0 (VfQueryIrpContext.c)
 *     VfQueryThreadContext @ 0x1405A0C10 (VfQueryThreadContext.c)
 *     VfRemoveContext @ 0x1405A0C50 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

char __fastcall ViIsContextIdValid(int a1, int a2)
{
  char result; // al
  int v3; // ecx
  int v4; // ecx
  bool v5; // sf
  bool v6; // of

  result = 0;
  if ( a1 && (v3 = a1 - 1) != 0 && (v4 = v3 - 1) != 0 )
  {
    if ( v4 != 1 )
      return result;
    v6 = __OFSUB__(a2, 2);
    v5 = a2 - 2 < 0;
  }
  else
  {
    v6 = __OFSUB__(a2, 1);
    v5 = a2 - 1 < 0;
  }
  return v5 ^ v6;
}
