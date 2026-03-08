/*
 * XREFs of ??$_GetRotationFromDevMode@U_devicemodeW@@@CDS_JOURNAL@@CAJAEBU_devicemodeW@@PEAW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C006ACE0
 * Callers:
 *     ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BB998 (-_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDS_JOURNAL::_GetRotationFromDevMode<_devicemodeW>(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  unsigned int v5; // edx

  v2 = *(unsigned int *)(a1 + 72);
  if ( (v2 & 0x80u) == 0LL )
  {
    *a2 = 1;
    return 3221225485LL;
  }
  v5 = *(_DWORD *)(a1 + 84);
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
