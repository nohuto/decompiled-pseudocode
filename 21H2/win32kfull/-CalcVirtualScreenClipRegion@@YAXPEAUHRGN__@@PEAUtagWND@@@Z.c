/*
 * XREFs of ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C022E878
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C00C4B2C (_ExcludeUpdateRgn.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00B0924 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GetScreenRectForWindow @ 0x1C025A608 (GetScreenRectForWindow.c)
 */

void __fastcall CalcVirtualScreenClipRegion(HRGN a1, struct tagWND *a2)
{
  __int64 v4; // rax
  unsigned __int16 v5; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 DispInfo; // rax
  __int64 *MonitorRectForDpi; // rax
  __int64 EmptyRgn; // rbp
  __int64 i; // rbx
  __int64 v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 456LL);
  if ( v4
    && (*(_DWORD *)(**(_QWORD **)(v4 + 8) + 64LL) & 1) != 0
    && (v5 = (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF) != 0 )
  {
    SetEmptyRgn(a1);
    if ( *(_DWORD *)*gpDispInfo == 1 )
    {
      DispInfo = GetDispInfo(gpDispInfo, v6, v7, v8);
      MonitorRectForDpi = GetMonitorRectForDpi(v13, *(_QWORD *)(DispInfo + 96), v5);
LABEL_6:
      v14 = *(_OWORD *)MonitorRectForDpi;
      SetRectRgnIndirect(a1, &v14);
      return;
    }
    EmptyRgn = CreateEmptyRgn(gpDispInfo);
    if ( !EmptyRgn )
    {
      MonitorRectForDpi = (__int64 *)GetScreenRectForWindow(v13, a2);
      goto LABEL_6;
    }
    for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v14 = *(_OWORD *)GetMonitorRectForDpi(v13, i, v5);
        SetRectRgnIndirect(EmptyRgn, &v14);
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
