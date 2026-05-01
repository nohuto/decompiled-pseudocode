/*
 * XREFs of ?SetForeground@XamlLauncher@@UEAAJXZ @ 0x18039D7E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::SetForeground(XamlLauncher *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 31);
  if ( !v1 )
    return 2147943568LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 152LL))(v1);
  return 0LL;
}
