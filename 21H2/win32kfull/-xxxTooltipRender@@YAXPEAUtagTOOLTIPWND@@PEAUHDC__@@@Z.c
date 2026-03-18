/*
 * XREFs of ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023EB00
 * Callers:
 *     xxxTooltipWndProc @ 0x1C010CED0 (xxxTooltipWndProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C008ABC0 (GreExtTextOutWInternal.c)
 *     CALL_LPK @ 0x1C00B9BC8 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C00B9C04 (xxxClientExtTextOutW.c)
 *     GreSetTextColor @ 0x1C00BE3F8 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00BE480 (GreSetBkColor.c)
 *     GetDPIMETRICSForDpi @ 0x1C00BF104 (GetDPIMETRICSForDpi.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GreSetBkMode @ 0x1C00BFC20 (GreSetBkMode.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall xxxTooltipRender(struct tagTOOLTIPWND *a1, HDC a2)
{
  __int64 DPIMETRICSForDpi; // rax
  unsigned int v5; // edi
  _DWORD *v6; // r9
  int v7; // r8d
  int v8; // ecx
  int v9; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r10
  unsigned int v12; // r10d
  WCHAR *SourceString; // r11
  RECT v14; // [rsp+50h] [rbp-38h] BYREF

  if ( *((_QWORD *)a1 + 6) )
  {
    DPIMETRICSForDpi = GetDPIMETRICSForDpi(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 284LL));
    GreSelectFontInternal(a2, *(_QWORD *)(DPIMETRICSForDpi + 56), 1);
    GreSetTextColor(a2, *(_DWORD *)(gpsi + 4660LL));
    v5 = *(_DWORD *)(gpsi + 4664LL);
    v6 = *(_DWORD **)(*(_QWORD *)a1 + 40LL);
    v7 = v6[27];
    v8 = v6[26];
    v14.left = 0;
    v14.right = v6[28] - v8;
    v14.top = v6[27] - v7;
    v14.bottom = v6[29] - v7;
    if ( v5 == (unsigned int)GreGetNearestColor(a2, v5) )
    {
      GreSetBkColor(a2, v5);
      v9 = 2;
    }
    else
    {
      FillRect(a2, &v14, *(HBRUSH *)(gpsi + 4888LL));
      GreSetBkMode(a2, 1);
      v9 = 4;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(*((_QWORD *)a1 + 6) + 2 * v11) );
    if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
      xxxClientExtTextOutW(a2, 2, 1, v9, &v14, SourceString, v12);
    else
      GreExtTextOutWInternal(a2, 2, 1, v9, &v14, SourceString, v12, 0LL, 0LL, 0);
  }
}
