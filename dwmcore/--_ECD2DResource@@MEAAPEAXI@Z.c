/*
 * XREFs of ??_ECD2DResource@@MEAAPEAXI@Z @ 0x1802889E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DResource@@MEAA@XZ @ 0x18003D0EC (--1CD2DResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CD2DResource *__fastcall CD2DResource::`vector deleting destructor'(CD2DResource *this, char a2)
{
  CD2DResource::~CD2DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
