__int64 __fastcall DpiPollSingleDisplayChild(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  NTSTATUS v7; // eax
  unsigned int v8; // edi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r8

  v3 = *(_QWORD *)(a1 + 64);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, File, 1u, 0x20u);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry2(3LL, a1, v7);
    return v8;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 484) )
    DpiCheckForOutstandingD3Requests(v3);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  if ( *(_DWORD *)(v3 + 236) != 2 )
  {
    v8 = -1073741823;
    v11 = -1073741823LL;
LABEL_11:
    WdLogSingleEntry2(3LL, a1, v11);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v3 + 4000) == 1 || *(_DWORD *)(v3 + 284) != 1 )
  {
    v11 = -1073741661LL;
    v8 = -1073741661;
    goto LABEL_11;
  }
  LOBYTE(v10) = 1;
  LOBYTE(v9) = 1;
  v8 = DpiFdoInvalidateChildStatus(a1, a2, v9, v10, 0, 0, a3);
LABEL_12:
  if ( *(_BYTE *)(v3 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, 0x20u);
  return v8;
}
