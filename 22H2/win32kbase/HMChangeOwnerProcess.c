/*
 * XREFs of HMChangeOwnerProcess @ 0x1C00A1FC0
 * Callers:
 *     <none>
 * Callees:
 *     HMChangeOwnerPheProcessWorker @ 0x1C00A1FE8 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcess(_DWORD *a1)
{
  return HMChangeOwnerPheProcessWorker((char *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*a1);
}
