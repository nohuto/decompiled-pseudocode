/*
 * XREFs of RawEndOperation @ 0x1402A5638
 * Callers:
 *     RawCompletionRoutine @ 0x1402A55A0 (RawCompletionRoutine.c)
 *     RawQueryFsVolumeInfo @ 0x1406C84DC (RawQueryFsVolumeInfo.c)
 *     RawReadWriteDeviceControl @ 0x1406C8A38 (RawReadWriteDeviceControl.c)
 *     RawUserFsCtrl @ 0x14076E0B8 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x14090F564 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14090F5E8 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x14090F894 (RawQueryInformation.c)
 *     RawSetInformation @ 0x14090F938 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402A5670 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
}
