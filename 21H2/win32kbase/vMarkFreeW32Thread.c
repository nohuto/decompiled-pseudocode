/*
 * XREFs of vMarkFreeW32Thread @ 0x1C00B4DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vMarkFreeW32Thread(__int64 a1)
{
  *(_DWORD *)(a1 + 1256) |= 0x1000u;
}
