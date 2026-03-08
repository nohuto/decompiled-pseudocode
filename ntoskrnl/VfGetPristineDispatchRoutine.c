/*
 * XREFs of VfGetPristineDispatchRoutine @ 0x140ACA1FC
 * Callers:
 *     IovpCallDriver1 @ 0x140AC9170 (IovpCallDriver1.c)
 *     VfBeforeCallDriver @ 0x140ACA5AC (VfBeforeCallDriver.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x140303C10 (MmIsDriverVerifying.c)
 */

PDRIVER_DISPATCH __fastcall VfGetPristineDispatchRoutine(struct _DRIVER_OBJECT *a1, unsigned int a2)
{
  __int64 v2; // rbx
  PDRIVER_DISPATCH result; // rax
  __int64 v5; // rcx

  v2 = a2;
  if ( a2 > 0x1B )
    return 0LL;
  if ( !MmIsDriverVerifying(a1) )
    return a1->MajorFunction[v2];
  v5 = *(_QWORD *)&a1->DriverExtension[1].ServiceKeyName.Length;
  if ( !v5 )
    return a1->MajorFunction[v2];
  result = *(PDRIVER_DISPATCH *)(v5 + 8 * v2 + 32);
  if ( !result )
    return a1->MajorFunction[v2];
  return result;
}
