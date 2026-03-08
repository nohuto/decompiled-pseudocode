/*
 * XREFs of EmpFreePool @ 0x140245FC0
 * Callers:
 *     EmpEvaluateNodeLink @ 0x140245FF4 (EmpEvaluateNodeLink.c)
 *     EmpEvaluateTargetRule @ 0x1402D6300 (EmpEvaluateTargetRule.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EmpFreePool(void *a1, unsigned __int64 a2, unsigned int a3)
{
  if ( !a2 || (unsigned __int64)a1 < a2 || (unsigned __int64)a1 >= a2 + a3 )
    ExFreePoolWithTag(a1, 0x76654D45u);
}
