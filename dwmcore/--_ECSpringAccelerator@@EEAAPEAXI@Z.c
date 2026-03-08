/*
 * XREFs of ??_ECSpringAccelerator@@EEAAPEAXI@Z @ 0x18022D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CSpringAccelerator *__fastcall CSpringAccelerator::`vector deleting destructor'(CSpringAccelerator *this, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
