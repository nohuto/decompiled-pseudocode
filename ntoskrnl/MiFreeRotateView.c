/*
 * XREFs of MiFreeRotateView @ 0x140A2E638
 * Callers:
 *     MiInitializePartialVad @ 0x140760134 (MiInitializePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x140A44E38 (MiDeleteNewlyCreatedPartialVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140289A20 (MiGetVadWakeList.c)
 *     MiFreeRotateVadEvent @ 0x140A2E600 (MiFreeRotateVadEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
