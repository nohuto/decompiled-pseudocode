/*
 * XREFs of ?IsOfType@CContainerVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800DC6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CContainerVectorShape::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( a2 != 193 )
    return (unsigned int)(a2 - 46) <= 1;
  return v2;
}
