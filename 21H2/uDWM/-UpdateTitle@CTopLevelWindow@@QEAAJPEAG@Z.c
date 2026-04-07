/*
 * XREFs of ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x180095918
 * Callers:
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x18001629C (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x180081BAC (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18008231C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x18002C59C (-SetText@CText@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateTitle(CTopLevelWindow *this, unsigned __int16 *a2)
{
  size_t *v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax

  v2 = (size_t *)*((_QWORD *)this + 65);
  v3 = 0;
  if ( v2 )
  {
    v4 = CText::SetText(v2, a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1238u);
  }
  return v3;
}
