/*
 * XREFs of PopPulseSystemIdleEvent @ 0x14078EB10
 * Callers:
 *     PopUpdateLastUserInputTime @ 0x140781780 (PopUpdateLastUserInputTime.c)
 *     PopSystemIdleWorker @ 0x1408F1260 (PopSystemIdleWorker.c)
 *     PopUpdateSystemIdleContext @ 0x1408F1404 (PopUpdateSystemIdleContext.c)
 *     PopInitializeSystemIdleDetection @ 0x140A741B8 (PopInitializeSystemIdleDetection.c)
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
    *((_QWORD *)&unk_140C0F230 + 7 * (int)a1) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  return v1;
}
