void __fastcall DXGDEVICE::RemoveResourceFromDeviceList(struct _KTHREAD **this, struct DXGRESOURCE *a2)
{
  char *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // r9d

  v2 = (char *)(this + 30);
  if ( this != (struct _KTHREAD **)-240LL && this[31] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v9 = *((_DWORD *)v2 + 6);
      if ( v9 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (const EVENT_DESCRIPTOR *)"g", v6, v9);
    }
    ExAcquirePushLockExclusiveEx(v2, 0LL);
  }
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  if ( a2 == this[7] || *((_QWORD *)a2 + 4) )
  {
    v7 = *((_QWORD *)a2 + 5);
    if ( v7 )
      *(_QWORD *)(v7 + 32) = *((_QWORD *)a2 + 4);
    v8 = *((_QWORD *)a2 + 4);
    if ( v8 )
    {
      *(_QWORD *)(v8 + 40) = *((_QWORD *)a2 + 5);
    }
    else
    {
      if ( this[7] != a2 )
      {
        WdLogSingleEntry1(1LL, 8950LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pResourceList == pResource",
          8950LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      this[7] = (struct _KTHREAD *)*((_QWORD *)a2 + 5);
    }
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
