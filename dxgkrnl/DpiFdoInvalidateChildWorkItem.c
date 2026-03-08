/*
 * XREFs of DpiFdoInvalidateChildWorkItem @ 0x1C01E4AB0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01E67E0 (DpiFdoInvalidateChildRelations.c)
 */

void __fastcall DpiFdoInvalidateChildWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rdi
  int v6; // ecx
  int v7; // edx
  _QWORD v8[10]; // [rsp+30h] [rbp-68h] BYREF

  memset(v8, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v8[1]);
  v5 = IoObject[8];
  v8[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v8[3]) = 10;
  LOBYTE(v8[6]) = -1;
  IoFreeWorkItem(IoWorkItem);
  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), DpiFdoInvalidateChildWorkItem, File, 1u, 0x20u) >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5 + 484) )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 4104LL));
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
    v6 = *(_DWORD *)(v5 + 236);
    if ( (v6 == 2 || *(_DWORD *)(v5 + 240) == 2 && ((v6 - 3) & 0xFFFFFFFC) == 0 && v6 != 4)
      && *(_DWORD *)(v5 + 4000) != 1
      && *(_DWORD *)(v5 + 284) == 1 )
    {
      if ( *(_BYTE *)(v5 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v5 + 484) )
        DpiCheckForOutstandingD3Requests(v5);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
      v7 = *(_DWORD *)(v5 + 236);
      if ( (v7 == 2 || *(_DWORD *)(v5 + 240) == 2 && ((v7 - 3) & 0xFFFFFFFC) == 0 && v7 != 4)
        && *(_DWORD *)(v5 + 4000) != 1
        && *(_DWORD *)(v5 + 284) == 1 )
      {
        DpiFdoInvalidateChildRelations(IoObject, 6LL, v8);
      }
    }
    if ( *(_BYTE *)(v5 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), DpiFdoInvalidateChildWorkItem, 0x20u);
  }
}
