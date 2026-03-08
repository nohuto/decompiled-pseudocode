/*
 * XREFs of ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800D9DD0
 * Callers:
 *     ?Release@CD2DBitmap@@$4PPPPPPPM@BAA@EAAKXZ @ 0x18011C130 (-Release@CD2DBitmap@@$4PPPPPPPM@BAA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WHA@EAAKXZ @ 0x18011C150 (-Release@CDeviceTextureTarget@@WHA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@$4PPPPPPPM@BCI@EAAKXZ @ 0x18011C430 (-Release@CDeviceTextureTarget@@$4PPPPPPPM@BCI@EAAKXZ.c)
 *     ?Release@CDxHandleBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ @ 0x18011E470 (-Release@CDxHandleBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ.c)
 *     ?Release@CGDIBitmapRealization@@$4PPPPPPPM@BMI@EAAKXZ @ 0x18011E490 (-Release@CGDIBitmapRealization@@$4PPPPPPPM@BMI@EAAKXZ.c)
 *     ?Release@CRenderTargetBitmap@@$4PPPPPPPM@LA@EAAKXZ @ 0x18011E7B0 (-Release@CRenderTargetBitmap@@$4PPPPPPPM@LA@EAAKXZ.c)
 *     ?Release@CDxHandleBitmapRealization@@$4PPPPPPPM@CBA@EAAKXZ @ 0x18011ECD0 (-Release@CDxHandleBitmapRealization@@$4PPPPPPPM@CBA@EAAKXZ.c)
 *     ?Release@CRenderTargetBitmap@@$4PPPPPPPM@LI@EAAKXZ @ 0x18011F470 (-Release@CRenderTargetBitmap@@$4PPPPPPPM@LI@EAAKXZ.c)
 *     ?Release@CD2DBitmap@@$4PPPPPPPM@BFI@EAAKXZ @ 0x18011F670 (-Release@CD2DBitmap@@$4PPPPPPPM@BFI@EAAKXZ.c)
 *     ?Release@CRenderTargetBitmap@@$4PPPPPPPM@NA@EAAKXZ @ 0x18011FCD0 (-Release@CRenderTargetBitmap@@$4PPPPPPPM@NA@EAAKXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Release(CRenderTargetBitmap *this)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v5; // rcx

  v2 = (volatile signed __int32 *)((char *)this + 8);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CRenderTargetBitmap *)((char *)this + 8));
    (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)this + 32LL))(this);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v5 = *(_QWORD *)this;
      --*v2;
      (*(void (__fastcall **)(CRenderTargetBitmap *, __int64))(v5 + 24))(this, 1LL);
    }
  }
  return v3;
}
