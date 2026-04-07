/*
 * XREFs of ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x1800373BC
 * Callers:
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x180037360 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x180039EC0 (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180052908 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 * Callees:
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001A5EC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18001AAA4 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800251AC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B1F0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CDesktopManager::DestroyDesktopWindowReplacement(__int64 a1)
{
  _QWORD *Element; // rax
  CRenderDataVisual *v3; // rbx
  __int64 v4; // rcx

  if ( CWindowList::GetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), a1) )
  {
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 8LL),
                a1);
    if ( Element )
      v3 = (CRenderDataVisual *)Element[4];
    else
      v3 = 0LL;
    CRenderDataVisual::ClearInstructions(v3);
    v4 = *((_QWORD *)v3 + 3);
    if ( v4 )
      VisualCollection::Remove((VisualCollection *)(v4 + 32), v3);
  }
}
