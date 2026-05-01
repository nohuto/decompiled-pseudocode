/*
 * XREFs of ?ControlLost@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1802766C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x180016E80 (-UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     ?UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180075AC4 (-UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180082058 (-DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?ResetCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1802777B0 (-ResetCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ControlLost(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  *a4 = 0LL;
  SearchAppDesktopExperienceView::DismissCortanaApp((SearchAppDesktopExperienceView *)a1);
  *(_BYTE *)(a1 + 205) = 0;
  if ( *(_DWORD *)(a1 + 228) )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      *(_DWORD *)(a1 + 228) = 0;
    }
  }
  SearchAppDesktopExperienceView::UnregisterGlobalBackButton((SearchAppDesktopExperienceView *)a1);
  SearchAppDesktopExperienceView::UpdateSuggestionsShowing((SearchAppDesktopExperienceView *)a1, 0);
  SearchAppDesktopExperienceView::ResetCortanaWindowRegion((SearchAppDesktopExperienceView *)a1);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 152) + 160LL))(
    *(_QWORD *)(a1 + 152),
    *(_QWORD *)(a1 + 160));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 152) + 176LL))(
    *(_QWORD *)(a1 + 152),
    *(_QWORD *)(a1 + 168));
  v6 = *(_QWORD *)(a1 + 152);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 152) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0LL;
}
