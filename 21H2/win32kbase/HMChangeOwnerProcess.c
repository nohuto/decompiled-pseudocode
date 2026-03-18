/*
 * XREFs of HMChangeOwnerProcess @ 0x1C00AC540
 * Callers:
 *     <none>
 * Callees:
 *     HMChangeOwnerPheProcessWorker @ 0x1C00AC568 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcess(_DWORD *a1)
{
  return HMChangeOwnerPheProcessWorker((char *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*a1);
}
