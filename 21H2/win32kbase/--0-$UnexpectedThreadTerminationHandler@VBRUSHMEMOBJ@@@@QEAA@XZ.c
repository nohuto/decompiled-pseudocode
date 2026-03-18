/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ @ 0x1C00D8B50
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00636C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C0063970 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C00232C0 (PushThreadGuardedObject.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

unsigned __int64 __fastcall UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>::UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>(
        unsigned __int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      (_QWORD *)a1,
      (a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64),
      (__int64)UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
