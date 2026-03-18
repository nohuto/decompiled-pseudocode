/*
 * XREFs of CarCreateRuleOverrideEntry @ 0x1405D39F4
 * Callers:
 *     CarRegisterRuleOverride @ 0x1405D4200 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x1405D42F0 (CarRegisterRuleOverrideAllContexts.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CarCreateRuleOverrideEntry(_QWORD *a1)
{
  unsigned int v1; // ebx
  void *Pool2; // rax

  v1 = 0;
  if ( a1 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 80LL, 1316118851LL);
    *a1 = Pool2;
    if ( Pool2 )
      memset(Pool2, 0, 0x50uLL);
    else
      return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
