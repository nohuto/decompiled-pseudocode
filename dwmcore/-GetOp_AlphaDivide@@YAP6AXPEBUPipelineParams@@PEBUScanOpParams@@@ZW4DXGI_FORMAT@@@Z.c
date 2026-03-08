/*
 * XREFs of ?GetOp_AlphaDivide@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x1802B9A28
 * Callers:
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1802B94C0 (-Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 * Callees:
 *     <none>
 */

void (__fastcall *__fastcall GetOp_AlphaDivide(
        enum DXGI_FORMAT a1))(const struct PipelineParams *, const struct ScanOpParams *)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = a1 - 2;
  if ( !v1 )
    return AlphaDivide_128bppPABGR;
  v2 = v1 - 8;
  if ( !v2 )
    return AlphaDivide_64bppABGRFloat;
  v3 = v2 - 1;
  if ( !v3 )
    return AlphaDivide_64bppPARGB;
  v4 = v3 - 17;
  if ( !v4 || v4 == 59 )
    return AlphaDivide_32bppPARGB;
  else
    return 0LL;
}
