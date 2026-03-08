/*
 * XREFs of _InitPwSB @ 0x1C00DA0E8
 * Callers:
 *     xxxSetScrollBar @ 0x1C00A60D8 (xxxSetScrollBar.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D4D10 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     CalcSBStuff @ 0x1C00D9FC8 (CalcSBStuff.c)
 *     xxxShowScrollBar @ 0x1C0234CF4 (xxxShowScrollBar.c)
 * Callees:
 *     DesktopAlloc @ 0x1C00A09E0 (DesktopAlloc.c)
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1C00DA2A8 (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z.c)
 */

__int64 __fastcall InitPwSB(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  PVOID v3; // rax

  v1 = a1 + 152;
  result = *(_QWORD *)(a1 + 152);
  if ( !result )
  {
    v3 = DesktopAlloc(*(_QWORD *)(a1 + 24), 0x24u);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(v1, v3);
    if ( *(_QWORD *)v1 )
    {
      *(_DWORD *)(*(_QWORD *)v1 + 24LL) = 100;
      *(_DWORD *)(*(_QWORD *)v1 + 8LL) = 100;
    }
    return *(_QWORD *)v1;
  }
  return result;
}
