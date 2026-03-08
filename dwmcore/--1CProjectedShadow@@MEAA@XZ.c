/*
 * XREFs of ??1CProjectedShadow@@MEAA@XZ @ 0x180245540
 * Callers:
 *     ??_ECProjectedShadow@@MEAAPEAXI@Z @ 0x1802457B0 (--_ECProjectedShadow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18003E618 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800D5814 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 */

void __fastcall CProjectedShadow::~CProjectedShadow(CProjectedShadow *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 *v6; // rdx
  unsigned __int64 *v7; // rdx
  unsigned __int64 *v8; // rdx
  CProjectedShadow *v9; // rcx

  *(_QWORD *)this = &CProjectedShadow::`vftable';
  v2 = (__int64 *)((char *)this + 376);
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CProjectedShadow::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CProjectedShadow::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 344;
  v4 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 360;
  v5 = *v2;
  if ( *v2 )
  {
    *(_DWORD *)(v5 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5 + 16, 0x18u);
    *(_BYTE *)(v5 + 200) = 1;
  }
  v6 = (unsigned __int64 *)*((_QWORD *)this + 11);
  if ( v6 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24), v6);
  v7 = (unsigned __int64 *)*((_QWORD *)this + 10);
  if ( v7 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24), v7);
  v8 = (unsigned __int64 *)*((_QWORD *)this + 9);
  if ( v8 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24), v8);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 48);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>(v2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 368);
  detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 32);
  v9 = (CProjectedShadow *)*((_QWORD *)this + 32);
  *((_QWORD *)this + 32) = 0LL;
  if ( v9 == (CProjectedShadow *)((char *)this + 280) )
    v9 = 0LL;
  operator delete(v9);
  CResource::~CResource(this);
}
