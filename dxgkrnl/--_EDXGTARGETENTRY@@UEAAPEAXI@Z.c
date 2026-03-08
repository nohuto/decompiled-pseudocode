/*
 * XREFs of ??_EDXGTARGETENTRY@@UEAAPEAXI@Z @ 0x1C004B510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DXGTARGETENTRY *__fastcall DXGTARGETENTRY::`vector deleting destructor'(DXGTARGETENTRY *this, char a2)
{
  *(_QWORD *)this = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0);
  return this;
}
