/*
 * XREFs of DCELogicalSpeedTopLevelHitTest @ 0x1C01DF4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C0077940 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00779AC (IsWindowUnderActiveLockScreen.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0078D94 (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 */

struct tagWND *__fastcall DCELogicalSpeedTopLevelHitTest(struct tagPOINT *a1, unsigned int a2)
{
  __int64 v4; // rbx
  struct tagWND *i; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagPOINT v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
  if ( !v4 )
    return 0LL;
  for ( i = *(struct tagWND **)(v4 + 112); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    v9 = *a1;
    if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0x10) != 0
      && !(unsigned int)GetWindowCloakState(i)
      && !(unsigned int)IsWindowUnderActiveLockScreen((__int64)i) )
    {
      v7 = *((_QWORD *)i + 5);
      if ( (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v7 + 288) >> 8)) & 0x1FF) != 0 )
      {
        LogicalToPhysicalDPIPoint(&v9, &v9, a2, 0LL);
        PhysicalToLogicalDPIPoint(&v9, &v9, *(unsigned int *)(*((_QWORD *)i + 5) + 288LL), 0LL);
        v7 = *((_QWORD *)i + 5);
      }
      if ( PtInRect((_DWORD *)(v7 + 88), *(_QWORD *)&v9) && !tagWND::PtOutsideClipRgnOrMaxClip(i, &v9) )
      {
        v8 = *((_QWORD *)i + 5);
        if ( (*(_BYTE *)(v8 + 26) & 8) == 0 || (*(_DWORD *)(v8 + 232) & 2) != 0 || DCELayerHitTest(i, v9) )
          break;
      }
    }
  }
  return i;
}
