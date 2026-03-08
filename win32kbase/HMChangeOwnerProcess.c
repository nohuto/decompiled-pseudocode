/*
 * XREFs of HMChangeOwnerProcess @ 0x1C00AEF30
 * Callers:
 *     <none>
 * Callees:
 *     HMChangeOwnerPheProcessWorker @ 0x1C00AEF58 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcess(_DWORD *a1)
{
  return HMChangeOwnerPheProcessWorker((char *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*a1);
}
