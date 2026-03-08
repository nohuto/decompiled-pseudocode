/*
 * XREFs of ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800F90B8
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800508A8 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800CD9D0 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CDC70 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?UpdateMMCSSTask@CKst@@EEAAJXZ @ 0x1800F8E80 (-UpdateMMCSSTask@CKst@@EEAAJXZ.c)
 *     ?Run@CGlobalMit@@MEAAKXZ @ 0x1800F8F00 (-Run@CGlobalMit@@MEAAKXZ.c)
 *     _lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_ @ 0x180103940 (_lambda_08f8e6791065478e4a38815f49fd4aba_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMmcssTask::Revert(struct _RTL_CRITICAL_SECTION *this)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  EnterCriticalSection(this);
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo && *(_QWORD *)&DebugInfo[2].Flags )
  {
    ((void (*)(void))this[1].LockSemaphore)();
    *(_QWORD *)&this[1].DebugInfo[2].Flags = 0LL;
  }
  LOBYTE(this[2].DebugInfo) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
}
