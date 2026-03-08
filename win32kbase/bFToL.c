/*
 * XREFs of bFToL @ 0x1C0002B7C
 * Callers:
 *     bCvtPts1 @ 0x1C0006D84 (bCvtPts1.c)
 *     efSin @ 0x1C000BE30 (efSin.c)
 *     vConvertXformToMatrix @ 0x1C000DEE0 (vConvertXformToMatrix.c)
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C000DFF0 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C000E0A0 (-bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0059210 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C017F9D4 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C01845D8 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x1C01846B0 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C018C3EC (-vMakeIso@DC@@QEAAXXZ.c)
 *     bCvtPts @ 0x1C0274DEC (bCvtPts.c)
 *     bCvtVts @ 0x1C0274FAC (bCvtVts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bFToL(float a1, int *a2, unsigned int a3)
{
  signed int v4; // r9d
  unsigned int v5; // r10d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // ecx

  v4 = (unsigned __int8)(SLODWORD(a1) >> 23) + ((a3 >> 1) & 4 | 0xFFFFFF8A);
  v5 = 1;
  if ( v4 > 40 )
  {
    return 0;
  }
  else
  {
    v6 = LODWORD(a1) & 0x7FFFFF | 0x800000LL;
    if ( v4 < 0 )
      v7 = v6 >> -(char)v4;
    else
      v7 = v6 << v4;
    v8 = v7 + 0x80000000LL;
    if ( (a3 & 1) != 0 )
      v8 = v7;
    v9 = v8 >> 32;
    v10 = -(int)v9;
    if ( a1 >= 0.0 )
      v10 = v9;
    *a2 = v10;
  }
  return v5;
}
