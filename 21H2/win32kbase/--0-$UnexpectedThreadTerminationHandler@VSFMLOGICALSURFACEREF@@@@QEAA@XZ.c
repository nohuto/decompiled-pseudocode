/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00DA9BC
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C00232C0 (PushThreadGuardedObject.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(
        __int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      (_QWORD *)a1,
      a1,
      (__int64)UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
