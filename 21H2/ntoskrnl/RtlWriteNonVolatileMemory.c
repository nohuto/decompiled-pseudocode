/*
 * XREFs of RtlWriteNonVolatileMemory @ 0x14058D080
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x140408440 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlFlushNonVolatileMemory @ 0x140585E40 (RtlFlushNonVolatileMemory.c)
 */

DWORD __cdecl RtlWriteNonVolatileMemory(
        PVOID NvToken,
        void *NvDestination,
        const void *Source,
        SIZE_T Size,
        DWORD Flags)
{
  DWORD v5; // ebx

  v5 = 0;
  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( (Flags & 3) == 1 )
  {
    v5 = (Flags & 0x100) != 0;
    goto LABEL_10;
  }
  if ( (Flags & 2) == 0 )
  {
    memmove(NvDestination, Source, Size);
    return v5;
  }
  if ( Size < 8 )
  {
LABEL_10:
    memmove(NvDestination, Source, Size);
    return RtlFlushNonVolatileMemory(NvToken, NvDestination, Size, v5);
  }
  RtlCopyMemoryNonTemporal(NvDestination, Source, Size);
  return v5;
}
