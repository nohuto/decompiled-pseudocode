void (__fastcall *__fastcall GetOp_IgnoreAlpha(
        enum DXGI_FORMAT a1))(const struct PipelineParams *, const struct ScanOpParams *)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v1 = a1 - 2;
  if ( !v1 )
    return IgnoreAlpha_128bppABGR;
  v2 = v1 - 8;
  if ( !v2 )
    return IgnoreAlpha_64bppABGRFloat;
  v3 = v2 - 1;
  if ( !v3 )
    return IgnoreAlpha_64bppARGB;
  v4 = v3 - 13;
  if ( !v4 )
    return IgnoreAlpha_32bppABGR2101010;
  v5 = v4 - 4;
  if ( !v5 || v5 == 59 )
    return IgnoreAlpha_32bppARGB;
  else
    return 0LL;
}
