/*
 * XREFs of sub_180095BB4 @ 0x180095BB4
 * Callers:
 *     sub_1800E63B0 @ 0x1800E63B0 (sub_1800E63B0.c)
 *     sub_1800EA2F0 @ 0x1800EA2F0 (sub_1800EA2F0.c)
 *     sub_18010AEC0 @ 0x18010AEC0 (sub_18010AEC0.c)
 *     sub_18010AF30 @ 0x18010AF30 (sub_18010AF30.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180095BB4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 96);
  }
  *a2 = *(_QWORD *)(a1 + 88);
  result = a2;
  a2[1] = v2;
  return result;
}
