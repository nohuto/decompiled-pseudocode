/*
 * XREFs of CarCreateRuleClassConfigurationEntry @ 0x1405D14E4
 * Callers:
 *     CarRegisterRuleClassConfiguration @ 0x1405D1C80 (CarRegisterRuleClassConfiguration.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CarCreateRuleClassConfigurationEntry(_QWORD *a1)
{
  unsigned int v1; // ebx
  void *Pool2; // rax

  v1 = 0;
  if ( a1 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 104LL, 1316118851LL);
    *a1 = Pool2;
    if ( Pool2 )
      memset(Pool2, 0, 0x68uLL);
    else
      return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
