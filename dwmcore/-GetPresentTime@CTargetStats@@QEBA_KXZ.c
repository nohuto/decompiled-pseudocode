/*
 * XREFs of ?GetPresentTime@CTargetStats@@QEBA_KXZ @ 0x1801E4550
 * Callers:
 *     ?GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801E511C (-GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_STATS@@@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 */

unsigned __int64 __fastcall CTargetStats::GetPresentTime(CTargetStats *this)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v2; // rdx

  CurrentFrameId = GetCurrentFrameId();
  if ( *(_QWORD *)(v2 + 64) == CurrentFrameId )
    return *(_QWORD *)(v2 + 56);
  else
    return 0LL;
}
