/*
 * XREFs of MiFreeVadEventBitmap @ 0x140A31F78
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CD0F4 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x140A483EC (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A48E9C (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14028A050 (MiGetVadWakeList.c)
 *     MiFreeVadEventBitmapCharges @ 0x1407DFFFC (MiFreeVadEventBitmapCharges.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
