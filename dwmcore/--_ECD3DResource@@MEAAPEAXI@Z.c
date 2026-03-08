/*
 * XREFs of ??_ECD3DResource@@MEAAPEAXI@Z @ 0x1802849F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DResource@@MEAA@XZ @ 0x1800D03E4 (--1CD3DResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CD3DResource *__fastcall CD3DResource::`vector deleting destructor'(CD3DResource *this, char a2)
{
  CD3DResource::~CD3DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
