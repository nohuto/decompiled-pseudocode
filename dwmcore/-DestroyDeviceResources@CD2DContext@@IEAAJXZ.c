/*
 * XREFs of ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D0E70
 * Callers:
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1800EE1EC (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800EE258 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18003D244 (-UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1800D0BF0 (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1800D0FEC (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1800D1140 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x180288A1C (-MarkInvalid@CD2DResource@@IEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::DestroyDeviceResources(CD2DContext *this)
{
  __int64 v2; // rsi
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 i; // rbx
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rcx

  CD2DContext::ReleaseCachedD2DTarget(this);
  v2 = *((_QWORD *)this + 21);
  if ( v2 )
  {
    while ( *(_QWORD *)v2 != v2 )
    {
      v12 = *(_QWORD **)(v2 + 8);
      if ( *v12 != v2 || (v13 = (_QWORD *)v12[1], (_QWORD *)*v13 != v12) )
        __fastfail(3u);
      *(_QWORD *)(v2 + 8) = v13;
      *v13 = v2;
      CD2DResourceManager::UnmanageResource((CD2DContext **)v2, (struct CD2DResource *)(v12 - 5));
      CD2DResource::MarkInvalid((CD2DResource *)(v12 - 5));
    }
    v3 = (void *)*((_QWORD *)this + 21);
    if ( v3 )
    {
      operator delete(v3, 0x20uLL);
      *((_QWORD *)this + 21) = 0LL;
    }
  }
  CD2DContext::ReleaseEffectTable(this);
  v4 = *((_QWORD *)this + 39);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 39) = 0LL;
  }
  v5 = *((_QWORD *)this + 26);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 26) = 0LL;
  }
  v6 = *((_QWORD *)this + 25);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 25) = 0LL;
  }
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 23) = 0LL;
  }
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 24) = 0LL;
  }
  v9 = *((_QWORD *)this + 40);
  if ( v9 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 76); i = (unsigned int)(i + 1) )
  {
    v14 = *((_QWORD *)this + 35);
    v15 = *(_QWORD *)(v14 + 8 * i);
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      *(_QWORD *)(v14 + 8 * i) = 0LL;
    }
  }
  *((_DWORD *)this + 76) = 0;
  CDrawListBatchManager::DestroyDeviceResources((CD2DContext *)((char *)this + 8));
  return 0LL;
}
