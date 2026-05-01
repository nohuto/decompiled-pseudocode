/*
 * XREFs of ??$MakeAndInitialize@VPenWorkspaceDiscoverBrokerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802898C4
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18028AA80 (-CreateInstance@-$SimpleClassFactory@VPenWorkspaceDiscoverBrokerFactory@@$0A@@WRL@Microsoft@@UEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0PenWorkspaceDiscoverBrokerFactory@@QEAA@XZ @ 0x180289FB0 (--0PenWorkspaceDiscoverBrokerFactory@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@PenWorkspaceDiscoverBrokerFactory@@QEAAJXZ @ 0x18028BB68 (-RuntimeClassInitialize@PenWorkspaceDiscoverBrokerFactory@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspaceDiscoverBrokerFactory,IUnknown,>(_QWORD *a1)
{
  PenWorkspaceDiscoverBrokerFactory *v2; // rax
  int v3; // edi
  PenWorkspaceDiscoverBrokerFactory *v4; // rbx

  *a1 = 0LL;
  v2 = (PenWorkspaceDiscoverBrokerFactory *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = PenWorkspaceDiscoverBrokerFactory::PenWorkspaceDiscoverBrokerFactory(v2);
    v3 = PenWorkspaceDiscoverBrokerFactory::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(PenWorkspaceDiscoverBrokerFactory *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(PenWorkspaceDiscoverBrokerFactory *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
