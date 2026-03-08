/*
 * XREFs of ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C0217AF4
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C000665C (_ExcludeUpdateRgn.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00A2698 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     GetScreenRectForWindow @ 0x1C014AD54 (GetScreenRectForWindow.c)
 */

void __fastcall CalcVirtualScreenClipRegion(HRGN a1, struct tagWND *a2)
{
  __int64 v4; // rax
  unsigned __int16 v5; // di
  __int64 v6; // rdx
  __int64 DispInfo; // rax
  __m128i *MonitorRectForDpi; // rax
  __int64 EmptyRgn; // rbp
  __int64 i; // rbx
  __m128i v11; // [rsp+20h] [rbp-48h] BYREF
  __m128i v12; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 456LL);
  if ( v4
    && (*(_DWORD *)(**(_QWORD **)(v4 + 8) + 64LL) & 1) != 0
    && (v5 = (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF) != 0 )
  {
    SetEmptyRgn(a1);
    if ( *(_DWORD *)*gpDispInfo == 1 )
    {
      DispInfo = GetDispInfo(gpDispInfo);
      MonitorRectForDpi = (__m128i *)GetMonitorRectForDpi(v11.m128i_i64, *(_QWORD *)(DispInfo + 96), v5);
LABEL_6:
      v12 = *MonitorRectForDpi;
      SetRectRgnIndirect(a1, &v12);
      return;
    }
    EmptyRgn = CreateEmptyRgn(gpDispInfo, v6);
    if ( !EmptyRgn )
    {
      MonitorRectForDpi = GetScreenRectForWindow(&v11, a2);
      goto LABEL_6;
    }
    for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v12 = *(__m128i *)GetMonitorRectForDpi(v11.m128i_i64, i, v5);
        SetRectRgnIndirect(EmptyRgn, &v12);
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
