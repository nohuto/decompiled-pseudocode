/*
 * XREFs of ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A90A0
 * Callers:
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C016BBF4 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_M.c)
 *     DxgkProcessLockScreen @ 0x1C016BEC0 (DxgkProcessLockScreen.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C018B9A4 (OutputDuplProcessDestroyDevice.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8AD0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1C01A9020 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1C01E0F6C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL.c)
 *     DxgkSessionDisconnected @ 0x1C01E4500 (DxgkSessionDisconnected.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C031ADA4 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C032A700 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C032DEE0 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C032EF9C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C032F258 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C032F4EC (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C032F774 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     OutputDuplGetDebugInfo @ 0x1C0330994 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C0330A90 (OutputDuplGetDiagnosticBuffer.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C0330FF0 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 *     OutputDuplRemoteSessionReconnected @ 0x1C033104C (OutputDuplRemoteSessionReconnected.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C0338AF0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 */

struct OUTPUTDUPL_MGR *FindRemoteOutputDuplMgr(void)
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  __int64 CurrentProcessSessionId; // rsi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rax
  int v11; // r9d
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF
  char v13; // [rsp+58h] [rbp-10h]

  v1 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v1 )
    goto LABEL_34;
  v13 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v0);
  v12 = v1 + 88;
  if ( v1 == -88 )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v12 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = v12;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v3 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v3 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v3 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v3 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v11 = *(_DWORD *)(v3 + 36);
        if ( v11 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v4, &EventBlockThread, v5, v11);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 16));
      ExAcquirePushLockExclusiveEx(v3 + 8, 0LL);
    }
    if ( *(_QWORD *)(v3 + 24) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v3 + 32) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v3 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 32) = 1;
  }
  v13 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v1 + 80) )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v12);
    v7 = 0LL;
  }
  else
  {
    _mm_lfence();
    v6 = v12;
    v7 = *(_QWORD *)(*(_QWORD *)(v1 + 48) + 8 * CurrentProcessSessionId);
    v13 = 0;
    if ( *(struct _KTHREAD **)(v12 + 24) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v12, 0LL, 0LL);
    if ( *(int *)(v6 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(v6 + 32))-- == 1 )
    {
      *(_QWORD *)(v6 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v6 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 8);
    if ( v9 )
      return *(struct OUTPUTDUPL_MGR **)(v9 + 120);
    WdLogSingleEntry1(2LL, 3909LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"OUTPUTDUPL_SESSION_MGR is NULL", 3909LL, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
LABEL_34:
    WdLogSingleEntry1(2LL, 3902LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"DXGSESSIONDATA is NULL", 3902LL, 0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
