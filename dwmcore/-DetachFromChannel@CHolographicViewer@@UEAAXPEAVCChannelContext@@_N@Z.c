/*
 * XREFs of ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802A8580
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1802A29F0 (-RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 *     ?Dispose@CHolographicViewer@@UEAAJXZ @ 0x1802A85F0 (-Dispose@CHolographicViewer@@UEAAJXZ.c)
 */

void __fastcall CHolographicViewer::DetachFromChannel(CHolographicViewer *this, CAnimationLoggingManager **a2)
{
  RTL_SRWLOCK *v3; // rcx

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 21);
  if ( v3 && *((_BYTE *)this + 160) )
    CHolographicManager::RemoveHolographicViewer(v3, this);
  CHolographicViewer::Dispose((CHolographicViewer *)((char *)this + 72));
  CResource::DetachFromChannel(this, a2);
}
