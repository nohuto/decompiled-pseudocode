/*
 * XREFs of GetRedirectionFlags @ 0x1C0096CD0
 * Callers:
 *     _GetLayeredWindowAttributes @ 0x1C000F978 (_GetLayeredWindowAttributes.c)
 *     _SetLayeredWindowAttributes @ 0x1C002BBFC (_SetLayeredWindowAttributes.c)
 *     RecreateRedirectionBitmap @ 0x1C0096A48 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01BDB10 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     xxxPrintWindow @ 0x1C01BE184 (xxxPrintWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BE8C0 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 */

__int64 __fastcall GetRedirectionFlags(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 Prop; // rax

  v1 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1u);
  if ( Prop )
    return *(unsigned int *)(Prop + 32);
  return v1;
}
