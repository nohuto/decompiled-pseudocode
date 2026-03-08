/*
 * XREFs of ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C030A8A0
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01E07B0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     DpiPowerArbiterThread @ 0x1C0210150 (DpiPowerArbiterThread.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0309FA0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C030A2A0 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A750 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

void __fastcall TdrResetFromTimeoutWorkItem(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  struct _LUID *v4; // rdx

  v1 = a1[4];
  v3 = *(_QWORD *)(v1 + 32);
  TdrResetFromTimeout((struct _TDR_RECOVERY_CONTEXT *)v1);
  v4 = *(struct _LUID **)(v1 + 2904);
  if ( !v4 || KeGetCurrentThread() == (struct _KTHREAD *)v4 )
  {
    LOBYTE(v4) = 1;
    TdrCompleteRecoveryContext((char *)v1, v4, 1);
    WdLogSingleEntry4(3LL, v3, MEMORY[0xFFFFF78000000320], KeGetCurrentThread(), v1);
  }
  else
  {
    WdLogSingleEntry1(4LL, 2675LL);
  }
  if ( *(struct _KTHREAD **)(v1 + 2904) != KeGetCurrentThread() )
  {
    TdrDereferenceRecoveryContext((_QWORD *)v1, 0);
    operator delete(a1);
  }
}
