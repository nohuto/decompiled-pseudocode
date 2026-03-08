/*
 * XREFs of ?DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802A4430
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1802A28FC (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 */

void __fastcall CHolographicDisplay::DetachFromChannel(CHolographicDisplay *this, struct CChannelContext *a2)
{
  RTL_SRWLOCK *v3; // rcx

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 10);
  if ( v3 && *((_BYTE *)this + 124) )
    CHolographicManager::RemoveHolographicDisplay(v3, this);
  CNotificationResource::DetachFromChannel(this, a2);
}
