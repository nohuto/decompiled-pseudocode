/*
 * XREFs of ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C0160FC8
 * Callers:
 *     FreeNonCachedUserMemWrap @ 0x1C0101060 (FreeNonCachedUserMemWrap.c)
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0110E78 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C0293B0C (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 * Callees:
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 */

void __fastcall DestroyUMPDHeap(struct _UMPDHEAP *a1, __int64 a2)
{
  int IsEnabledDeviceUsage; // eax
  void *v4; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 1) )
    {
      IsEnabledDeviceUsage = Feature_2249667896__private_IsEnabledDeviceUsage(a1, a2);
      v4 = (void *)*((_QWORD *)a1 + 1);
      if ( IsEnabledDeviceUsage )
        GrepUnsecureVirtualMemory(v4);
      else
        MmUnsecureVirtualMemory(v4);
    }
    if ( *(_QWORD *)a1 )
    {
      BaseAddress = *(PVOID *)a1;
      RegionSize = 0x400000LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    Win32FreePool(a1);
  }
}
