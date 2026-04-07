/*
 * XREFs of ?IsVisible@CVisual@@QEBA_NXZ @ 0x180094D28
 * Callers:
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18002CE40 (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?SwapVisual@UdwmDcompVisual@@CAJPEAVCVisual@@0@Z @ 0x1800BB290 (-SwapVisual@UdwmDcompVisual@@CAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::IsVisible(CVisual *this)
{
  bool result; // al

  result = 0;
  if ( (*((_BYTE *)this + 84) & 4) != 0 && !*((_DWORD *)this + 22) )
    return COERCE_FLOAT(COERCE_UNSIGNED_INT(*((double *)this + 23)) & _xmm) >= 0.0000011920929;
  return result;
}
