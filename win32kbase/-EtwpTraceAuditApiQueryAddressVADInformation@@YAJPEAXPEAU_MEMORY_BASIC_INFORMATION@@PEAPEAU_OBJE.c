__int64 __fastcall EtwpTraceAuditApiQueryAddressVADInformation(
        PVOID BaseAddress,
        PVOID MemoryInformation,
        struct _OBJECT_NAME_INFORMATION **a3)
{
  struct _OBJECT_NAME_INFORMATION *v3; // rbx
  NTSTATUS VirtualMemory; // edi
  struct _OBJECT_NAME_INFORMATION *Pool2; // rax

  v3 = 0LL;
  if ( !BaseAddress )
    return 3221225485LL;
  VirtualMemory = ZwQueryVirtualMemory(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    BaseAddress,
                    MemoryBasicInformation,
                    MemoryInformation,
                    0x30uLL,
                    0LL);
  if ( VirtualMemory >= 0 )
  {
    Pool2 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, 512LL, 1835879237LL);
    v3 = Pool2;
    if ( Pool2 )
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        BaseAddress,
                        MemorySectionName,
                        Pool2,
                        0x200uLL,
                        0LL);
      if ( VirtualMemory < 0 )
      {
        ExFreePoolWithTag(v3, 0x6D6D4B45u);
        v3 = 0LL;
      }
    }
  }
  *a3 = v3;
  return (unsigned int)VirtualMemory;
}
