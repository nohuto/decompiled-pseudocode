/*
 * XREFs of ?MarshalInterface@FtmBase@WRL@Microsoft@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180293D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::FtmBase::MarshalInterface(
        Microsoft::WRL::FtmBase *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  __int64 v7; // rcx

  v7 = *((_QWORD *)this + 3);
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v7 + 40LL))(
             v7,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  else
    return 2147942414LL;
}
