/*
 * XREFs of sub_18006DFE8 @ 0x18006DFE8
 * Callers:
 *     sub_180006524 @ 0x180006524 (sub_180006524.c)
 *     sub_18002E880 @ 0x18002E880 (sub_18002E880.c)
 *     sub_18004CDA0 @ 0x18004CDA0 (sub_18004CDA0.c)
 *     sub_18006DF10 @ 0x18006DF10 (sub_18006DF10.c)
 * Callees:
 *     sub_18006D9CC @ 0x18006D9CC (sub_18006D9CC.c)
 */

__int64 __fastcall sub_18006DFE8(_QWORD **a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rbx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      result = sub_18006D9CC((__int64)a1, (__int64)v1);
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
