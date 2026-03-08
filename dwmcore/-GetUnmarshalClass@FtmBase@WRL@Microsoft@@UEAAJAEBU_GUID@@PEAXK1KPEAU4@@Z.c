/*
 * XREFs of ?GetUnmarshalClass@FtmBase@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAXK1KPEAU4@@Z @ 0x180292B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::FtmBase::GetUnmarshalClass(
        Microsoft::WRL::FtmBase *this,
        const struct _GUID *a2,
        void *a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void *))(*(_QWORD *)v3 + 24LL))(v3, a2, a3);
  else
    return 2147942414LL;
}
