__int64 __fastcall DpiPdoRemovePdo(__int64 a1, __int64 a2, char a3, __int64 a4, PLARGE_INTEGER a5)
{
  __int64 v5; // rbp
  unsigned int v6; // esi
  _QWORD **v9; // r10
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  int v12; // r8d
  unsigned int v13; // edx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  void *v19; // rcx
  NTSTATUS v20; // eax
  _QWORD *v21; // rcx

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v9 = *(_QWORD ***)(v5 + 3664);
  v10 = v9;
  v11 = *v9;
  if ( *v9 == v9 )
  {
LABEL_5:
    v6 = -1073741811;
    WdLogSingleEntry1(3LL, *(unsigned int *)(a2 + 24));
    return v6;
  }
  v12 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v13 = *((_DWORD *)v10 + 126);
    if ( v13 == v12 )
      break;
    v10 = v11;
    v11 = (_QWORD *)*v11;
    if ( v11 == v9 )
      goto LABEL_5;
  }
  if ( !a3 || *((_DWORD *)v10 + 124) != 1 || *((_BYTE *)v10 + 511) )
  {
LABEL_16:
    v17 = *v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 )
      goto LABEL_28;
    v18 = (_QWORD *)v10[1];
    if ( (_QWORD *)*v18 != v10 )
      goto LABEL_28;
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    --*(_DWORD *)(v5 + 3680);
    if ( *((_DWORD *)v10 + 124) == 1 )
      --*(_DWORD *)(v5 + 3684);
    *((_BYTE *)v10 + 508) = 0;
    KeWaitForSingleObject((PVOID)(v5 + 3424), Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 48) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v5 + 3424), 0);
    v19 = (void *)v10[116];
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      v10[116] = 0LL;
    }
    WdLogSingleEntry1(4LL, v10[3]);
    if ( !*((_BYTE *)v10 + 509) )
    {
      v20 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v10 + 2, (PVOID)a2, File, 1u, 0x20u);
      v6 = v20;
      if ( v20 >= 0 )
      {
        IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v10 + 2, (PVOID)a2, 0x20u);
        IoQueueWorkItem((PIO_WORKITEM)v10[119], (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
      }
      else
      {
        WdLogSingleEntry3(0LL, 275LL, 21LL, v20);
      }
      return v6;
    }
    v21 = *(_QWORD **)(v5 + 3696);
    if ( *v21 != v5 + 3688 )
LABEL_28:
      __fastfail(3u);
    *v10 = v5 + 3688;
    v10[1] = v21;
    *v21 = v10;
    *(_QWORD *)(v5 + 3696) = v10;
    return v6;
  }
  v15 = MonitorRemovePhysicalMonitor(*(void **)(v5 + 3912), v13, (__int64)a5);
  if ( v15 != 128 )
  {
    if ( v15 < 0 )
      WdLogSingleEntry1(2LL, v15);
    v16 = DmmResetOrginalVideoOutputTechnologies(*(void *const *)(v5 + 3912), *((_DWORD *)v10 + 126));
    v6 = v16;
    if ( v16 < 0 )
      WdLogSingleEntry1(2LL, v16);
    goto LABEL_16;
  }
  return 128LL;
}
