/*
 * XREFs of RtlDestroyHeap @ 0x14079A780
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     ZwFreeVirtualMemory @ 0x1404126D0 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     RtlpHeapHandleError @ 0x1405B2C0C (RtlpHeapHandleError.c)
 *     RtlpDestroyHeapSegment @ 0x1409BB3E0 (RtlpDestroyHeapSegment.c)
 */

PVOID __stdcall RtlDestroyHeap(PVOID HeapHandle)
{
  int v3; // eax
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rax
  int v6; // eax
  PVOID v7; // rbx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  RegionSize = 0LL;
  BaseAddress = 0LL;
  if ( HeapHandle )
  {
    if ( *((_DWORD *)HeapHandle + 4) != -857879331 )
    {
      v3 = *((_DWORD *)HeapHandle + 36);
      if ( v3 && (_WORD)v3 == 1 )
        ((void (__fastcall *)(PVOID, _QWORD, __int64))CLFS_LSN_NULL_EXT)(HeapHandle, 0LL, 8LL);
      v4 = (_QWORD *)*((_QWORD *)HeapHandle + 34);
      while ( (char *)HeapHandle + 272 != (char *)v4 )
      {
        v5 = (unsigned __int64)v4;
        v4 = (_QWORD *)*v4;
        RegionSize = 0LL;
        BaseAddress = (PVOID)(v5 & 0xFFFFFFFFFFFF0000uLL);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      }
      v6 = *((_DWORD *)HeapHandle + 28);
      if ( (v6 & 1) == 0 )
      {
        if ( v6 >= 0 )
          ExDeleteResourceLite(*((PERESOURCE *)HeapHandle + 44));
        *((_QWORD *)HeapHandle + 44) = 0LL;
      }
      do
      {
        v7 = (PVOID)(*((_QWORD *)HeapHandle + 37) - 24LL);
        RtlpDestroyHeapSegment(v7);
      }
      while ( v7 != HeapHandle );
    }
  }
  else if ( RtlpHeapErrorHandlerThreshold >= 2 )
  {
    DbgPrint("(HeapHandle != NULL)");
    RtlpHeapHandleError();
  }
  return 0LL;
}
