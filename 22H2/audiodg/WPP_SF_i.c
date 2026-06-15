/*
 * XREFs of WPP_SF_i @ 0x1400446CC
 * Callers:
 *     ?GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z @ 0x140043C50 (-GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_i(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids, 21LL, (__int64 *)va);
}
