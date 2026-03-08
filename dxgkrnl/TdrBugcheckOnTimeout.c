/*
 * XREFs of TdrBugcheckOnTimeout @ 0x1C030AF10
 * Callers:
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02B3E78 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BCD08 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1C03090A0 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C030A2A0 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A4E0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A750 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A830 (-TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ @ 0x1C030AC50 (-Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C03D0218 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A36C (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A9BC (-TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

void __fastcall __noreturn TdrBugcheckOnTimeout(ULONG_PTR BugCheckParameter1, int a2, int a3)
{
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v5; // rbp
  struct _TDR_RECOVERY_CONTEXT *v6; // rcx
  unsigned int v7; // eax
  void *Pool2; // rax
  __int64 v9; // rdi
  int v10; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  void *BugCheckParameter2; // [rsp+40h] [rbp+8h]

  BugCheckParameter4 = a3;
  v5 = a2;
  BugCheckParameter2 = (void *)TdrGetDbgOwnerTag((const struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
  if ( !BugCheckParameter2 || BugCheckParameter2 == (void *)-1LL )
    BugCheckParameter2 = retaddr;
  if ( BugCheckParameter1 )
  {
    TdrUpdateDbgBuffer(v6);
    if ( *(_QWORD *)(BugCheckParameter1 + 2848) )
    {
      if ( *(_QWORD *)(BugCheckParameter1 + 2856) )
      {
        v7 = *(_DWORD *)(BugCheckParameter1 + 2856);
        if ( v7 )
        {
          if ( v7 < 0x1000 )
            v7 = 4096;
          Pool2 = (void *)ExAllocatePool2(64LL, v7, 1380209782LL);
          v9 = (__int64)Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, *(const void **)(BugCheckParameter1 + 2848), *(_QWORD *)(BugCheckParameter1 + 2856));
            v10 = *(_DWORD *)(BugCheckParameter1 + 2856);
            if ( v10 )
            {
              qword_1C013D388 = v9;
              dword_1C013D384 = v10;
            }
            WdDbgReportCancel(*(_QWORD *)(BugCheckParameter1 + 2840));
          }
        }
      }
    }
  }
  KeBugCheckEx(0x116u, BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, v5, BugCheckParameter4);
}
