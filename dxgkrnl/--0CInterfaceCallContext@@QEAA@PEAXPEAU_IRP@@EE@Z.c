CInterfaceCallContext *__fastcall CInterfaceCallContext::CInterfaceCallContext(
        CInterfaceCallContext *this,
        _QWORD *a2,
        struct _IRP *a3,
        char a4,
        char a5)
{
  char v5; // di
  struct _IO_REMOVE_LOCK *v6; // rdx
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax

  *(_QWORD *)this = a2;
  v5 = 0;
  v6 = (struct _IO_REMOVE_LOCK *)a2[8];
  *((_QWORD *)this + 1) = v6;
  *((_DWORD *)this + 5) = 0;
  v10 = IoAcquireRemoveLockEx(v6 + 2, v6, File, 1u, 0x20u);
  *((_DWORD *)this + 4) = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(2LL, v10);
    return this;
  }
  *((_BYTE *)this + 20) = 1;
  if ( !a5 )
  {
    KeEnterCriticalRegion();
    v11 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v11 + 484) )
      DpiCheckForOutstandingD3Requests(v11);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 1) + 168LL), 1u);
    *((_BYTE *)this + 23) = 1;
  }
  if ( a4 )
  {
    v12 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
    *((_DWORD *)this + 4) = v12;
    if ( v12 < 0 )
      return this;
    v13 = *((_QWORD *)this + 1) + 5424LL;
    *((_BYTE *)this + 21) = 1;
    ExAcquirePushLockExclusiveEx(v13, 0LL);
  }
  else
  {
    if ( !a5 )
      return this;
    v14 = DxgkAcquireAdapterStopResetSync(*(_QWORD *)(*((_QWORD *)this + 1) + 3912LL), 0LL);
    *((_DWORD *)this + 4) = v14;
    if ( v14 < 0 )
      return this;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 3912LL) + 200LL) != 1 )
    {
      DxgkReleaseAdapterStopResetSync(*(_QWORD *)(*((_QWORD *)this + 1) + 3912LL), 0LL);
      *((_DWORD *)this + 4) = -1073741130;
      return this;
    }
    *((_BYTE *)this + 22) = 1;
  }
  if ( !a3 || !a3->RequestorMode )
    v5 = 1;
  *(_BYTE *)(*((_QWORD *)this + 1) + 5468LL) = v5;
  return this;
}
