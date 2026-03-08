/*
 * XREFs of RawEndOperation @ 0x14028E08C
 * Callers:
 *     RawCompletionRoutine @ 0x14028DFF0 (RawCompletionRoutine.c)
 *     RawReadWriteDeviceControl @ 0x1406F30A4 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x1406F3758 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x14087D8B4 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x1409B5424 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x1409B54A8 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x1409B5754 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1409B57F8 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 208);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 224), 1u);
}
