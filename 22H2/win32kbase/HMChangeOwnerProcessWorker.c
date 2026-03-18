/*
 * XREFs of HMChangeOwnerProcessWorker @ 0x1C012C940
 * Callers:
 *     <none>
 * Callees:
 *     HMChangeOwnerPheProcessWorker @ 0x1C00A1FE8 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcessWorker(_DWORD *a1, __int64 a2)
{
  return HMChangeOwnerPheProcessWorker(
           (__int64)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*a1,
           a2);
}
