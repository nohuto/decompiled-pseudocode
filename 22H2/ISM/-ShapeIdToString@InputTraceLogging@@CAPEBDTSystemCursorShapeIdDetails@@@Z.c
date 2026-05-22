/*
 * XREFs of ?ShapeIdToString@InputTraceLogging@@CAPEBDTSystemCursorShapeIdDetails@@@Z @ 0x180140A50
 * Callers:
 *     ?AddShapeToCursor@Cursor@InputTraceLogging@@SAXPEBX_K@Z @ 0x18013ECC8 (-AddShapeToCursor@Cursor@InputTraceLogging@@SAXPEBX_K@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAX_K_N@Z @ 0x1801406A4 (-SetCursorImage@Cursor@InputTraceLogging@@SAX_K_N@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::ShapeIdToString(__int64 a1)
{
  unsigned __int64 v2; // rax

  if ( HIBYTE(a1) == 1 )
    return "Custom";
  v2 = (unsigned __int16)a1 - 32512LL;
  if ( v2 >= 0x13 )
    return "ERROR BAD INDEX";
  else
    return `InputTraceLogging::ShapeIdToString'::`2'::typenames[v2];
}
