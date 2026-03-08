/*
 * XREFs of ??_ECWindowOcclusionInfo@@UEAAPEAXI@Z @ 0x1800E1040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CWindowOcclusionInfo *__fastcall CWindowOcclusionInfo::`vector deleting destructor'(
        CWindowOcclusionInfo *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
