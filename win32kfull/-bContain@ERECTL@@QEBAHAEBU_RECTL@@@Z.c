/*
 * XREFs of ?bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z @ 0x1C000C908
 * Callers:
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C000C840 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
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
