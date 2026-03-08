/*
 * XREFs of HalpAcpiTableCacheInit @ 0x140B3DDE0
 * Callers:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 *     HalpSetupAcpiPhase0 @ 0x140B62CA8 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpAcpiGetCachedTable @ 0x14029C6E4 (HalpAcpiGetCachedTable.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     HalpAcpiCopyBiosTable @ 0x14037AA9C (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiAllocateMemory @ 0x14037AB24 (HalpAcpiAllocateMemory.c)
 *     HalpAcpiCacheTable @ 0x14037ABF4 (HalpAcpiCacheTable.c)
 *     HalpUnmapVirtualAddress @ 0x14037ADE0 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpAcpiFindRsdp @ 0x140B6C7C8 (HalpAcpiFindRsdp.c)
 *     HalpAcpiCacheOverrideTables @ 0x140B8DD04 (HalpAcpiCacheOverrideTables.c)
 *     HalpAcpiCalculateCacheSizeForOverrideTables @ 0x140B8DDA4 (HalpAcpiCalculateCacheSizeForOverrideTables.c)
 */

__int64 __fastcall HalpAcpiTableCacheInit(__int64 a1)
{
  unsigned int Rsdp; // esi
  char v3; // bp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r15
  unsigned int *v11; // rax
  unsigned __int64 v12; // rdi
  char *v13; // rbx
  unsigned int v14; // r15d
  unsigned int v15; // eax
  unsigned int v16; // ebx
  void *Memory; // rax
  void *v18; // r12
  __int64 *v19; // [rsp+68h] [rbp+10h] BYREF

  Rsdp = 0;
  v19 = 0LL;
  v3 = 0;
  if ( HalpAcpiTableCacheList )
    return Rsdp;
  HalpAcpiTableCacheLock.Count = 1;
  HalpAcpiTableCacheLock.Event.Header.WaitListHead.Blink = &HalpAcpiTableCacheLock.Event.Header.WaitListHead;
  HalpAcpiTableCacheLock.Event.Header.WaitListHead.Flink = &HalpAcpiTableCacheLock.Event.Header.WaitListHead;
  qword_140CF8218 = (__int64)&HalpAcpiTableCacheList;
  HalpAcpiTableCacheList = (__int64)&HalpAcpiTableCacheList;
  HalpAcpiTableCacheLock.Owner = 0LL;
  HalpAcpiTableCacheLock.Contention = 0;
  LOWORD(HalpAcpiTableCacheLock.Event.Header.Lock) = 1;
  HalpAcpiTableCacheLock.Event.Header.Size = 6;
  HalpAcpiTableCacheLock.Event.Header.SignalState = 0;
  Rsdp = HalpAcpiFindRsdp(a1, &v19);
  if ( (Rsdp & 0x80000000) != 0 )
    return Rsdp;
  v5 = *(_QWORD *)(a1 + 240);
  v6 = *(_QWORD *)(v5 + 120);
  if ( v6 )
  {
    v14 = *(_DWORD *)(v5 + 128);
    if ( v14 )
    {
      v15 = HalpAcpiCalculateCacheSizeForOverrideTables(*(_QWORD *)(v5 + 120), v14);
      v16 = v15;
      if ( v15 )
      {
        Memory = (void *)HalpAcpiAllocateMemory(a1, v15);
        v18 = Memory;
        if ( Memory )
        {
          memset(Memory, 0, v16);
          HalpAcpiCacheOverrideTables(a1, v18, v16, v6, v14);
        }
      }
    }
  }
  if ( HalpAcpiGetCachedTable(1413763922, 0LL, 0LL) || HalpAcpiGetCachedTable(1413763928, 0LL, 0LL) )
    v3 = 1;
  v7 = *v19;
  if ( *v19 == -1 || (v8 = HalpMap(*v19, ((*v19 & 0xFFFuLL) + 4131) >> 12, 1u, 0LL, 4u)) == 0 )
  {
    if ( v3 )
      return Rsdp;
    DbgPrint("**** HalpAcpiTableCacheInit: Unable to map RSDT\n");
    return (unsigned int)-1073741670;
  }
  if ( *(_DWORD *)v8 != 1413763928 && *(_DWORD *)v8 != 1413763922 )
  {
    if ( !v3 )
    {
      DbgPrint("**** HalpAcpiTableCacheInit: The RSDT pointer is invalid.\n");
      KeBugCheckEx(0xA5u, 0x1000AuLL, 0LL, 0LL, 0LL);
    }
    return Rsdp;
  }
  v9 = *(unsigned int *)(v8 + 4);
  HalpUnmapVirtualAddress(v8, ((v8 & 0xFFF) + 4131) >> 12, 0LL);
  v10 = (unsigned int)v9;
  v11 = (unsigned int *)HalpMap(v7, (v9 + (unsigned __int64)(v7 & 0xFFF) + 4095) >> 12, 1u, 0LL, 4u);
  v12 = (unsigned __int64)v11;
  if ( !v11 )
  {
    if ( v3 )
      return Rsdp;
    DbgPrint("**** HalpAcpiTableCacheInit: Unable to remap RSDT.\n");
    return (unsigned int)-1073741670;
  }
  v13 = HalpAcpiCopyBiosTable(a1, v11, v7);
  if ( v13 )
  {
    HalpUnmapVirtualAddress(v12, (v10 + (v12 & 0xFFF) + 4095) >> 12, 0LL);
    HalpAcpiCacheTable(a1, (__int64)v13);
  }
  else
  {
    if ( !v3 )
    {
      DbgPrint("**** HalpAcpiTableCacheInit: Unable to cache RSDT.\n");
      Rsdp = -1073741670;
    }
    HalpUnmapVirtualAddress(v12, (v10 + (v12 & 0xFFF) + 4095) >> 12, 0LL);
  }
  return Rsdp;
}
