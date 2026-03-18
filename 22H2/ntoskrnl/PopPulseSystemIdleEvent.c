/*
 * XREFs of PopPulseSystemIdleEvent @ 0x1407A8AEC
 * Callers:
 *     PopSystemIdleWorker @ 0x1407A72B0 (PopSystemIdleWorker.c)
 *     PopUpdateLastUserInputTime @ 0x1407A7840 (PopUpdateLastUserInputTime.c)
 *     PopUpdateSystemIdleContext @ 0x1408258D8 (PopUpdateSystemIdleContext.c)
 *     PopInitializeSystemIdleDetection @ 0x140B75A74 (PopInitializeSystemIdleDetection.c)
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
