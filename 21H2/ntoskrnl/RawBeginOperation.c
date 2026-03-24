/*
 * XREFs of RawBeginOperation @ 0x14036096C
 * Callers:
 *     RawQueryFsVolumeInfo @ 0x14071A7F8 (RawQueryFsVolumeInfo.c)
 *     RawReadWriteDeviceControl @ 0x14071AD48 (RawReadWriteDeviceControl.c)
 *     RawUserFsCtrl @ 0x14076DEF8 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x14090F404 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14090F488 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x14090F734 (RawQueryInformation.c)
 *     RawSetInformation @ 0x14090F7D8 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1403609B0 (ExAcquireRundownProtectionCacheAwareEx.c)
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
