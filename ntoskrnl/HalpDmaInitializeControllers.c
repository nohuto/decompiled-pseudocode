/*
 * XREFs of HalpDmaInitializeControllers @ 0x140398798
 * Callers:
 *     HalpDmaInit @ 0x140B60E78 (HalpDmaInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpDmaControllerInitializeController @ 0x140514330 (HalpDmaControllerInitializeController.c)
 *     HalpDmaConfigureInterrupt @ 0x140525184 (HalpDmaConfigureInterrupt.c)
 */

__int64 HalpDmaInitializeControllers()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdi
  void *v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v0 = HalpDmaControllers;
  v1 = 0LL;
  v7 = 0LL;
  if ( LOWORD(KeActiveProcessors[0]) )
    v1 = qword_140D1EFE8[0];
  *(_QWORD *)&v7 = v1;
  while ( (__int64 *)v0 != &HalpDmaControllers )
  {
    HalpDmaControllerInitializeController(v0);
    if ( *(_BYTE *)(v0 + 177) )
      HalpDmaConfigureInterrupt(v0, &v7);
    v0 = *(_QWORD *)v0;
  }
  DmaDispatch = (__int64)PcDmaDispatch;
  v3 = ((__int64 (__fastcall *)(int *))PcDmaDispatch[0])(&v8);
  if ( v3 < 0 )
    return (unsigned int)v3;
  if ( v8 )
  {
    v4 = (unsigned int)(8 * v8);
    v5 = (void *)HalpMmAllocCtxAlloc(v2, v4);
    HalpDmaAdapters = (__int64)v5;
    if ( v5 )
      memset(v5, 0, (unsigned int)v4);
    else
      return (unsigned int)-1073741670;
    return (unsigned int)v3;
  }
  return 0LL;
}
