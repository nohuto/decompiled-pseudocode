/*
 * XREFs of GetRedirectionFlags @ 0x1C008EC3C
 * Callers:
 *     _GetLayeredWindowAttributes @ 0x1C0010328 (_GetLayeredWindowAttributes.c)
 *     RecreateRedirectionBitmap @ 0x1C008E968 (RecreateRedirectionBitmap.c)
 *     _SetLayeredWindowAttributes @ 0x1C00D5980 (_SetLayeredWindowAttributes.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01BC970 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     xxxPrintWindow @ 0x1C01BCFE4 (xxxPrintWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BD720 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

__int64 __fastcall GetRedirectionFlags(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 Prop; // rax

  v1 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
    return *(unsigned int *)(Prop + 32);
  return v1;
}
