/*
 * XREFs of HvlpSetupPageListIteration @ 0x140547F78
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140544D14 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140544F20 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1405458B8 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpStartSecurePageListIteration @ 0x14054800C (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 */

__int16 *__fastcall HvlpSetupPageListIteration(int a1, char a2)
{
  __int16 *v3; // rbx
  __int16 *v4; // rcx
  __int16 *result; // rax

  v3 = &HvlpIteratorCrashdump;
  if ( !a1 )
    v3 = &HvlpIteratorHibernate;
  *(_DWORD *)v3 = 0;
  *((_BYTE *)v3 + 4) = 0;
  if ( a1 == 1 )
  {
    v4 = (__int16 *)HvlpFallbackScratchPage;
    result = (__int16 *)HvlpHibernateScratchPage;
  }
  else
  {
    v4 = (__int16 *)HvlpHibernateScratchPage;
    result = (__int16 *)HvlpFallbackScratchPage;
  }
  if ( v4 )
  {
    *((_QWORD *)v3 + 1) = v4;
LABEL_8:
    *((PHYSICAL_ADDRESS *)v3 + 2) = MmGetPhysicalAddress(v4);
    *((_BYTE *)v3 + 3) = a2 & 1;
    *((_BYTE *)v3 + 4) = (a2 & 2) != 0;
    result = v3;
    *((_BYTE *)v3 + 2) = 1;
    return result;
  }
  *((_QWORD *)v3 + 1) = result;
  v4 = result;
  if ( result )
    goto LABEL_8;
  return result;
}
