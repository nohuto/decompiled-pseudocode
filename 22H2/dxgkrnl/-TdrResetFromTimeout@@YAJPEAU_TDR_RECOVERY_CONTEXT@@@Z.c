/*
 * XREFs of ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030F580
 * Callers:
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C030F6D0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02B9C5C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1C030DE44 (-Start@CVP_SYSTEM_THREAD@@QEAAJXZ.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C030F558 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C030FD40 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall TdrResetFromTimeout(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *v2; // rcx
  __int64 Pool2; // rax
  struct _TDR_RECOVERY_CONTEXT *v4; // rax
  __int64 v5; // r8

  if ( (int)DXGADAPTER::Reset(*(DXGADAPTER **)(BugCheckParameter1 + 32), BugCheckParameter1) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = -1LL;
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  v2 = *(struct _KTHREAD **)(BugCheckParameter1 + 2904);
  if ( (!v2 || KeGetCurrentThread() == v2) && *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 32) + 2920LL) )
  {
    Pool2 = ExAllocatePool2(256LL, 32LL, 1380209782LL);
    if ( !Pool2 )
      TdrBugcheckOnTimeout(BugCheckParameter1);
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_QWORD *)Pool2 = &CTDR_GDI_RESET_THREAD::`vftable';
    v4 = TdrReferenceRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    *(_QWORD *)(v5 + 24) = v4;
    if ( CVP_SYSTEM_THREAD::Start((void **)v5) < 0 )
      TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  return 0LL;
}
