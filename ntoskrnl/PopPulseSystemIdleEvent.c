/*
 * XREFs of PopPulseSystemIdleEvent @ 0x14073ADD8
 * Callers:
 *     PopSystemIdleWorker @ 0x14073B6A0 (PopSystemIdleWorker.c)
 *     PopUpdateLastUserInputTime @ 0x14073BC30 (PopUpdateLastUserInputTime.c)
 *     PopUpdateSystemIdleContext @ 0x14082A808 (PopUpdateSystemIdleContext.c)
 *     PopInitializeSystemIdleDetection @ 0x140B717E4 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPulseSystemIdleEvent(unsigned int a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( a1 > 3 )
    return (unsigned int)-1073741811;
  else
    *((_QWORD *)&unk_140C09820 + 7 * (int)a1) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  return v1;
}
