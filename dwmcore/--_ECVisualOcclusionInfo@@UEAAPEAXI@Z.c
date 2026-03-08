/*
 * XREFs of ??_ECVisualOcclusionInfo@@UEAAPEAXI@Z @ 0x1800E1070
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CVisualOcclusionInfo *__fastcall CVisualOcclusionInfo::`vector deleting destructor'(
        CVisualOcclusionInfo *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x28uLL);
  return this;
}
