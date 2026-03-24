/*
 * XREFs of ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C0039260
 * Callers:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C0039448 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 * Callees:
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C0039894 (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     _GhostWindowFromHungWindow @ 0x1C003B510 (_GhostWindowFromHungWindow.c)
 *     _GetTopLevelWindow @ 0x1C006FC20 (_GetTopLevelWindow.c)
 *     _GetClientRect @ 0x1C00FF8F8 (_GetClientRect.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

char __fastcall GetVisRgn(struct tagWND *a1, unsigned int a2, HRGN a3)
{
  char v5; // bl
  __int64 TopLevelWindow; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  int v13; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+3Ch] [rbp-24h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF

  v5 = 0;
  if ( !(unsigned int)GetWindowRgn(a1, a3, a2) )
  {
    v11 = 0LL;
    GetClientRect(a1, &v11);
    v13 = DWORD2(v11) - v11;
    v14 = HIDWORD(v11) - DWORD1(v11);
    v12 = 0LL;
    SetRectRgnIndirect(a3, &v12);
  }
  v15 = 0LL;
  if ( (unsigned int)GreGetRgnBox(a3, &v15) == 1 )
  {
    TopLevelWindow = GetTopLevelWindow(a1);
    if ( TopLevelWindow )
      return GhostWindowFromHungWindow(TopLevelWindow, v8, v9, v10) != 0;
  }
  return v5;
}
