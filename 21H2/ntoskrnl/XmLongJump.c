/*
 * XREFs of XmLongJump @ 0x140397550
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmGetWordImmediate @ 0x140397590 (XmGetWordImmediate.c)
 *     XmGetLongImmediate @ 0x1403C5304 (XmGetLongImmediate.c)
 */

__int64 __fastcall XmLongJump(__int64 a1)
{
  int v2; // ecx

  if ( *(_BYTE *)(a1 + 138) )
    v2 = XmGetLongImmediate(a1) + *(_DWORD *)(a1 + 20);
  else
    v2 = (unsigned __int16)(*(_WORD *)(a1 + 20) + XmGetWordImmediate(a1));
  *(_DWORD *)(a1 + 104) = v2;
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 112) & 0xF;
  return 1LL;
}
