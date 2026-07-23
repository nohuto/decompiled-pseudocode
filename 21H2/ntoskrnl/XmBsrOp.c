/*
 * XREFs of XmBsrOp @ 0x1404E6C60
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140396F10 (XmStoreResult.c)
 */

_WORD *__fastcall XmBsrOp(_DWORD *a1)
{
  int v1; // eax
  int v3; // ecx
  unsigned int v4; // r9d

  v1 = a1[30];
  a1[4] |= 0x40u;
  v3 = 8 * v1 + 7;
  v4 = a1[27];
  if ( v4 )
  {
    while ( ((v4 >> v3) & 1) == 0 )
      --v3;
    a1[4] &= ~0x40u;
  }
  return XmStoreResult((__int64)a1, v3);
}
