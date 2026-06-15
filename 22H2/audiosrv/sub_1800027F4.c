/*
 * XREFs of sub_1800027F4 @ 0x1800027F4
 * Callers:
 *     sub_180008D38 @ 0x180008D38 (sub_180008D38.c)
 *     sub_18002ADD8 @ 0x18002ADD8 (sub_18002ADD8.c)
 *     sub_1800D0AE0 @ 0x1800D0AE0 (sub_1800D0AE0.c)
 *     sub_1800D0BDC @ 0x1800D0BDC (sub_1800D0BDC.c)
 *     sub_1800D0C30 @ 0x1800D0C30 (sub_1800D0C30.c)
 *     sub_1800D134C @ 0x1800D134C (sub_1800D134C.c)
 *     sub_1800D15C8 @ 0x1800D15C8 (sub_1800D15C8.c)
 * Callees:
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 */

__int64 __fastcall sub_1800027F4(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = sub_18002B930();
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
