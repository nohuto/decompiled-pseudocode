/*
 * XREFs of HalpInterruptLineToGsi @ 0x140505230
 * Callers:
 *     HalpTimerConfigureInterrupt @ 0x14037D5E4 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptConnect @ 0x1405042D0 (HalpInterruptConnect.c)
 *     ExtEnvSetVpptTarget @ 0x1405087B8 (ExtEnvSetVpptTarget.c)
 *     HalpTimerUnmapInterrupt @ 0x1405095B0 (HalpTimerUnmapInterrupt.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x14031FCA0 (HalpInterruptFindLines.c)
 */

__int64 __fastcall HalpInterruptLineToGsi(unsigned int *a1, _DWORD *a2)
{
  _QWORD *Lines; // rax
  int v4; // ecx

  *a2 = -1;
  Lines = HalpInterruptFindLines(a1);
  if ( !Lines )
    return 3221225485LL;
  v4 = *((_DWORD *)Lines + 7);
  if ( v4 == -1 )
    return 3221225485LL;
  *a2 = v4;
  return 0LL;
}
