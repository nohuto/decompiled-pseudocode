/*
 * XREFs of ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18001D410
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180020BD4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?HideVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x1801E6C00 (-HideVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x18012A454 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?Hide@CExcludeVisualReference@@QEAAXXZ @ 0x18012A46C (-Hide@CExcludeVisualReference@@QEAAXXZ.c)
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x1801B148C (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCExcludeVisualReference@@$0A@@@QEAAJI@Z @ 0x1801B1EFC (-RemoveAt@-$DynArray@PEAVCExcludeVisualReference@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::ShowHideCursors(CComposition *this, char a2)
{
  int v2; // ebx
  _QWORD *v4; // rsi
  CExcludeVisualReference *v5; // rdi
  CExcludeVisualReference *v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // edx

  v2 = *((_DWORD *)this + 248);
  if ( v2 > 0 )
  {
    v4 = (_QWORD *)((char *)this + 968);
    do
    {
      v5 = *(CExcludeVisualReference **)(*v4 + 8LL * (unsigned int)(v2 - 1));
      if ( CExcludeVisualReference::GetVisual(v5) )
      {
        if ( a2 )
          (**(void (***)(void))v5)();
        else
          CExcludeVisualReference::Hide(v6);
      }
      else
      {
        DynArray<CExcludeVisualReference *,0>::RemoveAt(v4, v7);
        if ( v5 )
          CExcludeVisualReference::`scalar deleting destructor'(v5, v8);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
}
