/*
 * XREFs of ?OnCortanaDeviceLocked@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1803A4C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::OnCortanaDeviceLocked(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  if ( *((_DWORD *)this + 16) == 5 )
    (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *, struct IInspectable *))(**((_QWORD **)this + 16) + 56LL))(
      *((_QWORD *)this + 16),
      a2,
      a3);
  return 0LL;
}
