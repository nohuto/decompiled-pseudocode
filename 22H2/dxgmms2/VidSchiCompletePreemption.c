/*
 * XREFs of VidSchiCompletePreemption @ 0x1C002F28C
 * Callers:
 *     VidSchiPreemptEngineNodes @ 0x1C00CEA6C (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00CED04 (VidSchiResetEngines.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x1C00CF594 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2892);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption(a1);
  return result;
}
