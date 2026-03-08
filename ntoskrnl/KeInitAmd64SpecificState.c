/*
 * XREFs of KeInitAmd64SpecificState @ 0x140B6F644
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140B57734 (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     KiFilterFiberContext @ 0x140B14C30 (KiFilterFiberContext.c)
 *     KiSwInterruptPresent @ 0x140B65038 (KiSwInterruptPresent.c)
 */

__int64 KeInitAmd64SpecificState()
{
  __int64 result; // rax

  _mm_lfence();
  if ( !(_DWORD)InitSafeBootMode )
    return (unsigned int)(__ROR4__((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent, 1)
                        / (((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent) != 0 ? -1 : 17));
  result = KiSwInterruptPresent();
  if ( (int)result >= 0 )
    return (unsigned int)(__ROR4__((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent, 1)
                        / (((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent) != 0 ? -1 : 17));
  return result;
}
