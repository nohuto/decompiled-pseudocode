/*
 * XREFs of ?_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@@CA_NPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C006AD64
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C03BB5D4 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  int v1; // edx

  v1 = *((_DWORD *)a1 + 33);
  if ( (unsigned int)(v1 - 5) <= 0xB )
    v1 = (v1 - 1) % 4 + 1;
  if ( (*(_DWORD *)a1 & 0x200LL) == 0 )
    return 0;
  if ( v1 == 2 )
    return 1;
  return v1 == 4;
}
