/*
 * XREFs of ??$_GetPixelFormatFromDevMode@U_unnamed_type_Mode_@_ENTRY@CDS_JOURNAL@@@CDS_JOURNAL@@CAJAEBU_unnamed_type_Mode_@_ENTRY@0@PEAW4_D3DDDIFORMAT@@@Z @ 0x1C006AB58
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C03BB5D4 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDS_JOURNAL::_GetPixelFormatFromDevMode<CDS_JOURNAL::_ENTRY::_unnamed_type_Mode_>(
        unsigned int *a1,
        _DWORD *a2)
{
  unsigned int v4; // eax

  if ( (*a1 & 0x40000) == 0 )
  {
    *a2 = 0;
    return 3221225485LL;
  }
  v4 = a1[5];
  switch ( v4 )
  {
    case 8u:
      *a2 = 41;
      break;
    case 0x10u:
      *a2 = 23;
      break;
    case 0x18u:
      *a2 = 20;
      break;
    case 0x20u:
      *a2 = 0;
      break;
    default:
      WdLogSingleEntry3(3LL, a1, *a1, v4);
      *a2 = 21;
      return 3221225485LL;
  }
  return 0LL;
}
