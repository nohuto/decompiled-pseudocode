/*
 * XREFs of RawEndOperation @ 0x140360738
 * Callers:
 *     RawCompletionRoutine @ 0x1403606A0 (RawCompletionRoutine.c)
 *     RawQueryFsVolumeInfo @ 0x14071A7F8 (RawQueryFsVolumeInfo.c)
 *     RawReadWriteDeviceControl @ 0x14071AD48 (RawReadWriteDeviceControl.c)
 *     RawUserFsCtrl @ 0x14076DEF8 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x14090F404 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14090F488 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x14090F734 (RawQueryInformation.c)
 *     RawSetInformation @ 0x14090F7D8 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140360770 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
}
