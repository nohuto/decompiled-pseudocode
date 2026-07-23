/*
 * XREFs of RawBeginOperation @ 0x1402A586C
 * Callers:
 *     RawQueryFsVolumeInfo @ 0x1406C84DC (RawQueryFsVolumeInfo.c)
 *     RawReadWriteDeviceControl @ 0x1406C8A38 (RawReadWriteDeviceControl.c)
 *     RawUserFsCtrl @ 0x14076E0B8 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x14090F564 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14090F5E8 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x14090F894 (RawQueryInformation.c)
 *     RawSetInformation @ 0x14090F938 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402A58B0 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

BOOLEAN __fastcall RawBeginOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  BOOLEAN result; // al

  v2 = *(_QWORD *)(a1 + 200);
  result = 1;
  if ( !v2 || a2 != v2 )
    return ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
  return result;
}
