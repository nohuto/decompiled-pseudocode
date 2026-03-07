struct _UMPDHEAP *__fastcall UMPDOBJ::CreateUMPDHeap(UMPDOBJ *this)
{
  _DWORD *v1; // rbx
  PVOID v2; // rax
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = this;
  v1 = (_DWORD *)Win32AllocPoolZInit(32LL, 1886221639LL);
  if ( v1 )
  {
    BaseAddress = 0LL;
    RegionSize = 0x400000LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) >= 0 )
    {
      v2 = BaseAddress;
      v1[6] = 0;
      *(_QWORD *)v1 = v2;
      return (struct _UMPDHEAP *)v1;
    }
    Win32FreePool(v1);
  }
  return 0LL;
}
