/*
 * XREFs of ?DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802A40E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z @ 0x1802A287C (-RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z.c)
 */

void __fastcall CHolographicComposition::DetachFromChannel(CHolographicComposition *this, struct CChannelContext *a2)
{
  CHolographicManager *v3; // rcx

  v3 = (CHolographicManager *)*((_QWORD *)this + 11);
  if ( v3 && *((_BYTE *)this + 116) )
    CHolographicManager::RemoveHolographicComposition(v3, this);
  CNotificationResource::DetachFromChannel(this, a2);
}
