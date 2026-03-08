/*
 * XREFs of ??$_GetRotationFromDevMode@U_unnamed_type_Mode_@_ENTRY@CDS_JOURNAL@@@CDS_JOURNAL@@CAJAEBU_unnamed_type_Mode_@_ENTRY@0@PEAW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C006AC5C
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C03BB5D4 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDS_JOURNAL::_GetRotationFromDevMode<CDS_JOURNAL::_ENTRY::_unnamed_type_Mode_>(
        unsigned int *a1,
        _DWORD *a2)
{
  __int64 v2; // r8
  unsigned int v5; // edx

  v2 = *a1;
  if ( (v2 & 0x80u) == 0LL )
  {
    *a2 = 1;
    return 3221225485LL;
  }
  v5 = a1[3];
  if ( v5 )
  {
    switch ( v5 )
    {
      case 1u:
        *a2 = 2;
        break;
      case 2u:
        *a2 = 3;
        break;
      case 3u:
        *a2 = 4;
        break;
      default:
        WdLogSingleEntry3(3LL, a1, v2, v5);
        *a2 = 1;
        return 3221225485LL;
    }
  }
  else
  {
    *a2 = 1;
  }
  return 0LL;
}
