/*
 * XREFs of ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1C03090A0
 * Callers:
 *     <none>
 * Callees:
 *     ?TdrValidateDebugMode@@YAXXZ @ 0x1C004F094 (-TdrValidateDebugMode@@YAXXZ.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C03092A0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1C030A0D0 (-TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C030AF10 (TdrBugcheckOnTimeout.c)
 */

bool __fastcall TdrAllowToDebugEngineTimeout(struct _VIDSCH_NODE *a1, struct DXGADAPTER *a2)
{
  struct _VIDSCH_NODE *v3; // rbx
  char v4; // al
  char v5; // bl
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  ULONG_PTR v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1;
  if ( (dword_1C013D460 & 1) != 0 )
  {
    v4 = byte_1C013D464;
  }
  else
  {
    LOBYTE(a1) = 1;
    dword_1C013D460 |= 1u;
    v4 = (unsigned __int8)WdIsDebuggerPresent(a1) != 0;
    byte_1C013D464 = v4;
  }
  byte_1C013BA84 = v4;
  TdrValidateDebugMode();
  if ( (byte_1C013BA84 || (unsigned __int8)WdQueryDebugFlag(0LL)) && !g_TdrDebugMode )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The GPU Scheduler detected an engine timeout condition. We broke into the  debugger to allow a chance for debugging this issue.\n");
    g_EngineTimeoutNode = v3;
    v5 = 1;
    do
    {
      if ( v5 )
      {
        v5 = 0;
        g_TdrDebugMode = -1;
      }
      else
      {
        DbgPrintEx(0x65u, 0, "dxgkrnl!g_TdrDebugMode is set to invalid value 0x%X\n", g_TdrDebugMode);
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "Please edit dxgkrnl!g_TdrDebugMode variable to choose timeout debug policy\n"
        "using command 'ed dxgkrnl!g_TdrDebugMode (mode)'\n"
        "           or 'ed 0x%p (mode)'\n"
        "where (mode) is: \n"
        "      0x00 - to continue execution as planned in end-user scenario\n"
        "      0x01 - to ignore timeout (useful to debug the timeout)\n"
        "      0x02 - to continue execution as with mode 0x00 but disable the timeout debugging\n"
        "      0x03 - same as 0x02 but will not check for consecutive recoveries.\n"
        "\n",
        (const void *)&g_TdrDebugMode);
      __debugbreak();
    }
    while ( (unsigned int)g_TdrDebugMode >= 4 );
    g_EngineTimeoutNode = 0LL;
  }
  if ( !*((_BYTE *)a2 + 213) || g_TdrConfig == 1 )
  {
    v11 = 1;
    RecoveryContext = TdrCreateRecoveryContext();
    v8 = (ULONG_PTR)RecoveryContext;
    if ( RecoveryContext )
    {
      *((_DWORD *)RecoveryContext + 4) = 6;
      *((_QWORD *)RecoveryContext + 1) = &v11;
      *((_QWORD *)RecoveryContext + 4) = a2;
      _InterlockedAdd64((volatile signed __int64 *)a2 + 3, 1uLL);
      *((_QWORD *)RecoveryContext + 5) = -1LL;
      v9 = (_QWORD *)*((_QWORD *)RecoveryContext + 4);
      *((_DWORD *)RecoveryContext + 36) = 65540;
      *((_DWORD *)RecoveryContext + 37) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9[27] + 64LL) + 40LL) + 28LL);
      v10 = v9[74];
      if ( !v10 )
        v10 = v9[56];
      *(_QWORD *)(v8 + 104) = v10;
      TdrCollectDbgInfoStage1((struct _TDR_RECOVERY_CONTEXT *)v8, 1);
    }
    TdrBugcheckOnTimeout(v8);
  }
  return g_TdrDebugMode == 1;
}
