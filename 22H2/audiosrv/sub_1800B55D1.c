/*
 * XREFs of sub_1800B55D1 @ 0x1800B55D1
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B51E8 @ 0x1800B51E8 (sub_1800B51E8.c)
 */

_BOOL8 __fastcall sub_1800B55D1(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = sub_1800B51E8(*(_QWORD *)(a2 + 112));
  *(_DWORD *)(a2 + 112) = v3;
  return v3 >= 0;
}
