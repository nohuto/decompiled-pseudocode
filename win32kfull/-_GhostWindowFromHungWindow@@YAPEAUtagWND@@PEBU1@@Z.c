/*
 * XREFs of ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00255DC
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C0025360 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1C0025580 (NtUserGhostWindowFromHungWindow.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C0044458 (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 *     _VisrgnFromWindow @ 0x1C007EFB0 (_VisrgnFromWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C014A64C (DWP_GetEnabledPopup.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C0039B60 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall _GhostWindowFromHungWindow(const struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 Prop; // rax
  __int64 v4; // rdx
  bool v5; // zf
  __int64 v7; // rax

  v2 = 0LL;
  if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL);
    if ( Prop )
    {
      v5 = Prop == -1;
    }
    else
    {
      Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
      v5 = Prop == 0;
    }
    if ( !v5 )
    {
      LOBYTE(v4) = 1;
      v7 = HMValidateHandleNoSecure(Prop, v4);
      v2 = v7;
      if ( v7 )
      {
        if ( (unsigned int)IsWindowBeingDestroyed(v7) )
          return 0LL;
      }
    }
  }
  return (struct tagWND *)v2;
}
