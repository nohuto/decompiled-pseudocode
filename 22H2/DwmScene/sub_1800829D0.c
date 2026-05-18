/*
 * XREFs of sub_1800829D0 @ 0x1800829D0
 * Callers:
 *     sub_180082A40 @ 0x180082A40 (sub_180082A40.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180082EC0 (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_1800BF6A4 @ 0x1800BF6A4 (sub_1800BF6A4.c)
 *     sub_1800C2CAC @ 0x1800C2CAC (sub_1800C2CAC.c)
 * Callees:
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 */

unsigned __int64 __fastcall sub_1800829D0(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  sub_180083A6C(a1);
  *(_DWORD *)(a1 + 156) = *a2;
  *(_DWORD *)(a1 + 160) = a2[1];
  *(_DWORD *)(a1 + 164) = a2[2];
  *(_DWORD *)(a1 + 168) = a2[3];
  v4 = _InterlockedIncrement64(&qword_180208640);
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 >= result )
    result = v4;
  *(_QWORD *)(a1 + 216) = result;
  return result;
}
