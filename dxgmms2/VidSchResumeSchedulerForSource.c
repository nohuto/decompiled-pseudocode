/*
 * XREFs of VidSchResumeSchedulerForSource @ 0x1C00B42C0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiResumeFlipQueues @ 0x1C00B42DC (VidSchiResumeFlipQueues.c)
 */

__int64 __fastcall VidSchResumeSchedulerForSource(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (_DWORD)a2 )
    return VidSchiResumeFlipQueues(a1, a2);
  return result;
}
