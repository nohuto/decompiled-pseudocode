/*
 * XREFs of PiSwInterfaceFree @ 0x140964570
 * Callers:
 *     PiSwFreeInterfaceList @ 0x140807ACC (PiSwFreeInterfaceList.c)
 *     PiSwIrpInterfaceRegister @ 0x1408086D4 (PiSwIrpInterfaceRegister.c)
 *     PiSwInterfaceCreate @ 0x140808CA8 (PiSwInterfaceCreate.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1406CC480 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwInterfaceFree(PVOID P)
{
  void *v2; // rcx
  char *v3; // rdx

  v2 = (void *)*((_QWORD *)P + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x57706E50u);
  v3 = (char *)*((_QWORD *)P + 3);
  if ( v3 )
    PnpFreeDevPropertyArray(*((_DWORD *)P + 8), v3, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
