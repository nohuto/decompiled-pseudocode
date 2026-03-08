/*
 * XREFs of ??$_GetPixelFormatFromDevMode@U_devicemodeW@@@CDS_JOURNAL@@CAJAEBU_devicemodeW@@PEAW4_D3DDDIFORMAT@@@Z @ 0x1C006ABD8
 * Callers:
 *     ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BB998 (-_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDS_JOURNAL::_GetPixelFormatFromDevMode<_devicemodeW>(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // eax

  if ( (*(_DWORD *)(a1 + 72) & 0x40000) == 0 )
  {
    *a2 = 0;
    return 3221225485LL;
  }
  v4 = *(_DWORD *)(a1 + 168);
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
      WdLogSingleEntry3(3LL, a1, *(unsigned int *)(a1 + 72), v4);
      *a2 = 21;
      return 3221225485LL;
  }
  return 0LL;
}
