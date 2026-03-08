/*
 * XREFs of ?IsOfType@CSceneSurfaceMaterialInput@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18024DEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSceneSurfaceMaterialInput::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 156;
  result = 0;
  if ( v2 <= 9 )
  {
    v3 = 577;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
