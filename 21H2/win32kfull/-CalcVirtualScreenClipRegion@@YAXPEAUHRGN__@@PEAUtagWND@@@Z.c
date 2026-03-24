/*
 * XREFs of ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C003FDA0
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C0043070 (_ExcludeUpdateRgn.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C0041FE8 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     GetScreenRectForWindow @ 0x1C025DA2C (GetScreenRectForWindow.c)
 */

void __fastcall CalcVirtualScreenClipRegion(HRGN a1, struct tagWND *a2)
{
  __int64 v4; // rax
  unsigned __int16 v5; // di
  __int64 DispInfo; // rax
  __int128 *MonitorRectForDpi; // rax
  __int64 EmptyRgn; // rbp
  __int64 i; // rbx
  _BYTE v10[16]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 456LL);
  if ( v4
    && (*(_DWORD *)(**(_QWORD **)(v4 + 8) + 64LL) & 1) != 0
    && (v5 = (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF) != 0 )
  {
    SetEmptyRgn(a1);
    if ( *(_DWORD *)*gpDispInfo == 1 )
    {
      DispInfo = GetDispInfo();
      MonitorRectForDpi = (__int128 *)GetMonitorRectForDpi(v10, *(_QWORD *)(DispInfo + 96), v5);
LABEL_6:
      v11 = *MonitorRectForDpi;
      SetRectRgnIndirect(a1, &v11);
      return;
    }
    EmptyRgn = CreateEmptyRgn();
    if ( !EmptyRgn )
    {
      MonitorRectForDpi = (__int128 *)GetScreenRectForWindow(v10, a2);
      goto LABEL_6;
    }
    for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v11 = *(_OWORD *)GetMonitorRectForDpi(v10, i, v5);
        SetRectRgnIndirect(EmptyRgn, &v11);
        GreCombineRgn(a1, a1, EmptyRgn, 2LL);
      }
    }
    GreDeleteObject(EmptyRgn);
  }
  else
  {
    GreCombineRgn(a1, *(_QWORD *)(gpDispInfo + 120LL), 0LL, 5LL);
  }
}
