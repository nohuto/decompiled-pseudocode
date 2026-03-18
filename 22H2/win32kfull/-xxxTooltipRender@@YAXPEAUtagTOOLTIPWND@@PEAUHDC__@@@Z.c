/*
 * XREFs of ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0225E60
 * Callers:
 *     xxxTooltipWndProc @ 0x1C001FBD0 (xxxTooltipWndProc.c)
 * Callees:
 *     GreSetBkColor @ 0x1C0027760 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0027D58 (GreSetTextColor.c)
 *     FillRect @ 0x1C0028BEC (FillRect.c)
 *     GetDPIMETRICSForDpi @ 0x1C0041198 (GetDPIMETRICSForDpi.c)
 *     GreExtTextOutW @ 0x1C00A1DB0 (GreExtTextOutW.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreSetBkMode @ 0x1C0115C14 (GreSetBkMode.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     xxxClientExtTextOutW @ 0x1C021212C (xxxClientExtTextOutW.c)
 *     CALL_LPK @ 0x1C0225FD4 (CALL_LPK.c)
 */

void __fastcall xxxTooltipRender(const WCHAR **a1, Gre::Base *a2)
{
  __int64 DPIMETRICSForDpi; // rax
  unsigned int v5; // edi
  _DWORD *v6; // r9
  int v7; // r8d
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  struct tagTHREADINFO *v14; // rax
  int v15; // eax
  const WCHAR *SourceString; // r10
  __int64 v17; // rcx
  RECT v18; // [rsp+40h] [rbp-38h] BYREF

  if ( a1[6] )
  {
    DPIMETRICSForDpi = GetDPIMETRICSForDpi();
    GreSelectFontInternal((__int64)a2, *(_QWORD *)(DPIMETRICSForDpi + 56), 1);
    GreSetTextColor((__int64)a2, *(_DWORD *)(gpsi + 4660LL));
    v5 = *(_DWORD *)(gpsi + 4664LL);
    v6 = (_DWORD *)*((_QWORD *)*a1 + 5);
    v7 = v6[27];
    v8 = v6[26];
    v18.left = 0;
    v18.right = v6[28] - v8;
    v18.top = v6[27] - v7;
    v18.bottom = v6[29] - v7;
    if ( v5 == (unsigned int)GreGetNearestColor(a2, v5) )
    {
      GreSetBkColor((HDC)a2, v5);
      v13 = 2;
    }
    else
    {
      FillRect((HDC)a2, &v18, *(HBRUSH *)(gpsi + 4888LL));
      GreSetBkMode((HDC)a2, 1);
      v13 = 4;
    }
    v14 = PtiCurrentShared(v10, v9, v11, v12);
    v15 = CALL_LPK(v14);
    SourceString = a1[6];
    v17 = -1LL;
    do
      ++v17;
    while ( SourceString[v17] );
    if ( v15 )
      xxxClientExtTextOutW(a2, 2, 1, v13, &v18, SourceString, v17);
    else
      GreExtTextOutW((__int64)a2, 2u, 1u, v13, (__int64)&v18, (__int64)SourceString, v17);
  }
}
