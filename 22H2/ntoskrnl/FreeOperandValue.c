/*
 * XREFs of FreeOperandValue @ 0x140927044
 * Callers:
 *     GetOperandValue @ 0x140927554 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x140927F44 (LocalGetConditionForString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall FreeOperandValue(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    v2 = (void *)P[1];
    if ( v2 )
    {
      if ( !*(_BYTE *)P )
        ExFreePoolWithTag(v2, 0);
    }
    ExFreePoolWithTag(P, 0);
  }
}
