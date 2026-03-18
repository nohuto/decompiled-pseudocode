/*
 * XREFs of ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1C00DA9FC
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C00D8C28 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1C00DA4A0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 */

void __fastcall HmgShareLockResult<SURFACE>::~HmgShareLockResult<SURFACE>(__int64 a1)
{
  UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic((unsigned int **)a1);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((_QWORD *)(a1 + 8));
}
