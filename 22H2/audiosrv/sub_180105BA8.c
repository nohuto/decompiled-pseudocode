/*
 * XREFs of sub_180105BA8 @ 0x180105BA8
 * Callers:
 *     sub_180108AAC @ 0x180108AAC (sub_180108AAC.c)
 *     sub_18010A534 @ 0x18010A534 (sub_18010A534.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 */

_QWORD *__fastcall sub_180105BA8(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  std::_Ref_count_base *v4; // rcx

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  *a1 = *a2;
  v4 = (std::_Ref_count_base *)a1[1];
  a1[1] = v2;
  if ( v4 )
    sub_180052600(v4);
  return a1;
}
