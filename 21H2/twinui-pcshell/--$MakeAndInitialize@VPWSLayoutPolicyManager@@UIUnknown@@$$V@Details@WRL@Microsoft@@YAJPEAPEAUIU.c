/*
 * XREFs of ??$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18029532C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPWSLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180295870 (-CreateInstance@-$SimpleClassFactory@VPWSLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkn.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0PWSLayoutPolicyManager@@QEAA@XZ @ 0x18029547C (--0PWSLayoutPolicyManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x18029629C (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PWSLayoutPolicyManager,IUnknown,>(_QWORD *a1)
{
  PWSLayoutPolicyManager *v2; // rax
  int v3; // edi
  PWSLayoutPolicyManager *v4; // rbx

  *a1 = 0LL;
  v2 = (PWSLayoutPolicyManager *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = PWSLayoutPolicyManager::PWSLayoutPolicyManager(v2);
    v3 = PWSLayoutPolicyManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(PWSLayoutPolicyManager *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(PWSLayoutPolicyManager *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
