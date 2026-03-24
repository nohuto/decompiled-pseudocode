/*
 * XREFs of ?GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z @ 0x18000EEDC
 * Callers:
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x18000EEB0 (-IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::GetMaxTextureSize(CDrawingContext *this, char a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(*((_QWORD *)this + 5) + 968LL);
  if ( !a2 && (unsigned int)result >= 0x4000 )
    return 0x4000LL;
  return result;
}
