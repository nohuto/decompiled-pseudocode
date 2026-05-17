/*
 * XREFs of RtlGetNtSystemRoot @ 0x180016BB0
 * Callers:
 *     LdrpGetModuleName @ 0x1800010E8 (LdrpGetModuleName.c)
 *     LdrpBuildSystem32FileName @ 0x18001A838 (LdrpBuildSystem32FileName.c)
 *     RtlQueryResourcePolicy @ 0x180044700 (RtlQueryResourcePolicy.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180047690 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     IsOverlaySupportedPath @ 0x180047B00 (IsOverlaySupportedPath.c)
 *     RtlpDiskSpeedInitialize @ 0x18008B910 (RtlpDiskSpeedInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DAC38 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 */

__int64 __fastcall RtlGetNtSystemRoot(__int64 a1, __int64 a2)
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    return (__int64)NtCurrentPeb()->SharedData + 30;
  else
    return 2147352624LL;
}
