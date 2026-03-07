char *__fastcall CcRegistryChangeCallback(char *P)
{
  UNICODE_STRING *v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp
  char *result; // rax
  void *v6; // rcx
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v1 = (UNICODE_STRING *)(P + 56);
  IoStatusBlock = 0LL;
  v3 = MEMORY[0xFFFFF78000000320];
  v4 = MEMORY[0xFFFFF78000000320] - *((_QWORD *)P + 6);
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcRegistryChangeCallback: Something of interest changed (callback:%c), under:\"%wZ\"\n",
    P[72] != 0 ? 70 : 84,
    P + 56);
  if ( !P[72] )
  {
    (*((void (__fastcall **)(char *))P + 5))(P);
    *((_QWORD *)P + 6) = v3;
    DbgPrintEx(0x7Fu, 2u, "CcRegistryChangeCallback: Processed \"%wZ\", TickDiff=%I64d\n", v1, v4);
  }
  P[72] = 0;
  if ( *((_QWORD *)P + 4) || (v8 = CcOpenRegistryPath(v1, (HANDLE *)P + 4), v8 >= 0) )
  {
    result = P;
    if ( P )
    {
      v6 = (void *)*((_QWORD *)P + 4);
      if ( v6 )
      {
        v7 = ZwNotifyChangeKey(v6, 0LL, (PIO_APC_ROUTINE)P, (PVOID)1, &IoStatusBlock, 5u, 1u, 0LL, 0, 1u);
        if ( v7 == 259 )
        {
          DbgPrintEx(0x7Fu, 2u, "CcRegistryChangeCallback: Watch queued \"%wZ\"\n", P + 56);
        }
        else if ( v7 >= 0 )
        {
          DbgPrintEx(0x7Fu, 2u, "CcRegistryChangeCallback: Watch queued \"%wZ\" (for Immediate Processing)\n", P + 56);
        }
        else
        {
          ZwClose(*((HANDLE *)P + 4));
          *((_QWORD *)P + 4) = 0LL;
          P[72] = 1;
          DbgPrintEx(
            0x7Fu,
            0,
            "CcRegistryChangeCallback: Failed Watch request, status=0x%08x \"%wZ\"\n",
            (unsigned int)v7,
            P + 56);
        }
        result = P;
      }
    }
  }
  else
  {
    DbgPrintEx(0x7Fu, 0, "CcRegistryChangeCallback: Failed to open Key, status=0x%08x \"%wZ\n", (unsigned int)v8, v1);
    ExFreePoolWithTag(P, 0x52576343u);
    result = 0LL;
  }
  if ( !CcRegistryWatchInitComplete && result && !result[72] )
    CcRegistryWatchInitComplete = 1;
  return result;
}
