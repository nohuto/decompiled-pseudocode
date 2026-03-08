/*
 * XREFs of CheckSystemIOAddressValidity @ 0x1C0051C58
 * Callers:
 *     WriteSystemIO @ 0x1C000624C (WriteSystemIO.c)
 *     ReadSystemIO @ 0x1C0052EDC (ReadSystemIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

char __fastcall CheckSystemIOAddressValidity(char a1, const char *a2, unsigned int a3, unsigned int *a4)
{
  unsigned __int64 v5; // rdi
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // r8
  _DWORD *v11; // rax
  __int64 v12; // r14
  const void *v13; // r8
  const char *v14; // r9
  int v15; // ecx
  __int64 v16; // rcx
  void (__fastcall *v17)(__int64, _QWORD, _QWORD, unsigned int *); // rax
  struct _DEVICE_OBJECT *v18; // rcx
  struct _IO_WORKITEM *WorkItem; // rbx
  int v20; // ecx
  _DWORD *Pool2; // rax
  const void *v23; // [rsp+20h] [rbp-38h]

  v5 = (unsigned int)a2;
  v8 = 1;
  if ( !gpBadIOAddressList )
    return v8;
  LODWORD(v9) = 0;
  if ( !*((_DWORD *)gpBadIOAddressList + 1) )
    return v8;
  v10 = 0LL;
  v11 = gpBadIOAddressList;
  while ( (unsigned int)a2 < *v11 || (unsigned int)a2 >= v11[1] + *v11 )
  {
    v9 = (unsigned int)(v9 + 1);
    v10 = (unsigned int)v9;
    v11 = (char *)gpBadIOAddressList + 24 * v9;
    if ( !v11[1] )
      return v8;
  }
  v12 = 3 * v10;
  v13 = 0LL;
  v23 = 0LL;
  v14 = 0LL;
  if ( *((_DWORD *)gpBadIOAddressList + 2 * v12 + 2) > (unsigned int)gdwHighestOSVerQueried )
  {
    PrintDebugMessage(24, (const void *)(unsigned int)a2, 0LL, 0LL, 0LL);
    v17 = (void (__fastcall *)(__int64, _QWORD, _QWORD, unsigned int *))*((_QWORD *)gpBadIOAddressList + v12 + 2);
    if ( !v17 )
      goto LABEL_17;
    LOBYTE(v16) = a1;
    v8 = 0;
    v17(v16, (unsigned int)v5, a3, a4);
    v23 = (const void *)*a4;
    v14 = "Read";
    v13 = (const void *)v5;
    if ( !a1 )
      v14 = "Wrote";
    a2 = "read";
    if ( !a1 )
      a2 = "write";
    v15 = 23;
  }
  else
  {
    v8 = 0;
    v15 = 25;
    a2 = (const char *)(unsigned int)a2;
  }
  PrintDebugMessage(v15, a2, v13, v14, v23);
LABEL_17:
  if ( !RootDeviceExtension || (v18 = *(struct _DEVICE_OBJECT **)(RootDeviceExtension + 768)) == 0LL )
  {
    v20 = 22;
    goto LABEL_25;
  }
  WorkItem = IoAllocateWorkItem(v18);
  if ( !WorkItem )
  {
    v20 = 21;
LABEL_25:
    PrintDebugMessage(v20, 0LL, 0LL, 0LL, 0LL);
    return v8;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1231842625LL);
  if ( Pool2 )
  {
    *(_BYTE *)Pool2 = a1;
    Pool2[1] = v5;
    Pool2[2] = v9;
    *((_QWORD *)Pool2 + 2) = WorkItem;
    IoQueueWorkItem(WorkItem, DelayedLogInErrorLog, DelayedWorkQueue, Pool2);
  }
  else
  {
    PrintDebugMessage(20, 0LL, 0LL, 0LL, 0LL);
    IoFreeWorkItem(WorkItem);
  }
  return v8;
}
