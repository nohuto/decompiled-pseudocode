/*
 * XREFs of RegisterKernelCpc @ 0x1C0036FB0
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C0035000 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterKernelCpc(_QWORD *a1)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterKernelPerfStatesCallback);
}
