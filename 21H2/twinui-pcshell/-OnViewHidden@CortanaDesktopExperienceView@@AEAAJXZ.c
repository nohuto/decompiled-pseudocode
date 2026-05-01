/*
 * XREFs of ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027EAE4
 * Callers:
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18027E180 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18000CD68 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18027D454 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F528 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18027FF2C (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x180280B2C (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x18028164C (-UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnViewHidden(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_WORD *)this + 119) = 0;
  *((_BYTE *)this + 237) = 0;
  *((_BYTE *)this + 242) = 0;
  v2 = CortanaDesktopExperienceView::SetZBand(this, 13LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x509,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
  if ( *((_BYTE *)this + 296) )
  {
    v3 = CortanaDesktopExperienceView::PostTargetedMessage(this, 2LL, 0LL);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x50D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
  }
  CortanaDesktopExperienceView::UpdateSuggestionsShowing(this, 0);
  if ( *((_BYTE *)this + 236)
    && (*((_BYTE *)this + 236) = 0,
        v4 = CortanaDesktopExperienceView::NotifyView(this, L"NotifyAppTransitionCanceled", 0LL),
        v5 = v4,
        v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x518,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    if ( *((_BYTE *)this + 296) )
    {
      v7 = CExperienceManagerAnimationHelper::End((CortanaDesktopExperienceView *)((char *)this + 352));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x51D,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v7);
    }
    *((_DWORD *)this + 62) = 2;
    CortanaDesktopExperienceView::PositionCortanaWindow(this, 1, 0);
    return 0LL;
  }
}
