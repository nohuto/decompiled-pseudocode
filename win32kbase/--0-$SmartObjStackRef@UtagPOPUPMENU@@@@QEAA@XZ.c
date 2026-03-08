/*
 * XREFs of ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0153CA0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(_QWORD *a1)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  a1[1] = 0LL;
  *a1 = &gSmartObjNullRef;
  a1[1] = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = a1 + 1;
  return a1;
}
