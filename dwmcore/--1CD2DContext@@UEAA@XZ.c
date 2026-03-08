/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x1800EE258
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800EDCB4 (--1CD3DDevice@@MEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x1802890E0 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D0E70 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::~CD2DContext(CD2DContext *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 328);
  v2 = *((_QWORD *)this + 40);
  if ( v2 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 280);
  CDrawListBatchManager::~CDrawListBatchManager((CD2DContext *)((char *)this + 8));
}
