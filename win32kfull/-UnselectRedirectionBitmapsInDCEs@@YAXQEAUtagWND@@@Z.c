/*
 * XREFs of ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01BDB84
 * Callers:
 *     UserRecreateRedirectionBitmap @ 0x1C01BE090 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C002C3AC (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     GreSelectRedirectionBitmap @ 0x1C0097150 (GreSelectRedirectionBitmap.c)
 */

void __fastcall UnselectRedirectionBitmapsInDCEs(struct tagWND *const a1)
{
  __int64 *i; // rbx
  int v3; // ecx

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
  {
    v3 = *((_DWORD *)i + 16);
    if ( (v3 & 0x4404800) == 0x4000
      && i[2]
      && (v3 & 0x1000) != 0
      && (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)i)
      && !(unsigned int)GreSelectRedirectionBitmap(i[1], 0LL) )
    {
      GreSelectVisRgn(i[1], 0LL, 1LL);
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
