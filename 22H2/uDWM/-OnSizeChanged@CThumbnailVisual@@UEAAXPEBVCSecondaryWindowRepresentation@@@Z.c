/*
 * XREFs of ?OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18000D900
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180011540 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 */

void __fastcall CThumbnailVisual::OnSizeChanged(
        CThumbnailVisual *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)((char *)this - 360), 0x4000u);
  v3 = *((_QWORD *)this + 1);
  if ( v3 && *(_BYTE *)(v3 + 33) && *((_QWORD *)this + 2) )
  {
    v4 = *(_QWORD *)(v3 + 16);
    if ( v4 )
      PostMessageW(*(HWND *)(v4 + 40), 0x327u, *(unsigned int *)(v3 + 8), 0LL);
  }
}
