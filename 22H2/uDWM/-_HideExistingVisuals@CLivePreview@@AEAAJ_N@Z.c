/*
 * XREFs of ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x1800834F4
 * Callers:
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180082CC0 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180082D38 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180095540 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 */

__int64 __fastcall CLivePreview::_HideExistingVisuals(CLivePreview *this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v6; // rcx
  int started; // eax

  v2 = 0;
  v3 = a2;
  v4 = 0LL;
  if ( *((_DWORD *)this + 82) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 38) + 40 * v4) + 384LL);
      if ( v6 )
      {
        started = CTopLevelWindow::StartLivePreviewAnimation(v6, (v3 ^ 1u) + 1);
        v2 = started;
        if ( started < 0 )
          break;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 82) )
        return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x489u);
  }
  return v2;
}
