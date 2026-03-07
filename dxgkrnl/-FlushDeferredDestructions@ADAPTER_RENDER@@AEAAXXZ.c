void __fastcall ADAPTER_RENDER::FlushDeferredDestructions(PERESOURCE **this)
{
  PERESOURCE *v2; // rdx
  DXGDEVICE *i; // rbx
  __int64 v4; // rcx
  DXGDEVICE **v5; // rdi
  DXGDEVICE *j; // rbx
  __int64 v7; // rcx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF
  struct _KAPC_STATE v9; // [rsp+80h] [rbp-48h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 2240LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 2240LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = this[2];
  if ( v2[18] != (PERESOURCE)KeGetCurrentThread() && !*((_BYTE *)v2 + 2870) )
  {
    WdLogSingleEntry1(1LL, 2245LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsStopResetLockExclusiveOwner() || GetAdapter()->IsTdrPending()",
      2245LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = (DXGDEVICE *)this[18]; i != (DXGDEVICE *)(this + 18) && i; i = *(DXGDEVICE **)i )
  {
    v4 = *((_QWORD *)i + 5);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
    DXGDEVICE::FlushDeferredDestruction(i, 0LL, 0, 0);
    KeUnstackDetachProcess(&ApcState);
  }
  v5 = (DXGDEVICE **)(this + 20);
  for ( j = *v5; j != (DXGDEVICE *)v5 && j; j = *(DXGDEVICE **)j )
  {
    v7 = *((_QWORD *)j + 5);
    memset(&v9, 0, sizeof(v9));
    KeStackAttachProcess(*(PRKPROCESS *)(v7 + 56), &v9);
    DXGDEVICE::FlushDeferredDestruction(j, 0LL, 0, 0);
    KeUnstackDetachProcess(&v9);
  }
}
