/*
 * XREFs of ?GetNearestInterchangeFormat@@YA?AW4DXGI_FORMAT@@W41@@Z @ 0x1802B99EC
 * Callers:
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1802B94C0 (-Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNearestInterchangeFormat(enum DXGI_FORMAT a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  result = 2LL;
  v2 = a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 8;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 || v4 == 13 )
        return 11LL;
      else
        return 87LL;
    }
  }
  return result;
}
