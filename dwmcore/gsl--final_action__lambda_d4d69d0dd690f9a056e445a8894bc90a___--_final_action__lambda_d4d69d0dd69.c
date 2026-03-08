/*
 * XREFs of gsl::final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___::_final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___ @ 0x180275AE0
 * Callers:
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180275E0C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x180284470 (-PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 */

__int64 __fastcall gsl::final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___::_final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___(
        CD3DDevice **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
    result = CD2DContext::PopTarget((CD3DDevice *)((char *)*a1 + 16), 0LL, 0LL);
  if ( *a1 )
    return CD3DDevice::Release(*a1);
  return result;
}
