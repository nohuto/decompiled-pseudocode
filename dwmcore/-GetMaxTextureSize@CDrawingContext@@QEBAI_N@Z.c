/*
 * XREFs of ?GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z @ 0x180011804
 * Callers:
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800117D8 (-IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::GetMaxTextureSize(CDrawingContext *this, char a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(*((_QWORD *)this + 5) + 928LL);
  if ( !a2 && (unsigned int)result >= 0x4000 )
    return 0x4000LL;
  return result;
}
