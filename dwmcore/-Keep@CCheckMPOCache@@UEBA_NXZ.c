/*
 * XREFs of ?Keep@CCheckMPOCache@@UEBA_NXZ @ 0x180117080
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 */

bool __fastcall CCheckMPOCache::Keep(CCheckMPOCache *this)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v2; // rdx

  CurrentFrameId = GetCurrentFrameId();
  return CurrentFrameId - *(_QWORD *)(v2 + 992) <= 0x1E;
}
