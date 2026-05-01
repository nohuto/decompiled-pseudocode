/*
 * XREFs of ?ThumbnailSizeChanged@SwitchItemThumbnailElement@@UEAAXPEAX@Z @ 0x180425E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateThumbnailVisual@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804257A8 (-InvalidateThumbnailVisual@SwitchItemThumbnailElement@@IEAAXXZ.c)
 */

void __fastcall SwitchItemThumbnailElement::ThumbnailSizeChanged(SwitchItemThumbnailElement *this, void *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 74);
  if ( v3 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 208LL))(v3, a2) )
      SwitchItemThumbnailElement::InvalidateThumbnailVisual(this);
  }
}
