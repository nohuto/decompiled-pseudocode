/*
 * XREFs of KeInitAmd64SpecificState @ 0x140A5F0D4
 * Callers:
 *     PsNotifyCoreDriversInitialized @ 0x140A5EF60 (PsNotifyCoreDriversInitialized.c)
 * Callees:
 *     KiFilterFiberContext @ 0x140A1BBA0 (KiFilterFiberContext.c)
 *     KiSwInterruptPresent @ 0x140A41820 (KiSwInterruptPresent.c)
 */

__int64 KeInitAmd64SpecificState()
{
  __int64 result; // rax

  _mm_lfence();
  if ( !InitSafeBootMode )
    return (unsigned int)(__ROR4__((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent, 1)
                        / (((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent) != 0 ? -1 : 17));
  result = KiSwInterruptPresent();
  if ( (int)result >= 0 )
    return (unsigned int)(__ROR4__((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent, 1)
                        / (((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent) != 0 ? -1 : 17));
  return result;
}
