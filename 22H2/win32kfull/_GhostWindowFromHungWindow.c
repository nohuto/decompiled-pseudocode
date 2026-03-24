/*
 * XREFs of _GhostWindowFromHungWindow @ 0x1C003B510
 * Callers:
 *     DWP_GetEnabledPopup @ 0x1C00071D0 (DWP_GetEnabledPopup.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C0039260 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C0039448 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003AFFC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1C003B4B0 (NtUserGhostWindowFromHungWindow.c)
 *     _VisrgnFromWindow @ 0x1C011CB48 (_VisrgnFromWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C003883C (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GhostWindowFromHungWindow(__int64 a1)
{
  __int64 v2; // rbx
  __int64 Prop; // rax
  __int64 v4; // rdx
  __int64 v6; // rax

  v2 = 0LL;
  if ( **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL);
    if ( Prop )
    {
      if ( Prop == -1 )
        Prop = 0LL;
    }
    else
    {
      Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
    }
    if ( Prop )
    {
      LOBYTE(v4) = 1;
      v6 = HMValidateHandleNoSecure(Prop, v4);
      v2 = v6;
      if ( v6 )
      {
        if ( (unsigned int)IsWindowBeingDestroyed(v6) )
          return 0LL;
      }
    }
  }
  return v2;
}
