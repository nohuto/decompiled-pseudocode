/*
 * XREFs of XmShortJump @ 0x1403BB530
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmGetCodeByte @ 0x1403B40F4 (XmGetCodeByte.c)
 */

__int64 __fastcall XmShortJump(__int64 a1)
{
  *(_DWORD *)(a1 + 104) = (unsigned __int16)(*(_WORD *)(a1 + 20) + XmGetCodeByte(a1));
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 112) & 0xF;
  return 1LL;
}
