/*
 * XREFs of RawBeginOperation @ 0x14028DCD8
 * Callers:
 *     RawReadWriteDeviceControl @ 0x1406F30A4 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x1406F3758 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x14087D8B4 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x1409B5424 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x1409B54A8 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x1409B5754 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1409B57F8 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14028DD10 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

BOOLEAN __fastcall RawBeginOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  BOOLEAN result; // al

  v2 = *(_QWORD *)(a1 + 208);
  result = 1;
  if ( !v2 || a2 != v2 )
    return ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 224), 1u);
  return result;
}
