void __fastcall PoFxPrepareDevice(__int64 a1, char a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *v7; // rdi
  ULONG_PTR *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  _m_prefetchw((const void *)(a1 + 296));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 296), 0) & 1) != 0 )
    return;
  _m_prefetchw((const void *)(a1 + 296));
  v4 = *(_DWORD *)(a1 + 296);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v4, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 2) != 0 )
    goto LABEL_7;
  if ( (unsigned int)PopFxFindDeviceAndAllocateUniqueId(a1, &v11) != -1073741738 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 2u);
LABEL_7:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
    v7 = (ULONG_PTR *)PopFxPluginList;
    v8 = 0LL;
    while ( v7 != &PopFxPluginList )
    {
      if ( (unsigned __int8)PopPluginPrepareDevice((ULONG_PTR)v7) )
      {
        LOBYTE(v10) = 1;
        PopDiagTraceFxDevicePreparation(a1, v7, a1 + 128, v10);
        v8 = v7;
        if ( v7 )
          goto LABEL_12;
        break;
      }
      v7 = (ULONG_PTR *)*v7;
    }
    if ( !a2 )
      goto LABEL_13;
LABEL_12:
    *(_QWORD *)(a1 + 144) = v8;
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 1u);
    *(_WORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
    *(_BYTE *)(a1 + 98) = 6;
    *(_DWORD *)(a1 + 100) = 0;
LABEL_13:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KeLeaveCriticalRegion();
  }
  v9 = v11;
  if ( v11 )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v11 + 276)) )
      KeSetEvent((PRKEVENT)(v9 + 280), 0, 0);
  }
}
