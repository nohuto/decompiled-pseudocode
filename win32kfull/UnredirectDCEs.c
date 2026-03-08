/*
 * XREFs of UnredirectDCEs @ 0x1C002C2E4
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C0022ADC (UnsetRedirectedWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00331B0 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C002C3AC (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     GetStyleWindow @ 0x1C0039020 (GetStyleWindow.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0096D00 (ChangeRedirectionParentInDCEs.c)
 *     UpdateRedirectedDCE @ 0x1C0096EF0 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall UnredirectDCEs(struct tagWND *a1)
{
  const struct tagDCE *i; // rbx
  __int16 v3; // r11

  if ( GetStyleWindow(a1, 2848LL) )
    return ChangeRedirectionParentInDCEs(a1);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(const struct tagDCE **)(gpDispInfo + 24LL); i; i = *(const struct tagDCE **)i )
  {
    if ( (*((_DWORD *)i + 16) & 0x4400800) == 0
      && *((_QWORD *)i + 2)
      && (unsigned int)WindowMatchesDCE(a1, i)
      && (v3 & 0x1002) != 2 )
    {
      UpdateRedirectedDCE(i, 0LL);
    }
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
