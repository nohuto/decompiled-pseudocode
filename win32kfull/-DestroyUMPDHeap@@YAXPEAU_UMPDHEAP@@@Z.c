/*
 * XREFs of ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C029B570
 * Callers:
 *     UMPDCachedResourceCleanupWrap @ 0x1C00DAE00 (UMPDCachedResourceCleanupWrap.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C029B5E4 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C029CA14 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyUMPDHeap(struct _UMPDHEAP *a1)
{
  void *v2; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    v2 = (void *)*((_QWORD *)a1 + 1);
    if ( v2 )
      MmUnsecureVirtualMemory(v2);
    if ( *(_QWORD *)a1 )
    {
      BaseAddress = *(PVOID *)a1;
      RegionSize = 0x400000LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    Win32FreePool(a1);
  }
}
