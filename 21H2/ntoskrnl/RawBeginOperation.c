/*
 * XREFs of RawBeginOperation @ 0x1402D2BA0
 * Callers:
 *     RawQueryFsVolumeInfo @ 0x14074B910 (RawQueryFsVolumeInfo.c)
 *     RawReadWriteDeviceControl @ 0x14074BBC4 (RawReadWriteDeviceControl.c)
 *     RawUserFsCtrl @ 0x1407FBE14 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x1409B5004 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x1409B5088 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x1409B5334 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1409B53D8 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
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
