/*
 * XREFs of ?get_Row@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1804250D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AccessibleElementBase::get_Row(AccessibleElementBase *this, int *a2)
{
  return AccessibleElementBase::_GetGridItemCoordinates((AccessibleElementBase *)((char *)this - 80), a2, 0LL);
}
