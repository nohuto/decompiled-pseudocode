/*
 * XREFs of ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x1800150B8
 * Callers:
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x18001501C (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA890 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

char __fastcall CVisual::IsPreserve3D(CVisual *this, const struct CVisual *a2)
{
  char v2; // r8

  v2 = 1;
  if ( (!a2 || *((_DWORD *)a2 + 27) != 1)
    && (*((_DWORD *)this + 27) != 1 || !(unsigned int)CPtrArrayBase::GetCount((CVisual *)((char *)this + 80))) )
  {
    return 0;
  }
  return v2;
}
