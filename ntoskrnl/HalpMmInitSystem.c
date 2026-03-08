/*
 * XREFs of HalpMmInitSystem @ 0x140A8D600
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmReservePageTablePages @ 0x14037B1CC (HalpMmReservePageTablePages.c)
 *     HalpMmAllocCtxInit @ 0x14039F22C (HalpMmAllocCtxInit.c)
 *     HalpInitMemoryCachingRequirementsTable @ 0x140A8D6E8 (HalpInitMemoryCachingRequirementsTable.c)
 *     HalpConsumeLowMemory @ 0x140B62A4C (HalpConsumeLowMemory.c)
 */

__int64 __fastcall HalpMmInitSystem(int a1, __int64 a2, __int64 a3)
{
  int inited; // ebx
  int v4; // ecx
  int v5; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  inited = 0;
  if ( a1 )
  {
    v4 = a1 - 12;
    if ( v4 )
    {
      v5 = v4 - 4;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          inited = HalpInitMemoryCachingRequirementsTable(a3);
          if ( inited >= 0 )
            HalpMoveMemory[0] = (__int64 (__fastcall *)())RtlCopyMemoryNonTemporal;
        }
      }
      else
      {
        HalpMmReservePageTablePages();
        HalpMmLoaderBlock = 0LL;
        HalpMmLeftoverMemory = 0LL;
        HalpMmLeftoverMemorySize = 0;
      }
    }
    else if ( HalpMiscDiscardLowMemory )
    {
      HalpConsumeLowMemory(a3);
    }
  }
  else
  {
    v7 = *(_QWORD *)(a3 + 240);
    HalpMmLeftoverMemory = 0LL;
    HalpMmLeftoverMemorySize = 0;
    HalpMmLoaderBlock = a3;
    v8 = *(_QWORD *)(v7 + 2960);
    v9 = *(_QWORD *)(v7 + 2968);
    HalpHeapStart = v8;
    HalpHeapEnd = v8 + v9;
    HalpOriginalHeapEnd = v8 + v9 - 1;
    qword_140C01B28 = (__int64)HalpAllocateEarlyPages;
    qword_140C01B30 = (__int64)HalpMapEarlyPages;
    HalpOriginalHeapStart = v8;
    HalpMmAllocCtxInit();
  }
  return (unsigned int)inited;
}
