/*
 * XREFs of ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800DA880
 * Callers:
 *     ?Release@CD2DBitmap@@$4PPPPPPPM@BAA@EAAKXZ @ 0x1801202E0 (-Release@CD2DBitmap@@$4PPPPPPPM@BAA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WHA@EAAKXZ @ 0x180120300 (-Release@CDeviceTextureTarget@@WHA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@$4PPPPPPPM@BCI@EAAKXZ @ 0x1801205E0 (-Release@CDeviceTextureTarget@@$4PPPPPPPM@BCI@EAAKXZ.c)
 *     ?Release@CDxHandleBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ @ 0x180122620 (-Release@CDxHandleBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ.c)
 *     ?Release@CGDIBitmapRealization@@$4PPPPPPPM@BMI@EAAKXZ @ 0x180122640 (-Release@CGDIBitmapRealization@@$4PPPPPPPM@BMI@EAAKXZ.c)
 *     ?Release@CRenderTargetBitmap@@$4PPPPPPPM@LA@EAAKXZ @ 0x180122960 (-Release@CRenderTargetBitmap@@$4PPPPPPPM@LA@EAAKXZ.c)
 *     ?Release@CDxHandleBitmapRealization@@$4PPPPPPPM@CBA@EAAKXZ @ 0x180122E80 (-Release@CDxHandleBitmapRealization@@$4PPPPPPPM@CBA@EAAKXZ.c)
 *     ?Release@CRenderTargetBitmap@@$4PPPPPPPM@LI@EAAKXZ @ 0x180123620 (-Release@CRenderTargetBitmap@@$4PPPPPPPM@LI@EAAKXZ.c)
 *     ?Release@CD2DBitmap@@$4PPPPPPPM@BFI@EAAKXZ @ 0x180123820 (-Release@CD2DBitmap@@$4PPPPPPPM@BFI@EAAKXZ.c)
 *     ?Release@CRenderTargetBitmap@@$4PPPPPPPM@NA@EAAKXZ @ 0x180123E80 (-Release@CRenderTargetBitmap@@$4PPPPPPPM@NA@EAAKXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BB54 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
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
