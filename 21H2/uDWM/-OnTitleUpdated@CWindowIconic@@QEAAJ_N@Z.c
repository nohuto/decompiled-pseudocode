/*
 * XREFs of ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800453D0
 * Callers:
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x18001629C (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180044470 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x1800164A0 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016970 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18002AD80 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     StringCchLengthW @ 0x18002C734 (StringCchLengthW.c)
 */

__int64 __fastcall CWindowIconic::OnTitleUpdated(CWindowIconic *this, size_t a2)
{
  char v3; // si
  HRESULT v4; // eax
  char *v5; // r11
  unsigned int v6; // ebx
  int v7; // eax
  int v9; // eax
  size_t pcchLength; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  v4 = StringCchLengthW(*(STRSAFE_PCNZWCH *)(*((_QWORD *)this + 9) + 16LL), a2, &pcchLength);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x291u);
  }
  else
  {
    v7 = CWindowData::SetTitle(*((CWindowData **)this + 10), v5, pcchLength);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x293u);
    }
    else
    {
      CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x10000);
      if ( v3 )
      {
        v9 = CVisual::RenderRecursive(*((CVisual **)this + 11));
        v6 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x299u);
      }
    }
  }
  return v6;
}
