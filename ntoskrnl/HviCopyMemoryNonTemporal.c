/*
 * XREFs of HviCopyMemoryNonTemporal @ 0x1405B37C0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x140420E80 (RtlCopyMemoryNonTemporal.c)
 *     HviEnterKernelAperture @ 0x1405B3844 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405B38A4 (HviLeaveKernelAperture.c)
 */

__int64 __fastcall HviCopyMemoryNonTemporal(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 i; // rdi
  unsigned int v7; // ebx

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 0x100000) )
  {
    v7 = a3 - i;
    if ( a3 - (unsigned int)i > 0x100000 )
      v7 = 0x100000;
    HviEnterKernelAperture();
    RtlCopyMemoryNonTemporal((void *)(i + a1), (const void *)(i + a2), v7);
    HviLeaveKernelAperture();
  }
  return 0LL;
}
