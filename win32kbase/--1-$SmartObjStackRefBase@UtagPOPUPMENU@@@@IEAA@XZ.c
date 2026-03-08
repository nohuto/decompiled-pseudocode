/*
 * XREFs of ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0153D04
 * Callers:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0153CEC (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0153EEC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 */

__int64 __fastcall SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(__int64 a1)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 result; // rax
  _QWORD *v4; // rcx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(a1);
  v4 = *(_QWORD **)(ThreadWin32Thread + 1512);
  if ( v4 )
    *(_QWORD *)(ThreadWin32Thread + 1512) = *v4;
  return result;
}
