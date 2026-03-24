/*
 * XREFs of MagpRevokeInputTransfrom @ 0x1C00EB300
 * Callers:
 *     MagpDecomposeDesktop @ 0x1C00EB284 (MagpDecomposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01CCC94 (MagSetLensContextInformation.c)
 * Callees:
 *     _SetMagnificationInputTransform @ 0x1C00EB340 (_SetMagnificationInputTransform.c)
 */

__int64 MagpRevokeInputTransfrom()
{
  __int64 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+28h] [rbp-30h]
  __int64 v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  v3 = 0LL;
  v2 = 0LL;
  v4 = 3;
  return (unsigned int)SetMagnificationInputTransform(&v1) == 0 ? 0xC0000001 : 0;
}
