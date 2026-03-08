/*
 * XREFs of HvlpEndPageListIteration @ 0x140547D2C
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140544D14 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140544F20 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1405458B8 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x140547D58 (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x14054800C (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall HvlpEndPageListIteration(int a1)
{
  __int16 *result; // rax

  result = &HvlpIteratorCrashdump;
  if ( !a1 )
    result = &HvlpIteratorHibernate;
  *((_QWORD *)result + 1) = 0LL;
  *result = 0;
  *(__int16 *)((char *)result + 3) = 0;
  *((_BYTE *)result + 2) = 0;
  return result;
}
