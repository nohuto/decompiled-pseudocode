/*
 * XREFs of ?DetachFromChannel@CHolographicExclusiveMode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802A4930
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802A2748 (-RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 */

void __fastcall CHolographicExclusiveMode::DetachFromChannel(
        CHolographicExclusiveMode *this,
        CAnimationLoggingManager **a2)
{
  CHolographicManager *v3; // rcx

  v3 = (CHolographicManager *)*((_QWORD *)this + 9);
  if ( v3 )
    CHolographicManager::RemoveExclusiveModeProxy(v3, this);
  CResource::DetachFromChannel(this, a2);
}
