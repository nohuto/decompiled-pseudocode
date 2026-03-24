/*
 * XREFs of RawBeginOperation @ 0x14026D924
 * Callers:
 *     RawReadWriteDeviceControl @ 0x14062D9F8 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x14065D474 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x14076D5C8 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x14090F454 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14090F4D8 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x14090F784 (RawQueryInformation.c)
 *     RawSetInformation @ 0x14090F828 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14026D960 (ExAcquireRundownProtectionCacheAwareEx.c)
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
