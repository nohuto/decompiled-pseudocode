/*
 * XREFs of IopLiveDumpGetMillisecondCounter @ 0x14055793C
 * Callers:
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140949354 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1409495FC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140949C84 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x14094A230 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140A97838 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpCollectPages @ 0x140A97A84 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralProcessors @ 0x140A97E30 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEnterCorralledState @ 0x140A980DC (IopLiveDumpEnterCorralledState.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140A9811C (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpGenerateIptSecondaryData @ 0x140A984FC (IopLiveDumpGenerateIptSecondaryData.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x140A987A4 (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x140A98980 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140A98D24 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140A98F10 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140A990E0 (IopLiveDumpPopulateBitmapForDump.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x140A99404 (IopLiveDumpRemoveSystemCacheFromDump.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall IopLiveDumpGetMillisecondCounter(char a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / PerformanceFrequency.QuadPart;
  result = 0LL;
  if ( !a1 )
    result = v2 + qword_140D181A0 - qword_140D18198;
  qword_140D181A0 = result;
  qword_140D18198 = v2;
  return result;
}
