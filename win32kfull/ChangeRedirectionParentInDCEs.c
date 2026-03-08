/*
 * XREFs of ChangeRedirectionParentInDCEs @ 0x1C0096D00
 * Callers:
 *     UnredirectDCEs @ 0x1C002C2E4 (UnredirectDCEs.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     RecreateRedirectionBitmap @ 0x1C0096A48 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01BDB10 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C002C3AC (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C0096EF0 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall ChangeRedirectionParentInDCEs(struct tagWND *a1, unsigned int a2)
{
  __int64 *i; // rbx
  int v5; // ecx

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
  {
    v5 = *((_DWORD *)i + 16);
    if ( (v5 & 0x4404800) == 0x4000
      && i[2]
      && (v5 & 0x1000) != 0
      && (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)i) )
    {
      UpdateRedirectedDCE(i, a2);
    }
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
