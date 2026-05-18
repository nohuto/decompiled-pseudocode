/*
 * XREFs of sub_1800ED414 @ 0x1800ED414
 * Callers:
 *     sub_1800EFB68 @ 0x1800EFB68 (sub_1800EFB68.c)
 *     sub_1800EFCBC @ 0x1800EFCBC (sub_1800EFCBC.c)
 *     sub_1800F0144 @ 0x1800F0144 (sub_1800F0144.c)
 *     sub_1800F03B0 @ 0x1800F03B0 (sub_1800F03B0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800ED414(__int64 a1, unsigned __int16 a2)
{
  return *(_WORD *)(a1 + 2LL * a2 + 128) != 0xFFFF;
}
