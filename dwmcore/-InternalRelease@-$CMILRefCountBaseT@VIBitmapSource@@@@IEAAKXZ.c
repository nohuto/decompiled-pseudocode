/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@VIBitmapSource@@@@IEAAKXZ @ 0x1800F59D0
 * Callers:
 *     ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x1800A64F8 (-Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?Release@CSystemMemoryBitmap@@UEAAKXZ @ 0x1800F59C0 (-Release@CSystemMemoryBitmap@@UEAAKXZ.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802B8B58 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 *     ?Release@?$CMILCOMBaseT@VIBitmapSource@@@@UEAAKXZ @ 0x1802B8F14 (-Release@-$CMILCOMBaseT@VIBitmapSource@@@@UEAAKXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILRefCountBaseT<IBitmapSource>::InternalRelease(volatile signed __int32 *a1)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v5; // rcx

  v2 = a1 + 4;
  v3 = _InterlockedDecrement(a1 + 4);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 4));
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 48LL))(a1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v5 = *(_QWORD *)a1;
      --*v2;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(v5 + 40))(a1, 1LL);
    }
  }
  return v3;
}
