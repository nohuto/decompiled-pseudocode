/*
 * XREFs of sub_1800B4834 @ 0x1800B4834
 * Callers:
 *     sub_180033E20 @ 0x180033E20 (sub_180033E20.c)
 *     sub_180034268 @ 0x180034268 (sub_180034268.c)
 *     sub_1800B78D0 @ 0x1800B78D0 (sub_1800B78D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B4834(__int64 a1)
{
  *(_BYTE *)a1 = 0;
  *(_DWORD *)(a1 + 4) = GetLastError();
  return a1;
}
