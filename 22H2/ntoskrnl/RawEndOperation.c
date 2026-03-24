/*
 * XREFs of RawEndOperation @ 0x1402DEA38
 * Callers:
 *     RawCompletionRoutine @ 0x1402DE9A0 (RawCompletionRoutine.c)
 *     RawReadWriteDeviceControl @ 0x14062D9F8 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x14065D474 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x14076D5C8 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x14090F454 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14090F4D8 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x14090F784 (RawQueryInformation.c)
 *     RawSetInformation @ 0x14090F828 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402DEA70 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
}
