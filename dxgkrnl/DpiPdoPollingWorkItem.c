void __fastcall DpiPdoPollingWorkItem(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  char v2; // r13
  int v3; // r12d
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  _QWORD *ChildDescriptor; // rbx
  _QWORD v9[10]; // [rsp+40h] [rbp-88h] BYREF

  v2 = (char)Context;
  memset(v9, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v9[1]);
  v3 = 0;
  v9[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v9[3]) = 14;
  LOBYTE(v9[6]) = -1;
  while ( 1 )
  {
    KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    v4 = qword_1C013B728;
    if ( (__int64 *)qword_1C013B728 == &qword_1C013B728 )
    {
      v4 = 0LL;
      _InterlockedExchange(&dword_1C013B720, 0);
    }
    else
    {
      if ( *(__int64 **)(qword_1C013B728 + 8) != &qword_1C013B728
        || (v5 = *(_QWORD *)qword_1C013B728, *(_QWORD *)(*(_QWORD *)qword_1C013B728 + 8LL) != qword_1C013B728) )
      {
        __fastfail(3u);
      }
      qword_1C013B728 = *(_QWORD *)qword_1C013B728;
      *(_QWORD *)(v5 + 8) = &qword_1C013B728;
    }
    KeReleaseMutex((PRKMUTEX)Object, 0);
    if ( !v4 )
      break;
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 64LL);
    if ( !v2 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v6 + 484) )
        DpiCheckForOutstandingD3Requests(v6);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
      if ( *(_DWORD *)(v6 + 236) == 2 )
      {
        if ( *(_DWORD *)(v6 + 4000) != 1 && *(_DWORD *)(v6 + 284) == 1 )
        {
          v3 = DpiFdoInvalidateChildStatus(
                 *(_QWORD *)(v4 + 24),
                 *(_DWORD *)(v4 + 32),
                 *(_BYTE *)(v4 + 40),
                 *(_BYTE *)(v4 + 41),
                 *(_BYTE *)(v4 + 42),
                 1,
                 (__int64)v9);
LABEL_18:
          if ( *(_BYTE *)(v6 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
          ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
          KeLeaveCriticalRegion();
          goto LABEL_21;
        }
        v3 = -1073741661;
        v7 = *(int *)(v6 + 284);
      }
      else
      {
        v3 = -1073741810;
        v7 = *(int *)(v6 + 236);
      }
      WdLogSingleEntry1(3LL, v7);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3320), 1u);
      ChildDescriptor = DpiFdoGetChildDescriptor(v6, *(_DWORD *)(v4 + 32));
      KeWaitForSingleObject((PVOID)(v6 + 3424), Executive, 0, 0, 0LL);
      DpiFdoPendingCreatePdoCompletion(*(_QWORD *)(v4 + 24), (__int64)ChildDescriptor);
      KeReleaseMutex((PRKMUTEX)(v6 + 3424), 0);
      ExReleaseResourceLite((PERESOURCE)(v6 + 3320));
      KeLeaveCriticalRegion();
      goto LABEL_18;
    }
LABEL_21:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), (PVOID)v4, 0x20u);
    ExFreeToNPagedLookasideList(&stru_1C013B580, (PVOID)v4);
    if ( v3 == 259 )
    {
      _InterlockedExchange(&dword_1C013B720, 0);
      KeSetTimer(&stru_1C013B698, (LARGE_INTEGER)-3000000LL, &stru_1C013B6D8);
      return;
    }
  }
}
