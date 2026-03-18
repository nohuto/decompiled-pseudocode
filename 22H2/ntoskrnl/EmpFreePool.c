/*
 * XREFs of EmpFreePool @ 0x14032DE14
 * Callers:
 *     EmpEvaluateTargetRule @ 0x14032D784 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x14032D9D4 (EmpEvaluateNodeLink.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall EmpFreePool(void *a1, unsigned __int64 a2, unsigned int a3)
{
  if ( !a2 || (unsigned __int64)a1 < a2 || (unsigned __int64)a1 >= a2 + a3 )
    ExFreePoolWithTag(a1, 0x76654D45u);
}
