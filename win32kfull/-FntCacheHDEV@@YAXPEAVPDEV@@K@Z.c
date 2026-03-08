/*
 * XREFs of ?FntCacheHDEV@@YAXPEAVPDEV@@K@Z @ 0x1C00E7578
 * Callers:
 *     bEnableFontDriver @ 0x1C00E7360 (bEnableFontDriver.c)
 *     FontDriverQueryRoutine @ 0x1C03B8780 (FontDriverQueryRoutine.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall FntCacheHDEV(struct PDEV *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  v6 = *((_QWORD *)Gre::Base::Globals(a1) + 8);
  GreAcquireSemaphore(v6);
  v5 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
  if ( (*(_DWORD *)(v5 + 19384) & 3) != 0 && *(_QWORD *)(v5 + 19392) && (_DWORD)v2 )
    *(_QWORD *)(v5 + 8 * v2 + 19416) = a1;
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
}
