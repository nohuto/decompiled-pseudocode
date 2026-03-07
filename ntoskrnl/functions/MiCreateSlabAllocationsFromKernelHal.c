__int64 MiCreateSlabAllocationsFromKernelHal()
{
  int v0; // ebx
  __int64 *i; // rdi
  __int64 result; // rax

  v0 = 0;
  for ( i = &qword_140C65598; ; ++i )
  {
    result = MiActOnLargeKernelHalPages(
               *(_QWORD *)(*i + 48),
               (__int64 (__fastcall *)(unsigned __int64, __int64))MiCreateKernelHalSlabRange);
    if ( (int)result < 0 )
      break;
    if ( ++v0 )
    {
      if ( (MiFlags & 0x4000) != 0 )
        dword_140C6B0C4 |= 8u;
      return 0LL;
    }
  }
  return result;
}
