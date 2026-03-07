void (__fastcall *__fastcall GetOp_AlphaMultiply(
        enum DXGI_FORMAT a1))(const struct PipelineParams *, const struct ScanOpParams *)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = a1 - 2;
  if ( !v1 )
    return AlphaMultiply_128bppABGR;
  v2 = v1 - 8;
  if ( !v2 )
    return AlphaMultiply_64bppABGRFloat;
  v3 = v2 - 1;
  if ( !v3 )
    return AlphaMultiply_64bppARGB;
  v4 = v3 - 17;
  if ( !v4 || v4 == 59 )
    return AlphaMultiply_32bppARGB;
  else
    return 0LL;
}
