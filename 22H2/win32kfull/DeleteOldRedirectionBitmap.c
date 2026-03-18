/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C00C87AC
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C00C881C (UnsetRedirectedWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01BCEF0 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     SetOldRedirectionBitmap @ 0x1C001406C (SetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C825C (DeleteOrSetRedirectionBitmap.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 Prop; // rax
  HSURF v4; // rdi

  v1 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
  {
    v4 = *(HSURF *)(Prop + 8);
    if ( v4 )
    {
      SetOldRedirectionBitmap(a1, 0LL);
      DeleteOrSetRedirectionBitmap(a1, v4, 1);
      return 1;
    }
  }
  return v1;
}
