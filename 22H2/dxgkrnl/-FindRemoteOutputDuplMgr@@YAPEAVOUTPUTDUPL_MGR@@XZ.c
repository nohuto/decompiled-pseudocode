/*
 * XREFs of ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0123CD0
 * Callers:
 *     OutputDuplProcessTerminate @ 0x1C00EA678 (OutputDuplProcessTerminate.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C00EF2A8 (OutputDuplProcessDestroyDevice.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00F9FD0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0114E00 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0123534 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C0123BA0 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0123C80 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C014ECAC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C014F364 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1C014FBC8 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL.c)
 *     DxgkSessionDisconnected @ 0x1C0169EE0 (DxgkSessionDisconnected.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C026E918 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C029C240 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C029CDEC (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_M.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C029CFC8 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C029D1A8 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     DxgkProcessLockScreen @ 0x1C029E280 (DxgkProcessLockScreen.c)
 *     OutputDuplGetDebugInfo @ 0x1C029E378 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C029E468 (OutputDuplGetDiagnosticBuffer.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C029E9C8 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 *     OutputDuplRemoteSessionReconnected @ 0x1C029EA24 (OutputDuplRemoteSessionReconnected.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 */

struct OUTPUTDUPL_MGR *__fastcall FindRemoteOutputDuplMgr(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 CurrentProcessSessionId; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdi
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  __int64 v19; // rax
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-18h] BYREF
  char v31; // [rsp+28h] [rbp-10h]

  v4 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 102);
  if ( !v4 )
    goto LABEL_25;
  v31 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v3, v2);
  v30 = v4 + 80;
  if ( v4 == -80 )
  {
    v21 = WdLogNewEntry5_WdAssertion(0LL, v5);
    *(_QWORD *)(v21 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v21);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v30 + 16) == CurrentThread )
  {
    v22 = WdLogNewEntry5_WdAssertion(CurrentThread, v5);
    *(_QWORD *)(v22 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( v31 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v5);
    v23[5] = &v30;
    v23[3] = 275LL;
    v23[4] = 4LL;
    v23[6] = 0LL;
    v23[7] = 0LL;
    WdLogEvent5_WdCriticalError(v23);
  }
  v8 = v30;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v8 + 16) == KeGetCurrentThread() )
  {
    v24 = *(_DWORD *)(v8 + 24);
    if ( v24 <= 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v25 + 24) = 661LL;
      WdLogEvent5_WdAssertion(v25);
      v24 = *(_DWORD *)(v8 + 24);
    }
    v12 = v24 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v20 = *(_DWORD *)(v8 + 28);
        if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, &EventBlockThread, v11, v20);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v8 + 8));
      ExAcquirePushLockExclusiveEx(v8, 0LL);
    }
    if ( *(_QWORD *)(v8 + 16) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v26 + 24) = 685LL;
      WdLogEvent5_WdAssertion(v26);
    }
    if ( *(_DWORD *)(v8 + 24) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v27 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v27);
    }
    *(_QWORD *)(v8 + 16) = KeGetCurrentThread();
    v12 = 1;
  }
  *(_DWORD *)(v8 + 24) = v12;
  v31 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v4 + 72) )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v30, v9);
LABEL_25:
    v19 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v19 + 24) = 3903LL;
    goto LABEL_26;
  }
  _mm_lfence();
  v13 = v30;
  v14 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 8 * CurrentProcessSessionId);
  v31 = 0;
  if ( *(struct _KTHREAD **)(v30 + 16) != KeGetCurrentThread() )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
    v28[3] = 275LL;
    v28[4] = 4LL;
    v28[5] = v13;
    v28[6] = 0LL;
    v28[7] = 0LL;
    WdLogEvent5_WdCriticalError(v28);
  }
  v15 = *(_DWORD *)(v13 + 24);
  if ( v15 <= 0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v29 + 24) = 705LL;
    WdLogEvent5_WdAssertion(v29);
    v15 = *(_DWORD *)(v13 + 24);
  }
  v16 = v15 - 1;
  *(_DWORD *)(v13 + 24) = v16;
  if ( !v16 )
  {
    *(_QWORD *)(v13 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( !v14 )
    goto LABEL_25;
  v17 = *(_QWORD *)(v14 + 8);
  if ( v17 )
    return *(struct OUTPUTDUPL_MGR **)(v17 + 40);
  v19 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v19 + 24) = 3910LL;
LABEL_26:
  WdLogEvent5_WdError(v19);
  return 0LL;
}
