/*
 * XREFs of ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800EC864
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x180033DA0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z @ 0x1800EC960 (--0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z.c)
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x1800ED404 (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ @ 0x180100100 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::EnsureSysmemBitmap(CD2DBitmapCache *this)
{
  unsigned int v1; // edi
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  const struct PixelFormatInfo *v4; // rbx
  __int64 v5; // rax
  const struct D2D_SIZE_U *v6; // rdi
  CSecondarySysmemBitmap *v7; // rax
  __int64 v8; // rcx
  CSecondarySysmemBitmap *v9; // rax
  CSecondarySysmemBitmap *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // rcx
  int v15; // ebx
  _BYTE v16[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-20h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 5) )
  {
    *((_QWORD *)this + 5) = 0LL;
    v3 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 3)
                                                   + 8LL
                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 8LL));
    v4 = (const struct PixelFormatInfo *)(**v3)(v3, v17);
    v5 = (***((__int64 (__fastcall ****)(_QWORD, _BYTE *))this + 3))(*((_QWORD *)this + 3), v16);
    *((_QWORD *)this + 5) = 0LL;
    v6 = (const struct D2D_SIZE_U *)v5;
    v7 = (CSecondarySysmemBitmap *)DefaultHeap::Alloc(0xC8uLL);
    if ( v7 && (v9 = CSecondarySysmemBitmap::CSecondarySysmemBitmap(v7, v6, v4), (v10 = v9) != 0LL) )
    {
      CMILRefCountImpl::AddReference((CSecondarySysmemBitmap *)((char *)v9 + 16));
      v11 = CSecondarySysmemBitmap::Initialize(v10);
      v1 = v11;
      if ( v11 >= 0 )
      {
        *((_QWORD *)this + 5) = v10;
        return v1;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1Au, 0LL);
      CMILRefCountBaseT<ID2DBitmapCacheSource>::InternalRelease(v10);
      v15 = v1;
    }
    else
    {
      v1 = -2147024882;
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x18u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v15, 0x12Bu, 0LL);
  }
  return v1;
}
