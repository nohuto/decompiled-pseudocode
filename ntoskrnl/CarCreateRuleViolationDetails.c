/*
 * XREFs of CarCreateRuleViolationDetails @ 0x1405D15B0
 * Callers:
 *     CarReportRuleViolationForTriage @ 0x1405D1FA0 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     CarInitializeRuleViolationDetails @ 0x1405D1940 (CarInitializeRuleViolationDetails.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CarCreateRuleViolationDetails(PVOID *a1)
{
  int v2; // ebx
  __int64 Pool2; // rax

  if ( a1 )
  {
    Pool2 = ExAllocatePool2(64LL, 72LL, 1316118851LL);
    *a1 = (PVOID)Pool2;
    if ( Pool2 )
    {
      v2 = CarInitializeRuleViolationDetails(Pool2);
      if ( v2 < 0 )
        ExFreePoolWithTag(*a1, 0x4E726143u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
