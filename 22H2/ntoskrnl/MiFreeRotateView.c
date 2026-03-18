/*
 * XREFs of MiFreeRotateView @ 0x140A31368
 * Callers:
 *     MiInitializePartialVad @ 0x14076DBFC (MiInitializePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x140A47B08 (MiDeleteNewlyCreatedPartialVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14028A050 (MiGetVadWakeList.c)
 *     MiFreeRotateVadEvent @ 0x140A31330 (MiFreeRotateVadEvent.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRotateView(__int64 a1)
{
  unsigned __int64 VadWakeList; // rax
  void *v2; // rbx

  VadWakeList = MiGetVadWakeList(a1, 8);
  v2 = (void *)VadWakeList;
  if ( VadWakeList )
  {
    MiFreeRotateVadEvent(VadWakeList);
    ExFreePoolWithTag(v2, 0);
  }
}
