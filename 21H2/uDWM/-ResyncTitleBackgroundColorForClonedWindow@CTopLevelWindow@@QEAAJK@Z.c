/*
 * XREFs of ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x18002C8D4
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C900 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800B6E40 (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x18002C454 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(CTopLevelWindow *this, int a2)
{
  unsigned int v3; // ebx
  CText *v4; // rcx
  int v5; // eax

  v3 = 0;
  v4 = (CText *)*((_QWORD *)this + 65);
  if ( v4 )
  {
    CText::SetBackgroundColor(v4, a2);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 64LL))(*((_QWORD *)this + 65));
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1255u);
  }
  return v3;
}
