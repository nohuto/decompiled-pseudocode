/*
 * XREFs of ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x1802574C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x1800BA1D0 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CCompositionSurfaceInfo *__fastcall CCompositionSurfaceInfo::`vector deleting destructor'(
        CCompositionSurfaceInfo *this,
        char a2)
{
  CCompositionSurfaceInfo::~CCompositionSurfaceInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
