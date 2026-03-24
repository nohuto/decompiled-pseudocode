/*
 * XREFs of ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x180269264
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800B9780 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x1800B9FB4 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1800BA118 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C4488 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$IsTranslateAndScale@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180210BA0 (--$IsTranslateAndScale@$0A@@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(CPrimitiveGroupDrawListGenerator *this)
{
  __int64 v1; // rdx
  __int64 v2; // r11
  _DWORD *v4; // rcx
  int v5; // r11d
  _BYTE v7[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v8; // [rsp+28h] [rbp-70h]
  _BYTE v9[88]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = 0LL;
  if ( !*(_DWORD *)(v1 + 8) )
    return 1;
LABEL_2:
  v4 = (_DWORD *)(*(_QWORD *)v1 + 144 * v2);
  if ( (v4[1] & 0xFFFFFFCC) == 0 && *v4 <= 1u && v4[11] <= 1u )
  {
    CPrimitiveGroupDrawListGenerator::GetIteratorForState((__int64)this, (__int64)v7, v2);
    while ( 1 )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)v9, (const struct D2D_MATRIX_3X2_F *)(v8 + 16));
      if ( !CMILMatrix::IsTranslateAndScale<0>((__int64)v9) )
        break;
      if ( !CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v7) )
      {
        v1 = *((_QWORD *)this + 2);
        v2 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v2 < *(_DWORD *)(v1 + 8) )
          goto LABEL_2;
        return 1;
      }
    }
  }
  return 0;
}
