/*
 * XREFs of DCELogicalSpeedTopLevelHitTest @ 0x1C0144F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0048F7C (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00A2F70 (IsWindowUnderActiveLockScreen.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00A2FC8 (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C00DEEB0 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

struct tagWND *__fastcall DCELogicalSpeedTopLevelHitTest(struct tagPOINT *a1, unsigned int a2)
{
  __int64 v4; // rbx
  struct tagWND *i; // rbx
  __int64 v7; // rcx
  struct tagPOINT v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
  if ( !v4 )
    return 0LL;
  for ( i = *(struct tagWND **)(v4 + 112); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    v8 = *a1;
    if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0x10) != 0
      && !(unsigned int)GetWindowCloakState((struct tagTHREADINFO **)i)
      && !(unsigned int)IsWindowUnderActiveLockScreen((__int64)i) )
    {
      if ( (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)i + 5) + 288LL) >> 8)) & 0x1FF) != 0 )
      {
        LogicalToPhysicalDPIPoint(&v8, &v8, a2, 0LL);
        PhysicalToLogicalDPIPoint(&v8, &v8, *(unsigned int *)(*((_QWORD *)i + 5) + 288LL), 0LL);
      }
      if ( PtInRect((_DWORD *)(*((_QWORD *)i + 5) + 88LL), *(_QWORD *)&v8) && !tagWND::PtOutsideClipRgnOrMaxClip(i, &v8) )
      {
        v7 = *((_QWORD *)i + 5);
        if ( (*(_BYTE *)(v7 + 26) & 8) == 0 || (*(_DWORD *)(v7 + 232) & 2) != 0 || DCELayerHitTest(i, v8) )
          break;
      }
    }
  }
  return i;
}
