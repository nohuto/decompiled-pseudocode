/*
 * XREFs of ?ValidateVisual@CImage@@UEAAJXZ @ 0x180019470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x18000D78C (-UpdateBitmap@CImage@@QEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180019C70 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImage::ValidateVisual(struct CBitmapSource **this)
{
  int v2; // eax
  int updated; // edi
  __int64 v5; // rdx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( ((_DWORD)this[10] & 0x1000) != 0 )
  {
    updated = CImage::UpdateBitmap(this);
    if ( updated < 0 )
    {
      v5 = 51LL;
      goto LABEL_13;
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  v2 = CVisual::ValidateVisual((CVisual *)this);
  updated = v2;
  if ( v2 < 0 )
  {
    v6 = 144LL;
    goto LABEL_16;
  }
  if ( ((_BYTE)this[10] & 4) != 0 )
  {
    v2 = (*((__int64 (__fastcall **)(struct CBitmapSource **))*this + 24))(this);
    updated = v2;
    if ( v2 >= 0 )
    {
      *((_DWORD *)this + 20) &= ~4u;
      goto LABEL_6;
    }
    v6 = 148LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_7;
  }
LABEL_6:
  updated = 0;
LABEL_7:
  if ( updated >= 0 )
    return 0LL;
  v5 = 55LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"clientcore\\windows\\dwm\\udwm\\image.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
