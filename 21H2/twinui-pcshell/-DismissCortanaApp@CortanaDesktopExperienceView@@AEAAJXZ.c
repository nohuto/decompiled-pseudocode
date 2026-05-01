/*
 * XREFs of ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027AFFC
 * Callers:
 *     ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x18027ACE0 (-ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 *     ?OnDismiss@CortanaDesktopExperienceView@@EEAAJXZ @ 0x18027D4F0 (-OnDismiss@CortanaDesktopExperienceView@@EEAAJXZ.c)
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x18027D530 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18027D988 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18027E518 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x18027CCD8 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1802809D0 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::DismissCortanaApp(CortanaDesktopExperienceView *this)
{
  if ( CortanaDesktopExperienceView::IsViewVisible(this) )
  {
    CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, 0);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12));
    *((_BYTE *)this + 242) = 0;
  }
  return 0LL;
}
