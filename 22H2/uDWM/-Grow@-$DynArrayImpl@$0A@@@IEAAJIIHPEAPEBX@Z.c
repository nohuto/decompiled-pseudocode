/*
 * XREFs of ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180024700
 * Callers:
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180016538 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180016F14 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180018920 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001A2C0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18001AA70 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?InsertAt@?$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z @ 0x180022A1C (-InsertAt@-$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180022C90 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023290 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x180025190 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180026570 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x18003DB74 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x18003EA6C (-QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x18004F384 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x180081834 (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x1800820AC (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x18008263C (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180083E24 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180099FD0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x1800A4330 (-InsertAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?EnsureCount@CMILResourceCache@@IEAAJI@Z @ 0x1800C2120 (-EnsureCount@CMILResourceCache@@IEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x180057E5A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<0>::Grow(char **a1, unsigned int a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  char *v6; // r10
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned __int64 v12; // r8
  unsigned int v13; // ecx
  int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // esi
  int v19; // eax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r8
  char *v23; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_DWORD *)a1 + 6);
  v6 = 0LL;
  v23 = 0LL;
  v9 = v5 + a3;
  if ( v5 + a3 < v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xE7u);
    return 2147942934LL;
  }
  v10 = *((_DWORD *)a1 + 5);
  if ( v9 <= v10 )
    return 0LL;
  v12 = a2 * (unsigned __int64)v9;
  if ( v12 <= 0xFFFFFFFF )
  {
    if ( a4 )
    {
LABEL_13:
      if ( a2 == 16 )
        v17 = 0xFFFFFFF;
      else
        v17 = 0xFFFFFFFF / a2;
      if ( v9 <= v17 )
      {
        if ( *a1 == a1[1] )
        {
          v18 = 0;
          if ( (_DWORD)v12 )
          {
            v23 = (char *)(*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                            WPF::g_pProcessHeap,
                            (unsigned int)v12);
            v6 = v23;
            if ( !v23 )
              v18 = -2147024882;
          }
          else
          {
            v18 = -2147024809;
          }
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x111u);
            return (unsigned int)v18;
          }
          v19 = *((_DWORD *)a1 + 6);
          if ( v19 )
          {
            memcpy_0(v6, *a1, a2 * v19);
            v6 = v23;
          }
        }
        else
        {
          v23 = *a1;
          v18 = (*(__int64 (__fastcall **)(WPF::HeapBase *, char **))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
                  WPF::g_pProcessHeap,
                  &v23);
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x12Au);
            return (unsigned int)v18;
          }
          v21 = (unsigned __int64)*a1;
          v6 = v23;
          if ( v23 != *a1 )
          {
            if ( a5 )
            {
              v22 = *a5;
              if ( *a5 >= v21 && v22 < v21 + *((_DWORD *)a1 + 5) * a2 )
                *a5 = (unsigned __int64)&v23[v22 - v21];
            }
          }
        }
        *((_DWORD *)a1 + 5) = v9;
        *a1 = v6;
        return (unsigned int)v18;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0x10Au);
      return 2147942934LL;
    }
    v13 = v9 - v10;
    if ( v10 > 0x10 )
    {
      v15 = 8092;
      v14 = v10;
      if ( v10 >= 0x1F9C )
        goto LABEL_8;
    }
    else
    {
      v14 = 16;
    }
    v15 = v14;
LABEL_8:
    if ( v13 <= v15 )
      v13 = v15;
    v16 = v13 + v10;
    if ( v13 + v10 >= v10 && a2 * (unsigned __int64)v16 <= 0xFFFFFFFF )
    {
      v9 = v13 + v10;
      LODWORD(v12) = a2 * v16;
    }
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xF0u);
  return 2147942934LL;
}
