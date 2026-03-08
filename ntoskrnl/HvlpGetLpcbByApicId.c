/*
 * XREFs of HvlpGetLpcbByApicId @ 0x14053EB98
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403714E0 (HvlStartBootLogicalProcessors.c)
 *     KiQueryProcessorNode @ 0x140372500 (KiQueryProcessorNode.c)
 *     HvlGetLpIndexFromApicId @ 0x14053DBA0 (HvlGetLpIndexFromApicId.c)
 *     HvlpEnableRootVirtualProcessor @ 0x14093E468 (HvlpEnableRootVirtualProcessor.c)
 * Callees:
 *     <none>
 */

int *__fastcall HvlpGetLpcbByApicId(int a1)
{
  int *result; // rax
  unsigned int v2; // edx

  result = HvlpLogicalProcessorRegions;
  v2 = 0;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0LL;
  while ( result[2] != a1 )
  {
    ++v2;
    result += 30;
    if ( v2 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0LL;
  }
  return result;
}
