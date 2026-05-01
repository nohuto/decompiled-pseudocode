/*
 * XREFs of ??$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18020B250
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTaskbarLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18020C410 (-CreateInstance@-$SimpleClassFactory@VTaskbarLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUI.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0TaskbarLayoutPolicyManager@@QEAA@XZ @ 0x18020B784 (--0TaskbarLayoutPolicyManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x18020EAB0 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskbarLayoutPolicyManager,IUnknown,>(_QWORD *a1)
{
  TaskbarLayoutPolicyManager *v2; // rax
  int v3; // edi
  TaskbarLayoutPolicyManager *v4; // rbx

  *a1 = 0LL;
  v2 = (TaskbarLayoutPolicyManager *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = TaskbarLayoutPolicyManager::TaskbarLayoutPolicyManager(v2);
    v3 = TaskbarLayoutPolicyManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(TaskbarLayoutPolicyManager *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(TaskbarLayoutPolicyManager *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
