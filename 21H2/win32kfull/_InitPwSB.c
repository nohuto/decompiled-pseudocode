/*
 * XREFs of _InitPwSB @ 0x1C006884C
 * Callers:
 *     CalcSBStuff @ 0x1C0065248 (CalcSBStuff.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     xxxSetScrollBar @ 0x1C00C64F8 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00C6AA0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxShowScrollBar @ 0x1C0142434 (xxxShowScrollBar.c)
 * Callees:
 *     DesktopAlloc @ 0x1C00C2D40 (DesktopAlloc.c)
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1C00C6C90 (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z.c)
 */

__int64 __fastcall InitPwSB(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rax

  v1 = a1 + 152;
  v2 = 0LL;
  result = *(_QWORD *)(a1 + 152);
  if ( !result )
  {
    v4 = DesktopAlloc(*(_QWORD *)(a1 + 24), 36LL, 6LL);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(v1, v4);
    if ( *(_QWORD *)v1 )
    {
      *(_DWORD *)(*(_QWORD *)v1 + 24LL) = 100;
      *(_DWORD *)(*(_QWORD *)v1 + 8LL) = 100;
      return *(_QWORD *)v1;
    }
    return v2;
  }
  return result;
}
