/*
 * XREFs of ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180028BB4
 * Callers:
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x180007AA4 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180022648 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x1800278B4 (--1CButton@@MEAA@XZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003E0BC (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180085700 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

void __fastcall CButton::DeactivateTimeline(struct CVisual *this, __int64 *a2)
{
  __int64 v4; // rax
  bool v5; // zf
  char v6; // al

  if ( *a2 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(this, &UdwmAnimation_Stop, 7LL);
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    v4 = *a2;
    if ( *a2 )
    {
      v5 = (*(_DWORD *)(v4 + 8))-- == 1;
      v6 = CDesktopManager::s_fTimelineDirty;
      if ( v5 )
        v6 = 1;
      *a2 = 0LL;
      CDesktopManager::s_fTimelineDirty = v6;
    }
  }
}
