/*
 * XREFs of HMChangeOwnerProcessWorker @ 0x1C0113F60
 * Callers:
 *     <none>
 * Callees:
 *     HMChangeOwnerPheProcessWorker @ 0x1C009B668 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcessWorker(_DWORD *a1, __int64 a2, int a3)
{
  return HMChangeOwnerPheProcessWorker(
           (__int64)qword_1C024FA38 + dword_1C024FA40 * (unsigned int)(unsigned __int16)*a1,
           a2,
           a3);
}
