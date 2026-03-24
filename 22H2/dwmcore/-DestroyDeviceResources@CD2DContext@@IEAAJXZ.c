/*
 * XREFs of ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18002CC20
 * Callers:
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x18002A8C4 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x18002A8F8 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x18002A94C (-MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x18002CD90 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x18002CE9C (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x18002CED8 (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DestroyDeviceResources(CD2DResourceManager **this)
{
  CD2DResourceManager *v2; // rcx
  CD2DResourceManager *v3; // rcx
  CD2DResourceManager *v4; // rcx
  CD2DResourceManager *v5; // rcx
  CD2DResourceManager *v6; // rcx
  CD2DResourceManager *v7; // rcx
  CD2DResourceManager *v8; // rcx
  CD2DResourceManager *v9; // rcx
  CD2DResourceManager *v10; // rcx
  __int64 i; // rdi
  CD2DResourceManager *v13; // r14
  __int64 v14; // rcx

  CD2DContext::ReleaseCachedD2DTarget((CD2DContext *)this);
  v2 = this[26];
  if ( v2 )
  {
    CD2DResourceManager::MarkAllResourcesInvalid(v2);
    v3 = this[26];
    if ( v3 )
    {
      operator delete(v3, 0x20uLL);
      this[26] = 0LL;
    }
  }
  CD2DContext::ReleaseEffectTable((CD2DContext *)this);
  v4 = this[44];
  if ( v4 )
  {
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v4 + 8LL))(v4);
    this[44] = 0LL;
  }
  v5 = this[45];
  if ( v5 )
  {
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v5 + 16LL))(v5);
    this[45] = 0LL;
  }
  v6 = this[31];
  if ( v6 )
  {
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v6 + 16LL))(v6);
    this[31] = 0LL;
  }
  v7 = this[30];
  if ( v7 )
  {
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v7 + 16LL))(v7);
    this[30] = 0LL;
  }
  v8 = this[28];
  if ( v8 )
  {
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v8 + 16LL))(v8);
    this[28] = 0LL;
  }
  v9 = this[29];
  if ( v9 )
  {
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v9 + 16LL))(v9);
    this[29] = 0LL;
  }
  v10 = this[46];
  if ( v10 )
  {
    this[46] = 0LL;
    (*(void (__fastcall **)(CD2DResourceManager *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 86); i = (unsigned int)(i + 1) )
  {
    v13 = this[40];
    v14 = *((_QWORD *)v13 + i);
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      *((_QWORD *)v13 + i) = 0LL;
    }
  }
  *((_DWORD *)this + 86) = 0;
  CDrawListBatchManager::DestroyDeviceResources((CDrawListBatchManager *)(this + 1));
  return 0LL;
}
