/*
 * XREFs of ?bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z @ 0x1C00434B0
 * Callers:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00432EC (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DE9A0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bContain(ERECTL *this, const struct _RECTL *a2)
{
  return *(_DWORD *)this <= a2->left
      && *((_DWORD *)this + 2) >= a2->right
      && *((_DWORD *)this + 1) <= a2->top
      && *((_DWORD *)this + 3) >= a2->bottom;
}
