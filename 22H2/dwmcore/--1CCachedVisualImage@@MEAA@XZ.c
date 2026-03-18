/*
 * XREFs of ??1CCachedVisualImage@@MEAA@XZ @ 0x1800B5E34
 * Callers:
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x1800A6060 (--1CBackdropVisualImage@@UEAA@XZ.c)
 *     ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x1800B5DF0 (--_ECCachedVisualImage@@MEAAPEAXI@Z.c)
 *     ??_GCDebugVisualImage@@UEAAPEAXI@Z @ 0x180218560 (--_GCDebugVisualImage@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18003C0EC (--1COcclusionContext@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E247C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@0@@Z @ 0x1800F4A98 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delet.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CCachedVisualImage::~CCachedVisualImage(CCachedVisualImage *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rcx

  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `CImageSource'};
  *((_QWORD *)this + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CCachedVisualImage::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CCachedVisualImage::`vftable'{for `IPixelFormat's `CImageSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 12LL) + 64) = &CCachedVisualImage::`vftable'{for `IPixelFormat's `IBitmapRealization'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 1728;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 1744;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 12LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 12LL)
                                                                          - 1768;
  v4 = 0LL;
  v5 = *((_QWORD *)this + 2);
  v6 = *(_DWORD *)(v5 + 744);
  v7 = *(_QWORD *)(v5 + 720);
  if ( v6 )
  {
    do
    {
      if ( this == *(CCachedVisualImage **)(v7 + 8 * v4) )
        break;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v6 );
  }
  if ( (unsigned int)v4 < v6 )
  {
    while ( (unsigned int)v4 < v6 - 1 )
    {
      *(_QWORD *)(v7 + 8 * v4) = *(_QWORD *)(v7 + 8LL * (unsigned int)(v4 + 1));
      v4 = (unsigned int)(v4 + 1);
      v6 = *(_DWORD *)(v5 + 744);
    }
    *(_DWORD *)(v5 + 744) = v6 - 1;
  }
  operator delete(*((void **)this + 21), 0x44uLL);
  COcclusionContext::~COcclusionContext((void **)this + 27);
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>(v8, *((_QWORD *)this + 25));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 24),
      (*((_QWORD *)this + 26) - *((_QWORD *)this + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 23);
  CResource::~CResource(this);
}
