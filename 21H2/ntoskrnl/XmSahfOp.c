/*
 * XREFs of XmSahfOp @ 0x140365630
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmSahfOp(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a1 + 25);
  result = *(_DWORD *)(a1 + 16) & 0xFFFFFFD5 | 2;
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
