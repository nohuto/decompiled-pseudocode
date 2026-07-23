/*
 * XREFs of MiCreateSlabAllocationsFromKernelHal @ 0x140A504E4
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiActOnLargeKernelHalPages @ 0x1407A1E1C (MiActOnLargeKernelHalPages.c)
 */

__int64 MiCreateSlabAllocationsFromKernelHal()
{
  int v0; // ebx
  __int64 *i; // rdi
  __int64 result; // rax
  int v3; // ecx

  v0 = 0;
  for ( i = &qword_140C4CD18; ; ++i )
  {
    result = MiActOnLargeKernelHalPages(
               *(char **)(*i + 48),
               (__int64 (__fastcall *)(char *, char *))MiCreateKernelHalSlabRange);
    if ( (int)result < 0 )
      break;
    if ( ++v0 )
    {
      v3 = dword_140C50D84 | 0x10;
      dword_140C50D84 |= 0x10u;
      if ( (MiFlags & 0x8000) != 0 )
        dword_140C50D84 = v3 | 8;
      return 0LL;
    }
  }
  return result;
}
