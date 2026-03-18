/*
 * XREFs of HvlpEndPageListIteration @ 0x14054A1CC
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405471B4 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1405473C0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x140547D58 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpEndSecurePageListIteration @ 0x14054A1F8 (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x14054A4AC (HvlpStartSecurePageListIteration.c)
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
