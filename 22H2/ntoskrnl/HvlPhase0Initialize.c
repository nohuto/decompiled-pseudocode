/*
 * XREFs of HvlPhase0Initialize @ 0x140791B8C
 * Callers:
 *     KiInitializeKernel @ 0x14099CCF0 (KiInitializeKernel.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1402526A0 (HalSystemVectorDispatchEntry.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A5310 (HviIsAnyHypervisorPresent.c)
 *     HvlpTryConfigureInterface @ 0x1403A9460 (HvlpTryConfigureInterface.c)
 *     HvlQueryConnection @ 0x1403AA280 (HvlQueryConnection.c)
 *     strstr @ 0x1403D1180 (strstr.c)
 *     HvlpInitializeBootProcessor @ 0x1404F2D6C (HvlpInitializeBootProcessor.c)
 *     HvlpSetupBootProcessorEarlyHypercallPages @ 0x1404F3C28 (HvlpSetupBootProcessorEarlyHypercallPages.c)
 *     HvlpDetermineEnlightenments @ 0x1404FA044 (HvlpDetermineEnlightenments.c)
 *     HvlpPhase0Enlightenments @ 0x1404FA514 (HvlpPhase0Enlightenments.c)
 *     HviGetHypervisorVersion @ 0x1405BEF80 (HviGetHypervisorVersion.c)
 */

__int64 __fastcall HvlPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx

  HvlpFlags = (HviIsAnyHypervisorPresent() ? 0x1000 : 0) | HvlpFlags & 0xFFFFEFFF;
  if ( (int)HvlQueryConnection(0LL) >= 0 || (result = HvlpTryConfigureInterface(a1), (int)result >= 0) )
  {
    result = HvlpSetupBootProcessorEarlyHypercallPages(a1);
    if ( (int)result >= 0 )
    {
      HvlHypervisorConnected = 1;
      HvlpDetermineEnlightenments();
      result = HalSystemVectorDispatchEntry();
      if ( (int)result >= 0 )
      {
        if ( (HvlpFlags & 2) != 0 && strstr(*(const char **)(KeLoaderBlock_0 + 216), "HYPERVISORDBG") )
          HvlpRootFlags |= 8u;
        if ( (HvlpFlags & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3460LL) & 0x2000) != 0 )
          HvlpRootFlags |= 0x800u;
        result = HvlpPhase0Enlightenments(a1);
        if ( (int)result >= 0 )
        {
          result = HvlpInitializeBootProcessor(a1);
          v3 = result;
          if ( (int)result >= 0 )
          {
            HviGetHypervisorVersion(HvlpHypervisorVersion);
            return v3;
          }
        }
      }
    }
  }
  else if ( (_DWORD)result == -1070264320 )
  {
    return 0LL;
  }
  return result;
}
