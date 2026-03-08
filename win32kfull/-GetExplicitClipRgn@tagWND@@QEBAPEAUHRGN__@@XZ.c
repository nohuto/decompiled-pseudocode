/*
 * XREFs of ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C002772C
 * Callers:
 *     SelectWindowRgn @ 0x1C00275FC (SelectWindowRgn.c)
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C01454BA (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     NtUserGetWindowRgnEx @ 0x1C01D57F0 (NtUserGetWindowRgnEx.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0223AF4 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     <none>
 */

HRGN __fastcall tagWND::GetExplicitClipRgn(tagWND *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v1 + 21) & 8) != 0 )
    return 0LL;
  else
    return *(HRGN *)(v1 + 168);
}
