/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C002E738
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C0022ADC (UnsetRedirectedWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0068A60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01BE090 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     SetOldRedirectionBitmap @ 0x1C001331C (SetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C0021D34 (DeleteOrSetRedirectionBitmap.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 Prop; // rax
  __int64 v4; // rdi

  v1 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
  {
    v4 = *(_QWORD *)(Prop + 8);
    if ( v4 )
    {
      SetOldRedirectionBitmap(a1, 0LL);
      DeleteOrSetRedirectionBitmap(a1, v4, 1);
      return 1;
    }
  }
  return v1;
}
