/*
 * XREFs of XmBsfOp @ 0x140531DF0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

_WORD *__fastcall XmBsfOp(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r8d
  int v3; // eax

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 108);
  v3 = *(_DWORD *)(a1 + 16) | 0x40;
  *(_DWORD *)(a1 + 16) = v3;
  if ( v2 )
  {
    while ( (v2 & 1) == 0 )
    {
      ++v1;
      v2 >>= 1;
      if ( !v2 )
        return XmStoreResult(a1, v1);
    }
    *(_DWORD *)(a1 + 16) = v3 & 0xFFFFFFBF;
  }
  return XmStoreResult(a1, v1);
}
