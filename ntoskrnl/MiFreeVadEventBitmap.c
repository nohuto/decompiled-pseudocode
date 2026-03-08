/*
 * XREFs of MiFreeVadEventBitmap @ 0x140A2F248
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x140756084 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x140A4571C (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A461CC (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140289A20 (MiGetVadWakeList.c)
 *     MiFreeVadEventBitmapCharges @ 0x140703AFC (MiFreeVadEventBitmapCharges.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEventBitmap(struct _KPROCESS *a1, __int64 a2, int a3)
{
  unsigned __int64 VadWakeList; // rax
  void *v5; // rbx

  VadWakeList = MiGetVadWakeList(a2, a3);
  v5 = (void *)VadWakeList;
  if ( VadWakeList )
  {
    MiFreeVadEventBitmapCharges(a1, VadWakeList);
    ExFreePoolWithTag(v5, 0);
  }
}
