/*
 * XREFs of DpiMiracastStopMiracastSessionAsync @ 0x1C00541A0
 * Callers:
 *     DxgNotifyDpcCB @ 0x1C000E1C0 (DxgNotifyDpcCB.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C00540A0 (DpiMiracastReleaseMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionAsync(volatile signed __int32 *P, __int64 a2, _QWORD *a3, int a4)
{
  char v6; // bp
  __int64 v8; // rax
  ULONG v10; // eax
  char *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rdi
  unsigned int v17; // edi
  __int64 v18; // rax
  PDRIVER_OBJECT v19; // rcx

  v6 = a2;
  if ( !(_BYTE)a2 || a3 )
  {
    _InterlockedIncrement(P + 6);
    _InterlockedXor(P + 7, (unsigned int)DpiMiracastStopMiracastSessionAsync);
    v10 = IoSizeofWorkItem();
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v10 + 32LL, 0x74727044u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = P;
      PoolWithTag[8] = v6;
      if ( a3 )
        *((_QWORD *)PoolWithTag + 2) = *a3;
      v19 = g_pDriverObject;
      *((_DWORD *)PoolWithTag + 6) = a4;
      IoInitializeWorkItem(v19, (PIO_WORKITEM)(PoolWithTag + 32));
      IoQueueWorkItemEx((PIO_WORKITEM)(v16 + 32), DpiMiracastStopMiracastSessionWork, DelayedWorkQueue, v16);
      return 0;
    }
    else
    {
      v17 = -1073741801;
      v18 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
      *(_QWORD *)(v18 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v18);
      DpiMiracastReleaseMiracastDeviceContext((int *)P, (__int64)DpiMiracastStopMiracastSessionAsync);
    }
    return v17;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(P, a2);
    *(_QWORD *)(v8 + 24) = P;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
