/*
 * XREFs of ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BB4C
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C002BC78 (GreCreateDIBitmapReal.c)
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     GreGetDIBColorTable @ 0x1C008A670 (GreGetDIBColorTable.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C008C6C8 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C008CE9C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiGetDCObject @ 0x1C00E1C20 (NtGdiGetDCObject.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02797A8 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02894C8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C028B85C (GrePlgBlt.c)
 *     GreSetDIBColorTable @ 0x1C02B6140 (GreSetDIBColorTable.c)
 * Callees:
 *     <none>
 */

struct SURFACE *__fastcall XDCOBJ::pSurfaceEff(XDCOBJ *this)
{
  struct SURFACE *result; // rax

  result = *(struct SURFACE **)(*(_QWORD *)this + 496LL);
  if ( !result )
    return SURFACE::pdibDefault;
  return result;
}
