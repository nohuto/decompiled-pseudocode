/*
 * XREFs of ?IsOfType@CContainerVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016F370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CContainerVectorShape::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 44) > 1 )
    return a2 == 192;
  return v2;
}
