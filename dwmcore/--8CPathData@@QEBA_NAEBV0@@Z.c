/*
 * XREFs of ??8CPathData@@QEBA_NAEBV0@@Z @ 0x18012DEDA
 * Callers:
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x1800555A0 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1800AB908 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1801177DC (memcmp_0.c)
 */

bool __fastcall CPathData::operator==(__int64 a1, __int64 a2)
{
  char v2; // bl
  size_t v3; // r8

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  if ( v3 == *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16) )
    return memcmp_0(*(const void **)(a1 + 16), *(const void **)(a2 + 16), v3) == 0;
  return v2;
}
