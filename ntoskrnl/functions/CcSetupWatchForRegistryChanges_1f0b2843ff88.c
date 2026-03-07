void CcSetupWatchForRegistryChanges()
{
  char *PoolWithTag; // rax
  char *v1; // rdi
  char *v2; // rsi
  int v3; // eax
  int v4; // ebx
  NTSTATUS v5; // eax
  __int128 v6; // [rsp+A0h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x50uLL, 0x52576343u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    v2 = PoolWithTag + 56;
    RtlInitUnicodeString(
      (PUNICODE_STRING)(PoolWithTag + 56),
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management");
    *((_QWORD *)v1 + 5) = CcUpdateDynamicRegistrySettings;
    *((_QWORD *)v1 + 2) = CcRegistryChangeCallback;
    *((_QWORD *)v1 + 3) = v1;
    *(_QWORD *)v1 = 0LL;
    v3 = CcOpenRegistryPath(v2, v1 + 32);
    v4 = v3;
    if ( v3 < 0 )
    {
      DbgPrintEx(
        0x7Fu,
        0,
        "CcSetupWatchForRegistryChanges: Failed to open Key, status=0x%08x \"%wZ\"\n",
        (unsigned int)v3,
        v2);
    }
    else
    {
      v5 = ZwNotifyChangeKey(
             *((HANDLE *)v1 + 4),
             0LL,
             (PIO_APC_ROUTINE)v1,
             (PVOID)1,
             &IoStatusBlock,
             5u,
             1u,
             0LL,
             0,
             1u);
      v4 = v5;
      if ( v5 == 259 )
      {
        DbgPrintEx(0x7Fu, 2u, "CcSetupWatchForRegistryChanges: Queued for \"%wZ\"\n", v2);
LABEL_5:
        CcRegistryWatchInitComplete = 1;
        goto LABEL_10;
      }
      if ( v5 >= 0 )
        goto LABEL_5;
      DbgPrintEx(0x7Fu, 0, "CcSetupWatchForRegistryChanges: Failed, status=0x%08x for \"%wZ\"\n", (unsigned int)v5, v2);
    }
  }
  else
  {
    v4 = -1073741670;
  }
LABEL_10:
  if ( v1 )
  {
    if ( v4 < 0 )
    {
      v6 = *(_OWORD *)(v1 + 56);
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcSetupWatchForRegistryChanges: Queuing worker thread, status=0x%08x for \"%wZ\"\n",
        (unsigned int)v4,
        &v6);
      v1[72] = 1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v1, DelayedWorkQueue);
    }
  }
  else
  {
    DbgPrintEx(0x7Fu, 0, "CcSetupWatchForRegistryChanges: Error-unexpected memory allocation!\n");
  }
}
