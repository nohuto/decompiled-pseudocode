/*
 * XREFs of HvlPhase0Initialize @ 0x14080D7C8
 * Callers:
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     HviIsAnyHypervisorPresent @ 0x14037F1D0 (HviIsAnyHypervisorPresent.c)
 *     HvlQueryConnection @ 0x14037FC40 (HvlQueryConnection.c)
 *     HvlpTryConfigureInterface @ 0x14037FC60 (HvlpTryConfigureInterface.c)
 *     strstr @ 0x1403D3650 (strstr.c)
 *     HvlpInitializeBootProcessor @ 0x14053ECAC (HvlpInitializeBootProcessor.c)
 *     HvlpSetupBootProcessorEarlyHypercallPages @ 0x14053FC6C (HvlpSetupBootProcessorEarlyHypercallPages.c)
 *     HvlpDetermineEnlightenments @ 0x140546B64 (HvlpDetermineEnlightenments.c)
 *     HvlpPhase0Enlightenments @ 0x14054701C (HvlpPhase0Enlightenments.c)
 *     HviGetHypervisorVersion @ 0x14061301C (HviGetHypervisorVersion.c)
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
      result = PdcCreateWatchdogAroundClientCall();
      if ( (int)result >= 0 )
      {
        if ( (HvlpFlags & 2) != 0 && strstr(*(const char **)(KeLoaderBlock_0 + 216), "HYPERVISORDBG") )
          HvlpRootFlags |= 8u;
        if ( (HvlpFlags & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3492LL) & 0x2000) != 0 )
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
