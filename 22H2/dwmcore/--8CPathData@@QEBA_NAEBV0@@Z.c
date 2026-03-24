/*
 * XREFs of ??8CPathData@@QEBA_NAEBV0@@Z @ 0x1801B145C
 * Callers:
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180074D00 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801E2984 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800F3FFF (memcmp_0.c)
 */

bool __fastcall CPathData::operator==(__int64 a1, __int64 a2)
{
  char v2; // bl
  size_t v3; // r8

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24);
  if ( v3 == *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24) )
    return memcmp_0(*(const void **)(a1 + 24), *(const void **)(a2 + 24), v3) == 0;
  return v2;
}
