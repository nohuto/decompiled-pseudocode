/*
 * XREFs of FreeOperandValue @ 0x1409D02C8
 * Callers:
 *     GetOperandValue @ 0x1409D07DC (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1409D1B24 (LocalGetConditionForString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
