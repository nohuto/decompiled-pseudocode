/*
 * XREFs of ?SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z @ 0x18020EA08
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180098440 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800E41D0 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::SetPixelSnappingEnabled(CVisual *this, char a2)
{
  __int64 v2; // r11

  if ( *((_BYTE *)this + 101) >> 7 != a2 )
  {
    *((_BYTE *)this + 101) = (a2 << 7) | *((_BYTE *)this + 101) & 0x7F;
    CVisual::OnInnerTransformChanged(this);
    CVisual::PropagateFlags(v2, 5u);
  }
}
