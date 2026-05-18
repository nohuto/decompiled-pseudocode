/*
 * XREFs of sub_1800927E8 @ 0x1800927E8
 * Callers:
 *     sub_180092744 @ 0x180092744 (sub_180092744.c)
 * Callees:
 *     sub_180092E7C @ 0x180092E7C (sub_180092E7C.c)
 *     sub_180092FB8 @ 0x180092FB8 (sub_180092FB8.c)
 *     sub_180093080 @ 0x180093080 (sub_180093080.c)
 *     sub_180093360 @ 0x180093360 (sub_180093360.c)
 *     sub_1800934D0 @ 0x1800934D0 (sub_1800934D0.c)
 *     sub_18009360C @ 0x18009360C (sub_18009360C.c)
 *     sub_180093734 @ 0x180093734 (sub_180093734.c)
 *     sub_18009397C @ 0x18009397C (sub_18009397C.c)
 *     sub_180093AA8 @ 0x180093AA8 (sub_180093AA8.c)
 */

__int64 __fastcall sub_1800927E8(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 292) = v2;
  *(_DWORD *)(a1 + 296) = v2;
  if ( (v2 & 0x100) != 0 )
    result = sub_18009360C(a1);
  if ( (v2 & 0x80u) != 0 )
    result = sub_180092E7C(a1);
  if ( (v2 & 1) != 0 )
    result = sub_18009397C(a1);
  if ( (v2 & 2) != 0 )
    result = sub_180093AA8(a1);
  if ( (v2 & 0x10000000) != 0 )
  {
    result = sub_180093080(a1);
  }
  else if ( (v2 & 0x40) != 0 )
  {
    result = sub_180092FB8(a1);
  }
  if ( (v2 & 0x10) != 0 )
    result = sub_1800934D0(a1, *(_QWORD *)(a2 + 64), 0LL);
  if ( (v2 & 0x20) != 0 )
    result = sub_180093734(a1, *(_QWORD *)(a2 + 80), 0LL);
  if ( (v2 & 0x400) != 0 )
    return sub_180093360(a1, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 96));
  return result;
}
