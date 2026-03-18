/*
 * XREFs of ViHookDmaAdapter @ 0x140A88B74
 * Callers:
 *     VfGetDmaAdapter @ 0x140A85B10 (VfGetDmaAdapter.c)
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x1402430F0 (ExInterlockedInsertHeadList.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     ViAllocateContiguousMemory @ 0x140A870B0 (ViAllocateContiguousMemory.c)
 *     ViCopyDeviceDescription @ 0x140A87DC8 (ViCopyDeviceDescription.c)
 *     ViGetAdapterInformationInternal @ 0x140A88430 (ViGetAdapterInformationInternal.c)
 */

struct _LIST_ENTRY *__fastcall ViHookDmaAdapter(struct _LIST_ENTRY *Object, __int64 a2, int a3, char a4)
{
  struct _LIST_ENTRY *AdapterInformationInternal; // rbx
  struct _LIST_ENTRY *Pool2; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v11; // rax

  AdapterInformationInternal = ViGetAdapterInformationInternal((ULONG_PTR)Object, 0);
  if ( !AdapterInformationInternal )
  {
    Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(64LL, 0x140uLL, 0x566C6148u);
    AdapterInformationInternal = Pool2;
    if ( !Pool2 )
      return AdapterInformationInternal;
    memset(Pool2, 0, 0x140uLL);
    AdapterInformationInternal[1].Flink = Object;
    ExInterlockedInsertHeadList(&ViAdapterList, AdapterInformationInternal, &qword_140D575A0);
    ObfReferenceObject(Object);
    AdapterInformationInternal[4].Blink = 0LL;
    AdapterInformationInternal[6].Flink = 0LL;
    AdapterInformationInternal[4].Flink = (struct _LIST_ENTRY *)((char *)AdapterInformationInternal + 56);
    AdapterInformationInternal[3].Blink = (struct _LIST_ENTRY *)((char *)AdapterInformationInternal + 56);
    AdapterInformationInternal[7].Blink = 0LL;
    AdapterInformationInternal[5].Blink = AdapterInformationInternal + 5;
    AdapterInformationInternal[5].Flink = AdapterInformationInternal + 5;
    AdapterInformationInternal[9].Flink = 0LL;
    AdapterInformationInternal[7].Flink = (struct _LIST_ENTRY *)((char *)AdapterInformationInternal + 104);
    AdapterInformationInternal[6].Blink = (struct _LIST_ENTRY *)((char *)AdapterInformationInternal + 104);
    AdapterInformationInternal[8].Blink = AdapterInformationInternal + 8;
    AdapterInformationInternal[8].Flink = AdapterInformationInternal + 8;
    ViCopyDeviceDescription((__int64)&AdapterInformationInternal[12], (unsigned int *)a2);
    LODWORD(AdapterInformationInternal[9].Blink) = a3;
    if ( *(_DWORD *)(a2 + 20) == 1 && *(_DWORD *)(a2 + 16) < 8u || !*(_BYTE *)(a2 + 4) )
      BYTE2(AdapterInformationInternal[2].Flink) = 1;
    AdapterInformationInternal[17].Blink = 0LL;
    if ( *(_BYTE *)(a2 + 4) && *(_BYTE *)(a2 + 5) )
      ViAllocateContiguousMemory((__int64)AdapterInformationInternal);
    else
      BYTE1(AdapterInformationInternal[2].Flink) = 1;
    Blink = Object->Blink;
    AdapterInformationInternal[3].Flink = Blink;
    if ( Blink[15].Blink )
    {
      LODWORD(AdapterInformationInternal[12].Flink) = 3;
      v11 = (struct _LIST_ENTRY *)&ViDmaOperationsV3;
    }
    else
    {
      v11 = (struct _LIST_ENTRY *)&ViDmaOperationsV2;
    }
    Object->Blink = v11;
  }
  if ( a4 )
    _InterlockedIncrement((volatile signed __int32 *)&AdapterInformationInternal[2].Flink + 1);
  return AdapterInformationInternal;
}
