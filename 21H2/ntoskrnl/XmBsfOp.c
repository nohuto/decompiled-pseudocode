/*
 * XREFs of XmBsfOp @ 0x1404E6C20
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140396F10 (XmStoreResult.c)
 */

_WORD *__fastcall XmBsfOp(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // eax

  *(_DWORD *)(a1 + 16) |= 0x40u;
  v1 = 0;
  v2 = *(_DWORD *)(a1 + 108);
  if ( v2 )
  {
    while ( (v2 & 1) == 0 )
    {
      ++v1;
      v2 >>= 1;
      if ( !v2 )
        return XmStoreResult(a1, v1);
    }
    *(_DWORD *)(a1 + 16) &= ~0x40u;
  }
  return XmStoreResult(a1, v1);
}
