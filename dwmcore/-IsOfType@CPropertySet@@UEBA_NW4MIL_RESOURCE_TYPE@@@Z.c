/*
 * XREFs of ?IsOfType@CPropertySet@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E1B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CPropertySet::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 134) > 1 )
    return a2 == 114;
  return v2;
}
