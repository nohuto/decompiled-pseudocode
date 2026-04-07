/*
 * XREFs of ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x18008351C
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18008231C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180083D7C (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 * Callees:
 *     <none>
 */

struct CTopLevelWindow *__fastcall CLivePreview::_FindLivePreviewWindow(CLivePreview *this, HWND a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // r10

  v2 = 0LL;
  v3 = (unsigned int)(*((_DWORD *)this + 90) - 1);
  if ( (int)v3 >= 0 )
  {
    v4 = *((_QWORD *)this + 42);
    while ( *(HWND *)(v4 + 48 * v3 + 24) != a2 )
    {
      v3 = (unsigned int)(v3 - 1);
      if ( (int)v3 < 0 )
        return (struct CTopLevelWindow *)v2;
    }
    return *(struct CTopLevelWindow **)(v4 + 48 * v3);
  }
  return (struct CTopLevelWindow *)v2;
}
