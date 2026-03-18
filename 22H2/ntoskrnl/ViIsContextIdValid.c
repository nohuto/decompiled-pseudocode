/*
 * XREFs of ViIsContextIdValid @ 0x140AC509C
 * Callers:
 *     VfInsertContext @ 0x1405CE4D0 (VfInsertContext.c)
 *     VfQueryDeviceContext @ 0x1405CE5A0 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x1405CE5E0 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x1405CE620 (VfQueryIrpContext.c)
 *     VfRemoveContext @ 0x1405CE660 (VfRemoveContext.c)
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
