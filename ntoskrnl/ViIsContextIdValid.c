/*
 * XREFs of ViIsContextIdValid @ 0x140AC109C
 * Callers:
 *     VfInsertContext @ 0x1405CC020 (VfInsertContext.c)
 *     VfQueryDeviceContext @ 0x1405CC0F0 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x1405CC130 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x1405CC170 (VfQueryIrpContext.c)
 *     VfRemoveContext @ 0x1405CC1B0 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall ViIsContextIdValid(int a1, int a2)
{
  bool result; // al

  result = 0;
  if ( !a1 || (unsigned int)(a1 - 1) <= 1 )
    return a2 < 1;
  return result;
}
