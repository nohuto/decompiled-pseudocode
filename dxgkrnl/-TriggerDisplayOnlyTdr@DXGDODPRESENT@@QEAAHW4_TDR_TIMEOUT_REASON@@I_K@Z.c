__int64 __fastcall DXGDODPRESENT::TriggerDisplayOnlyTdr(__int64 a1, int a2, int a3, __int64 a4)
{
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  ULONG_PTR StartContext; // rbx
  struct DXGADAPTER *Adapter; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  NTSTATUS v16; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF
  void *ThreadHandle; // [rsp+90h] [rbp+8h] BYREF

  _m_prefetchw((const void *)(a1 + 140));
  v8 = *(_DWORD *)(a1 + 140);
  do
  {
    v9 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 140), v8 | 0x80000000, v8);
  }
  while ( v9 != v8 );
  if ( (v8 & 0x80000000) == 0 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    StartContext = (ULONG_PTR)RecoveryContext;
    if ( RecoveryContext )
    {
      *((_DWORD *)RecoveryContext + 4) = a2;
      Adapter = DXGDODPRESENT::GetAdapter((DXGDODPRESENT *)a1);
      *(_QWORD *)(StartContext + 32) = Adapter;
      _InterlockedIncrement64((volatile signed __int64 *)Adapter + 3);
      v13 = *(_QWORD **)(StartContext + 32);
      *(_QWORD *)(StartContext + 40) = -1LL;
      *(_DWORD *)(StartContext + 144) = 65540;
      *(_DWORD *)(StartContext + 148) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13[27] + 64LL) + 40LL) + 28LL);
      *(_QWORD *)(StartContext + 24) = a4;
      *(_DWORD *)(StartContext + 80) = a3;
      v14 = v13[74];
      if ( !v14 )
        v14 = v13[56];
      *(_QWORD *)(StartContext + 104) = v14;
      if ( !TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)StartContext) )
        return 1LL;
      memset(&ObjectAttributes.Length + 1, 0, 20);
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      ThreadHandle = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      v16 = PsCreateSystemThread(
              &ThreadHandle,
              0,
              &ObjectAttributes,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              0LL,
              (PKSTART_ROUTINE)DXGADAPTER::PresentDisplayOnlyRecoveryWorker,
              (PVOID)StartContext);
      if ( v16 < 0 )
        TdrBugcheckOnTimeout(StartContext, v16, 15);
      ZwClose(ThreadHandle);
    }
  }
  return 0LL;
}
