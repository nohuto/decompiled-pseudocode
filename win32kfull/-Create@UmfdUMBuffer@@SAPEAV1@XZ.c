struct UmfdUMBuffer *UmfdUMBuffer::Create(void)
{
  PVOID v0; // rax
  _DWORD *v1; // rbx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF

  v0 = EngAllocMem(0, 0x28u, 0x6D554446u);
  v1 = v0;
  if ( !v0 )
    return (struct UmfdUMBuffer *)v1;
  *(_OWORD *)v0 = 0LL;
  RegionSize = 0x400000LL;
  *((_OWORD *)v0 + 1) = 0LL;
  *((_QWORD *)v0 + 4) = 0LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v0 + 3, 0LL, &RegionSize, 0x2000u, 4u) >= 0 )
  {
    v1[9] = RegionSize;
    return (struct UmfdUMBuffer *)v1;
  }
  EngFreeMem(v1);
  return 0LL;
}
