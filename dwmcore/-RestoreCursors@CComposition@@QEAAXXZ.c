/*
 * XREFs of ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180021EDC
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180020BD4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x18012CDF0 (-RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E6D30 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1801ED8C0 (-RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x18012A454 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x1801B148C (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCExcludeVisualReference@@$0A@@@QEAAJI@Z @ 0x1801B1EFC (-RemoveAt@-$DynArray@PEAVCExcludeVisualReference@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::RestoreCursors(CComposition *this)
{
  int v1; // ebx
  _QWORD *v2; // rdi
  __int64 v3; // rbp
  CExcludeVisualReference *v4; // rsi
  unsigned int v5; // edx

  v1 = *((_DWORD *)this + 248);
  if ( v1 > 0 )
  {
    v2 = (_QWORD *)((char *)this + 968);
    do
    {
      v3 = (unsigned int)(v1 - 1);
      v4 = *(CExcludeVisualReference **)(*v2 + 8 * v3);
      (*(void (__fastcall **)(CExcludeVisualReference *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( !CExcludeVisualReference::GetVisual(v4) )
      {
        DynArray<CExcludeVisualReference *,0>::RemoveAt(v2, (unsigned int)v3);
        CExcludeVisualReference::`scalar deleting destructor'(v4, v5);
      }
      --v1;
    }
    while ( v1 > 0 );
  }
}
