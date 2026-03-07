__int64 IopGetPhysicalMemoryBlock()
{
  __int64 v0; // rdi
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  PPHYSICAL_MEMORY_RANGE v2; // rbx
  _LARGE_INTEGER *p_NumberOfBytes; // rsi
  unsigned int v4; // ebp
  _LARGE_INTEGER NumberOfBytes; // rcx
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  __int64 Pool2; // rax
  __int64 v10; // rcx
  unsigned __int64 QuadPart; // rax

  v0 = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v2 = PhysicalMemoryRanges;
  if ( !PhysicalMemoryRanges )
    return v0;
  p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
  v4 = 0;
  NumberOfBytes = PhysicalMemoryRanges->NumberOfBytes;
  v6 = 0LL;
  if ( NumberOfBytes.QuadPart )
  {
    do
    {
      ++v4;
      v6 += (unsigned __int64)NumberOfBytes.QuadPart >> 12;
      v7 = 16LL * v4;
      v8 = v4;
      NumberOfBytes = v2[v7 / 0x10].NumberOfBytes;
    }
    while ( NumberOfBytes.QuadPart );
    if ( v4 )
    {
      if ( v7 <= 0xFFFFFFFF && (int)v7 + 32 >= (unsigned int)v7 )
      {
        Pool2 = ExAllocatePool2(64LL, (unsigned int)(v7 + 32), 1886209091LL);
        v0 = Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)Pool2 = v4;
          *(_QWORD *)(Pool2 + 8) = v6;
          v10 = Pool2 - (_QWORD)v2;
          do
          {
            *(LONGLONG *)((char *)&p_NumberOfBytes[1].QuadPart + v10) = (unsigned __int64)p_NumberOfBytes[-1].QuadPart >> 12;
            QuadPart = p_NumberOfBytes->QuadPart;
            p_NumberOfBytes += 2;
            *(LONGLONG *)((char *)&p_NumberOfBytes->QuadPart + v10) = QuadPart >> 12;
            --v8;
          }
          while ( v8 );
          ExFreePoolWithTag(v2, 0);
          return v0;
        }
      }
    }
  }
  ExFreePoolWithTag(v2, 0);
  return 0LL;
}
