/*
 * XREFs of ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C00F6570
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0001DE4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001EC0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001F48 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0086210 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_HEAP_MGR::MapViewOfAllocationExternal(
        VIDMM_RECYCLE_HEAP_MGR *this,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v8; // [rsp+60h] [rbp+8h] BYREF
  void *v9; // [rsp+68h] [rbp+10h] BYREF
  void *v10; // [rsp+78h] [rbp+20h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v5 = a2[10];
  v9 = 0LL;
  VidMmRecycleHeapMapSection(
    *(PVOID *)(v5 + 56),
    a2[6],
    a3,
    ((**(_DWORD **)(v5 + 32) - 4) & 0xFFFFFFFD) == 0,
    &v9,
    &v10,
    1u,
    &v8);
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return v9;
}
