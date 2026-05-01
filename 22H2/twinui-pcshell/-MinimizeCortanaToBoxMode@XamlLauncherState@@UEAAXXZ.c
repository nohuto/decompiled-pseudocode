/*
 * XREFs of ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x1803A4600
 * Callers:
 *     ?OnCortanaDismissRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18008ABE0 (-OnCortanaDismissRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shel.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1803A6440 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180010250 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 */

void __fastcall XamlLauncherState::MinimizeCortanaToBoxMode(XamlLauncherState *this)
{
  if ( IsSearchAndCortanaSplitEnabled() )
    *((_DWORD *)this + 260) = 2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 96LL))(*((_QWORD *)this + 8));
}
