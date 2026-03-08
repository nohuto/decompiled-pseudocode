/*
 * XREFs of ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A89D0
 * Callers:
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C0166634 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_M.c)
 *     DxgkProcessLockScreen @ 0x1C0166900 (DxgkProcessLockScreen.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1C017C2AC (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C017DAAC (OutputDuplProcessDestroyDevice.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1C01A8950 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     DxgkSessionDisconnected @ 0x1C01C5D50 (DxgkSessionDisconnected.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C0315DC8 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0325CC0 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C03294A0 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C032A55C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C032A818 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C032AAAC (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C032AD34 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     OutputDuplGetDebugInfo @ 0x1C032BF54 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C032C050 (OutputDuplGetDiagnosticBuffer.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C032C5B0 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 *     OutputDuplRemoteSessionReconnected @ 0x1C032C60C (OutputDuplRemoteSessionReconnected.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C03340B0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

struct OUTPUTDUPL_MGR *FindRemoteOutputDuplMgr(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 CurrentProcessSessionId; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // rax
  int v14; // r9d
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF
  char v16; // [rsp+58h] [rbp-10h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v2 )
    goto LABEL_34;
  v16 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v1, v0, v3, v4);
  v15 = v2 + 88;
  if ( v2 == -88 )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v15 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = v15;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v6 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v6 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v6 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v14 = *(_DWORD *)(v6 + 36);
        if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v7, (const EVENT_DESCRIPTOR *)"g", v8, v14);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 16));
      ExAcquirePushLockExclusiveEx(v6 + 8, 0LL);
    }
    if ( *(_QWORD *)(v6 + 24) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v6 + 32) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v6 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v6 + 32) = 1;
  }
  v16 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v2 + 80) )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v15);
    v10 = 0LL;
  }
  else
  {
    _mm_lfence();
    v9 = v15;
    v10 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 8 * CurrentProcessSessionId);
    v16 = 0;
    if ( *(struct _KTHREAD **)(v15 + 24) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v15, 0LL, 0LL);
    if ( *(int *)(v9 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(v9 + 32))-- == 1 )
    {
      *(_QWORD *)(v9 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( v12 )
      return *(struct OUTPUTDUPL_MGR **)(v12 + 120);
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
