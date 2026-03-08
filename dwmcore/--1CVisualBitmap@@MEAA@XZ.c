/*
 * XREFs of ??1CVisualBitmap@@MEAA@XZ @ 0x18021B95C
 * Callers:
 *     ??_ECVisualBitmap@@MEAAPEAXI@Z @ 0x1801C0B70 (--_ECVisualBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisualBitmap::~CVisualBitmap(CVisualBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CVisualBitmap::`vftable';
  *((_QWORD *)this + 10) = &CVisualBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CClipBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CVisualBitmap::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 56;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 72;
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CVisualBitmapGeneratedT<CVisualBitmap,CContent>::~CVisualBitmapGeneratedT<CVisualBitmap,CContent>((struct CResource **)this);
}
