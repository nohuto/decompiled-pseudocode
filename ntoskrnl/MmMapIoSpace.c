/*
 * XREFs of MmMapIoSpace @ 0x14029AAB0
 * Callers:
 *     DifMmMapIoSpaceWrapper @ 0x1405E50F0 (DifMmMapIoSpaceWrapper.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 */

PVOID __stdcall MmMapIoSpace(PHYSICAL_ADDRESS PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  int v3; // eax
  __int64 v4; // r8

  v3 = (unsigned __int8)CacheType;
  if ( (unsigned __int8)CacheType >= (unsigned int)MmMaximumCacheType )
    return 0LL;
  v4 = 64LL;
  if ( v3 != 1 )
  {
    v4 = 576LL;
    if ( v3 == 2 )
      v4 = 1028LL;
  }
  return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                  (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                  NumberOfBytes,
                  v4);
}
