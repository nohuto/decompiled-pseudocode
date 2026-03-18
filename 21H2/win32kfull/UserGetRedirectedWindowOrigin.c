/*
 * XREFs of UserGetRedirectedWindowOrigin @ 0x1C0020420
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     GreGetRandomRgn @ 0x1C014B3A0 (GreGetRandomRgn.c)
 *     GetDCOrgOnScreen @ 0x1C014C0D4 (GetDCOrgOnScreen.c)
 *     ?GreGetRandomRgn_Unpatched@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x1C015F058 (-GreGetRandomRgn_Unpatched@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C02745B0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 */

__int64 __fastcall UserGetRedirectedWindowOrigin(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 StyleWindow; // rax

  v4 = 0;
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v5 = LookupDC(a1, 1LL);
  if ( v5 && (*(_DWORD *)(v5 + 64) & 0x4000) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(*(_QWORD *)(v5 + 16)) )
    {
      *(_QWORD *)a2 = 0LL;
      goto LABEL_6;
    }
    StyleWindow = GetStyleWindow(v6, 2848LL);
    if ( StyleWindow )
    {
      *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 88LL);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 92LL);
LABEL_6:
      v4 = 1;
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v4;
}
