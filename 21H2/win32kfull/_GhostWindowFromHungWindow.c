/*
 * XREFs of _GhostWindowFromHungWindow @ 0x1C00B4C0C
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C00B4348 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C00B478C (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1C00B4BB0 (NtUserGhostWindowFromHungWindow.c)
 *     _VisrgnFromWindow @ 0x1C0102848 (_VisrgnFromWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C023F45C (DWP_GetEnabledPopup.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall GhostWindowFromHungWindow(__int64 a1)
{
  __int64 v2; // rbx
  __int64 Prop; // rax
  bool v4; // zf
  __int64 v6; // rax

  v2 = 0LL;
  if ( **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1u);
    if ( Prop )
    {
      v4 = Prop == -1;
    }
    else
    {
      Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1u);
      v4 = Prop == 0;
    }
    if ( !v4 )
    {
      v6 = HMValidateHandleNoSecure(Prop, 1);
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
