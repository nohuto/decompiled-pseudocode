/*
 * XREFs of MiFreeVadEventBitmap @ 0x1408C87A8
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x140683A58 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x1408D8AE0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D9578 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x1402986A0 (MiGetVadWakeList.c)
 *     MiFreeVadEventBitmapCharges @ 0x140694934 (MiFreeVadEventBitmapCharges.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEventBitmap(struct _KPROCESS *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 *VadWakeList; // rax
  __int64 *v6; // rbx

  VadWakeList = MiGetVadWakeList(a2, a3, a3, a4);
  v6 = VadWakeList;
  if ( VadWakeList )
  {
    MiFreeVadEventBitmapCharges(a1, (__int64)VadWakeList);
    ExFreePoolWithTag(v6, 0);
  }
}
