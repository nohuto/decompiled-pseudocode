/*
 * XREFs of ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x18028149C
 * Callers:
 *     ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x18027AB30 (-ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027E934 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027EA60 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CortanaDesktopExperienceView::UpdateSuggestionsShowing(CortanaDesktopExperienceView *this, char a2)
{
  __int64 v2; // rax
  void (*v3)(void); // rax

  if ( a2 != *((_BYTE *)this + 136) )
  {
    *((_BYTE *)this + 136) = a2;
    v2 = **((_QWORD **)this + 12);
    if ( a2 )
      v3 = *(void (**)(void))(v2 + 120);
    else
      v3 = *(void (**)(void))(v2 + 128);
    v3();
  }
}
