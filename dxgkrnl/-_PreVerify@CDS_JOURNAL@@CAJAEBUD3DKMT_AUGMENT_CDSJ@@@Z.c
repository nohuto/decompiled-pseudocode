/*
 * XREFs of ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BB998
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BA164 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ??$_GetPixelFormatFromDevMode@U_devicemodeW@@@CDS_JOURNAL@@CAJAEBU_devicemodeW@@PEAW4_D3DDDIFORMAT@@@Z @ 0x1C006ABD8 (--$_GetPixelFormatFromDevMode@U_devicemodeW@@@CDS_JOURNAL@@CAJAEBU_devicemodeW@@PEAW4_D3DDDIFORM.c)
 *     ??$_GetRotationFromDevMode@U_devicemodeW@@@CDS_JOURNAL@@CAJAEBU_devicemodeW@@PEAW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C006ACE0 (--$_GetRotationFromDevMode@U_devicemodeW@@@CDS_JOURNAL@@CAJAEBU_devicemodeW@@PEAW4_D3DKMDT_VIDPN.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C02FC820 (ConvertGdiScalingToDMMScaling.c)
 */

__int64 __fastcall CDS_JOURNAL::_PreVerify(const struct D3DKMT_AUGMENT_CDSJ *a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*(_DWORD *)a1 & 2) != 0 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 4);
  if ( (*(_DWORD *)(v4 + 72) & 0x80u) == 0
    || (v7 = 0, result = CDS_JOURNAL::_GetRotationFromDevMode<_devicemodeW>(v4, &v7), v1 = result, (int)result >= 0) )
  {
    v5 = *((_QWORD *)a1 + 4);
    if ( (*(_DWORD *)(v5 + 72) & 0x20000000) != 0 )
    {
      if ( !(unsigned int)ConvertGdiScalingToDMMScaling(*(_DWORD *)(v5 + 88), &v7) )
        return 3221225485LL;
      v1 = 0;
    }
    v6 = *((_QWORD *)a1 + 4);
    if ( (*(_DWORD *)(v6 + 72) & 0x40000) == 0 )
      return v1;
    v7 = 0;
    result = CDS_JOURNAL::_GetPixelFormatFromDevMode<_devicemodeW>(v6, &v7);
    v1 = result;
    if ( (int)result >= 0 )
      return v1;
  }
  return result;
}
