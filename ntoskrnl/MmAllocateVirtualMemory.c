/*
 * XREFs of MmAllocateVirtualMemory @ 0x140728160
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     NtAllocateVirtualMemoryEx @ 0x140728100 (NtAllocateVirtualMemoryEx.c)
 *     WbAllocateMemoryBlock @ 0x140753534 (WbAllocateMemoryBlock.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1407282D0 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1407C4A70 (MiAllocateVirtualMemoryCommon.c)
 */

__int64 __fastcall MmAllocateVirtualMemory(
        int a1,
        __int64 *a2,
        __int64 *a3,
        int a4,
        int a5,
        volatile void *Address,
        ULONGLONG ullMultiplicand,
        char a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v15; // rcx
  __int64 v16; // rcx
  int MapExtendedParameters; // ecx
  __int64 v19; // [rsp+68h] [rbp-70h] BYREF
  __int64 v20; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v21[80]; // [rsp+80h] [rbp-58h] BYREF

  memset(v21, 0, 0x48uLL);
  v19 = 0LL;
  v20 = 0LL;
  if ( a8 )
  {
    v15 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  v19 = *a2;
  v20 = *a3;
  MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, (unsigned int)ullMultiplicand, v21);
  if ( MapExtendedParameters >= 0 )
  {
    MapExtendedParameters = MiAllocateVirtualMemoryCommon(
                              a1,
                              (unsigned int)&v19,
                              0,
                              (unsigned int)&v20,
                              a4,
                              a5,
                              (__int64)v21,
                              a8,
                              a9,
                              a10,
                              a11);
    if ( MapExtendedParameters >= 0 )
    {
      *a2 = v19;
      *a3 = v20;
    }
  }
  return (unsigned int)MapExtendedParameters;
}
