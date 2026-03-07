char __fastcall TdrIsRecoveryRequired(struct _TDR_RECOVERY_CONTEXT *a1)
{
  KIRQL CurrentIrql; // al
  unsigned int v4; // eax
  int v5; // ecx
  __int64 v6; // rax
  DXGADAPTER *v7; // rcx
  int v8; // eax
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !g_TdrConfig
    || (unsigned int)TdrAllowToDebugTimeout()
    || _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, (signed __int64)a1, 0LL) )
  {
    return 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
  {
    WdLogSingleEntry2(0LL, a1, CurrentIrql);
    return 0;
  }
  if ( KeAreAllApcsDisabled() )
  {
    v4 = *((_DWORD *)a1 + 4);
    if ( v4 > 0xB || (v5 = 3730, !_bittest(&v5, v4)) )
    {
      TdrCollectDbgInfoStage1(a1, 0);
      v9 = 0;
      TdrRetrieveSecondaryBucketingKey(a1, &v9);
      *((_QWORD *)a1 + 355) = 0LL;
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
    }
    WdDiagNotifyUser(8LL, 2LL, 0LL, 0LL);
    return 0;
  }
  TdrUpdateDbgReport(a1, 1);
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 2928LL);
  if ( v6
    && (*(int (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 584LL))(a1) < 0 )
  {
    *((_QWORD *)a1 + 13) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2928LL) + 736LL) + 8LL)
                                     + 584LL);
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  }
  TdrCollectDbgInfoStage1(a1, 1);
  if ( ((*((_DWORD *)a1 + 4) - 2) & 0xFFFFFFFB) == 0 && !*((_QWORD *)a1 + 9) && g_TdrDebugMode != 3 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 4) + 213LL) )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)&g_TdrHistory, a1, 0) && g_TdrDebugMode != 3 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( g_TdrConfig == 1 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( !TdrIsDisplayOnlyTdr(*((_DWORD *)a1 + 4)) && !DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)a1 + 4)) )
  {
    v8 = DXGADAPTER::PrepareToReset(v7, a1);
    if ( v8 < 0 )
    {
      if ( v8 != -1073741643 )
        *((_QWORD *)a1 + 13) = -1LL;
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
    }
  }
  return 1;
}
