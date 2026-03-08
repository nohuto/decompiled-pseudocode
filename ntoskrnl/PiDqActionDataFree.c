/*
 * XREFs of PiDqActionDataFree @ 0x1407468D4
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x140746290 (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x140746614 (PiDqActionDataCreate.c)
 *     PiDqQueryFreeActiveData @ 0x1407910F8 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1406CC480 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqActionDataFree(PVOID P)
{
  void *v2; // rcx
  char *v3; // rdx

  if ( *(_DWORD *)P )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x58706E50u);
    v3 = (char *)*((_QWORD *)P + 4);
    if ( v3 )
      PnpFreeDevPropertyArray(*((_DWORD *)P + 6), v3, 0x58706E50u);
  }
  ExFreePoolWithTag(P, 0x58706E50u);
}
