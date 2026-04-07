/*
 * XREFs of ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010D54
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010C00 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180013180 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180039F80 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180095E74 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180010F0C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010F34 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800135E8 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001478C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180016238 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800187FC (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800199CC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180019DAC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180039538 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B140 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CWindowList::ImmediateDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  struct CWindowData *v4; // rcx
  struct CWindowData **v5; // rax
  char v6; // si
  __int64 v7; // rax
  char v8; // bp
  char v9; // bp
  struct CVisual *v10; // rsi
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CVisual *v12; // rsi
  struct CRenderDataVisual *v13; // rax
  struct CWindowData *Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  DynArray<CWindowData *,0>::Remove((char *)this + 248, &Buffer);
  v4 = *(struct CWindowData **)a2;
  if ( *(struct CWindowData **)(*(_QWORD *)a2 + 8LL) != a2
    || (v5 = (struct CWindowData **)*((_QWORD *)a2 + 1), *v5 != a2) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  *((_QWORD *)v4 + 1) = v5;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v6 = *((_BYTE *)a2 + 608) & 4;
  if ( v6 )
  {
    Buffer = a2;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 280), &Buffer);
    *((_BYTE *)a2 + 608) &= ~4u;
  }
  v7 = *((_QWORD *)a2 + 48);
  if ( v7 )
    *(_BYTE *)(v7 + 240) &= ~0x80u;
  *((_QWORD *)a2 + 4) = 0LL;
  v8 = *((_BYTE *)a2 + 608);
  *((_BYTE *)a2 + 608) = v8 & 0xFE;
  v9 = v8 & 1;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 20) )
  {
    CWindowList::CheckForMaximizedChange(this, a2);
    if ( v9 )
    {
      if ( *((_DWORD *)a2 + 28) == 1 || !v6 )
        CWindowList::ShowHide(this, a2, 1);
    }
    else
    {
      CWindowData::OnVisibilityUpdated(a2);
    }
  }
  v10 = (struct CVisual *)*((_QWORD *)a2 + 49);
  if ( v10 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32), v10);
  }
  v12 = (struct CVisual *)*((_QWORD *)a2 + 48);
  if ( v12 )
  {
    v13 = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)v13 + 32), v12);
  }
  *((_BYTE *)a2 + 609) &= ~0x20u;
  CWindowList::OnGDISurfaceChange(v4, a2);
  if ( *((HWND *)a2 + 5) == CWindowList::GetShellWindowForDesktop(this, *((_QWORD *)a2 + 15)) )
    CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 15));
  if ( !*((_QWORD *)a2 + 3) )
    CWindowList::ImmediateDestroyWindow(this, a2);
}
