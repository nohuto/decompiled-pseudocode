/*
 * XREFs of ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x18004C43C
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18004E790 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x180037DA0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ??0CImmersiveApp@@QEAA@XZ @ 0x18004AE30 (--0CImmersiveApp@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CImmersiveApp,IImmersiveApplication,unsigned short const * &,unsigned short const * &,unsigned long &,IImmersiveMonitor * &,PER_APPLICATION_DATA * &,IIAMServiceProvider * &,unsigned __int64 &>(
        _QWORD *a1,
        const unsigned __int16 **a2,
        char **a3,
        int *a4,
        struct IImmersiveMonitor **a5,
        struct PER_APPLICATION_DATA **a6,
        struct IIAMServiceProvider **a7,
        unsigned __int64 *a8)
{
  CImmersiveApp *v12; // rax
  CImmersiveApp *v13; // rbx
  int v14; // edi

  *a1 = 0LL;
  v12 = (CImmersiveApp *)operator new(0x3A8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v13 = CImmersiveApp::CImmersiveApp(v12);
    v14 = CImmersiveApp::RuntimeClassInitialize(v13, *a2, *a3, *a4, *a5, *a6, *a7, *a8);
    if ( v14 >= 0 )
      v14 = (**(__int64 (__fastcall ***)(CImmersiveApp *, GUID *, _QWORD *))v13)(
              v13,
              &GUID_8b14e88b_5663_4caf_b196_c31479262831,
              a1);
    if ( v13 )
      (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v14;
}
