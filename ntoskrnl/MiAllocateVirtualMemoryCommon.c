__int64 __fastcall MiAllocateVirtualMemoryCommon(
        int a1,
        __int64 *a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned __int64 v15; // rsi
  __int64 v16; // r9
  __int64 v17; // rdx
  int VirtualMemoryPrepare; // ebx
  void *v19; // rcx
  int UserStack; // eax
  NTSTATUS v22; // eax
  unsigned __int64 v23; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+78h] [rbp-C0h] BYREF
  PVOID Object[2]; // [rsp+80h] [rbp-B8h] BYREF
  _QWORD v26[16]; // [rsp+90h] [rbp-A8h] BYREF

  memset(v26, 0, sizeof(v26));
  v15 = 0LL;
  v16 = *a4;
  v17 = *a2;
  v24 = 0LL;
  Object[0] = 0LL;
  v23 = 0LL;
  VirtualMemoryPrepare = MiAllocateVirtualMemoryPrepare(
                           a1,
                           v17,
                           a3,
                           v16,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a11,
                           (__int64)v26,
                           (__int64)Object);
  if ( VirtualMemoryPrepare < 0 )
    goto LABEL_20;
  v19 = *(void **)(a7 + 24);
  if ( v19 )
  {
    if ( v19 == (void *)-3LL )
    {
      v15 = 1LL;
    }
    else
    {
      v22 = PsReferencePartitionByHandle(v19, 2u, a8, 0x61566D4Du, (PVOID *)&v23);
      v15 = v23;
      VirtualMemoryPrepare = v22;
      if ( v22 < 0 )
        goto LABEL_20;
    }
  }
  if ( !*(_BYTE *)(a7 + 48) || (a5 & 0x20400000) == 0x400000 )
  {
    if ( a9 < 0 )
      UserStack = MiAllocateUserStack((__int64)v26, (__int64)&v24);
    else
      UserStack = MiAllocateVirtualMemory(v26, v15, &v24);
    VirtualMemoryPrepare = UserStack;
    if ( UserStack >= 0 )
    {
      *a2 = v24;
      *a4 = v26[3];
      goto LABEL_8;
    }
  }
  else
  {
    VirtualMemoryPrepare = -1073741811;
  }
LABEL_20:
  if ( v26[0] )
    ++dword_140C67C24;
  else
    ++dword_140C67C20;
LABEL_8:
  if ( v15 >= 2 )
    PsDereferencePartition(v15);
  if ( Object[0] )
    ObfDereferenceObjectWithTag(Object[0], 0x6D566D4Du);
  return (unsigned int)VirtualMemoryPrepare;
}
