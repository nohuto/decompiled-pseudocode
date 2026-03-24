/*
 * XREFs of ?PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z @ 0x18002C680
 * Callers:
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18002C570 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x18002C890 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18008FEFC (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::PopLayer(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  int v3; // eax
  __int64 v4; // rbx

  CD2DContext::FlushDrawList(this);
  v3 = *((_DWORD *)this + 100);
  v4 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(*((_QWORD *)this + 47) + 8LL * (unsigned int)(v3 - 1));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 240LL) + 328LL))(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 240LL));
  CD2DTarget::ApplyCurrentClip((CD2DTarget *)v4);
  --*(_DWORD *)(v4 + 52);
}
