/*
 * XREFs of ShouldHaveShadow @ 0x1C00E512C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068640 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 */

__int64 __fastcall ShouldHaveShadow(_QWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 Prop; // rax

  v2 = 0;
  if ( IsTopLevelWindow((__int64)a1)
    && !gbDisableAlpha
    && !gcOverlays
    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80040000) == 0x80040000
    && (*(_BYTE *)(*(_QWORD *)(a1[17] + 8LL) + 10LL) & 2) != 0 )
  {
    v4 = a1[2];
    if ( *(_DWORD *)(v4 + 632) > 0x9900u || (*(_DWORD *)(v4 + 648) & 0x400000) == 0 )
    {
      Prop = GetProp((__int64)a1, *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy, 1u);
      if ( (!Prop || *(int *)(Prop + 40) <= 1)
        && ((*(_WORD *)(a1[5] + 42LL) & 0x2FFF) != 0x29C
         || !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) == 0x80000200
         || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000002) != 0x80000002) )
      {
        return 1;
      }
    }
  }
  return v2;
}
