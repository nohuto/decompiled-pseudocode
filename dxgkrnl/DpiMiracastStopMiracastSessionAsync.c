__int64 __fastcall DpiMiracastStopMiracastSessionAsync(volatile signed __int32 *P, char a2, _QWORD *a3, int a4)
{
  unsigned int v8; // edi
  ULONG v9; // eax
  __int64 Pool2; // rax
  __int64 v11; // rdi
  PDRIVER_OBJECT v12; // rcx

  if ( !a2 || a3 )
  {
    _InterlockedIncrement(P + 6);
    _InterlockedXor(P + 7, (unsigned int)DpiMiracastStopMiracastSessionAsync);
    v9 = IoSizeofWorkItem();
    Pool2 = ExAllocatePool2(64LL, v9 + 32LL, 1953656900LL);
    v11 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = P;
      *(_BYTE *)(Pool2 + 8) = a2;
      if ( a3 )
        *(_QWORD *)(Pool2 + 16) = *a3;
      v12 = g_pDriverObject;
      *(_DWORD *)(Pool2 + 24) = a4;
      IoInitializeWorkItem(v12, (PIO_WORKITEM)(Pool2 + 32));
      IoQueueWorkItemEx((PIO_WORKITEM)(v11 + 32), DpiMiracastStopMiracastSessionWork, DelayedWorkQueue, (PVOID)v11);
      return 0;
    }
    else
    {
      v8 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopMiracastSessionAsync);
    }
  }
  else
  {
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, P, -1073741811LL);
  }
  return v8;
}
