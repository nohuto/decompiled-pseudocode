/*
 * XREFs of ??1CD2DBitmapCache@@MEAA@XZ @ 0x180064670
 * Callers:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x18003138C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18003864C (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x1800615F8 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??_GCWICBitmapRealization@@UEAAPEAXI@Z @ 0x1800DA620 (--_GCWICBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x18019B320 (--_ECD2DBitmapCache@@MEAAPEAXI@Z.c)
 *     ??_ECBitmapRealization@@UEAAPEAXI@Z @ 0x1802620A0 (--_ECBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??_ECColorKeyBitmapRealization@@UEAAPEAXI@Z @ 0x1802622B0 (--_ECColorKeyBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x180264950 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x180265344 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180048078 (-RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180056574 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CD2DBitmapCache::~CD2DBitmapCache(CD2DBitmapCache *this)
{
  __int64 v2; // rdx
  const struct IDeviceResourceNotify ***v3; // rbp
  const struct IDeviceResourceNotify ***v4; // rdi
  CRenderTargetBitmap *v5; // rcx
  const struct IDeviceResourceNotify **v6; // rsi
  const struct IDeviceResourceNotify *v7; // rcx
  CRenderTargetBitmap *v8; // rcx

  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  v2 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v2 + 12) = v2 - 72;
  v3 = (const struct IDeviceResourceNotify ***)*((_QWORD *)this + 7);
  v4 = (const struct IDeviceResourceNotify ***)*((_QWORD *)this + 6);
  if ( v4 != v3 )
  {
    do
    {
      v6 = *v4;
      if ( *v4 )
      {
        v7 = v6[1];
        if ( v7 )
        {
          CD2DResource::RemoveResourceNotifier((const struct IDeviceResourceNotify *)((char *)v7 + 104), *v6);
          v8 = v6[1];
          if ( v8 )
            CRenderTargetBitmap::Release(v8);
        }
        operator delete(v6);
      }
      ++v4;
    }
    while ( v4 != v3 );
    v4 = (const struct IDeviceResourceNotify ***)*((_QWORD *)this + 6);
  }
  *((_QWORD *)this + 7) = v4;
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 8) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v5 = (CRenderTargetBitmap *)*((_QWORD *)this + 5);
  if ( v5 )
    CRenderTargetBitmap::Release(v5);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)this + 32);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 24);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
