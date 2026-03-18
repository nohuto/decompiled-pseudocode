/*
 * XREFs of ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C030F0D0
 * Callers:
 *     ??1CTDR_GDI_RESET_THREAD@@MEAA@XZ @ 0x1C030D520 (--1CTDR_GDI_RESET_THREAD@@MEAA@XZ.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C030EDD0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C030F6D0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 *     ?Worker@CTDR_SUBMIT_REPORT_THREAD@@MEAAXXZ @ 0x1C030FAF0 (-Worker@CTDR_SUBMIT_REPORT_THREAD@@MEAAXXZ.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1C030DE44 (-Start@CVP_SYSTEM_THREAD@@QEAAJXZ.c)
 *     ?TdrDeleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030F040 (-TdrDeleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C030FD40 (TdrBugcheckOnTimeout.c)
 */

void __fastcall TdrDereferenceRecoveryContext(_QWORD *P, char a2)
{
  __int64 Pool2; // rax
  DXGADAPTER *v4; // rcx

  if ( P )
  {
    if ( P[355] && a2 )
    {
      Pool2 = ExAllocatePool2(256LL, 32LL, 1380209782LL);
      if ( !Pool2 )
        TdrBugcheckOnTimeout((ULONG_PTR)P);
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_DWORD *)(Pool2 + 16) = 0;
      *(_QWORD *)Pool2 = &CTDR_SUBMIT_REPORT_THREAD::`vftable';
      *(_QWORD *)(Pool2 + 24) = P;
      if ( CVP_SYSTEM_THREAD::Start((void **)Pool2) < 0 )
        TdrBugcheckOnTimeout((ULONG_PTR)P);
      *((_BYTE *)P + 2912) = 1;
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 722, 0xFFFFFFFF) <= 1 )
    {
      v4 = (DXGADAPTER *)P[4];
      if ( v4 )
      {
        DXGADAPTER::ReleaseReference(v4);
        P[4] = 0LL;
      }
      TdrDeleteRecoveryContext(P);
    }
  }
}
