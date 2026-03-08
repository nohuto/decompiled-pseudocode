/*
 * XREFs of vMarkFreeW32Process @ 0x1C00C8F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vMarkFreeW32Process(__int64 a1)
{
  *(_DWORD *)(a1 + 812) |= 0x1000u;
}
