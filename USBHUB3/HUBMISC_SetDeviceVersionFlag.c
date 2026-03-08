/*
 * XREFs of HUBMISC_SetDeviceVersionFlag @ 0x1C00305F8
 * Callers:
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C0020DF0 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBDSM_SettingVersionFlagInEnumerating @ 0x1C0021470 (HUBDSM_SettingVersionFlagInEnumerating.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 */

__int16 __fastcall HUBMISC_SetDeviceVersionFlag(__int64 a1)
{
  int v2; // ecx
  _UNKNOWN **v3; // rax
  int v4; // eax

  *(_BYTE *)(a1 + 1456) = 0;
  v2 = *(unsigned __int16 *)(a1 + 1990);
  LOWORD(v3) = 256;
  if ( (_WORD)v2 != 256 )
  {
    LOWORD(v3) = v2 - 257;
    if ( (unsigned __int16)(v2 - 257) > 0xFEu )
    {
      LOWORD(v3) = 512;
      if ( (_WORD)v2 == 512 )
      {
        *(_DWORD *)(a1 + 1456) |= 4u;
        return (__int16)v3;
      }
      if ( (unsigned __int16)v2 > 0x200u )
      {
        LOWORD(v3) = 768;
        if ( (unsigned __int16)v2 >= 0x300u )
        {
          v4 = *(_DWORD *)(a1 + 1456);
          if ( (v4 & 0x20000) != 0 )
          {
            LODWORD(v3) = v4 | 0x10;
            *(_DWORD *)(a1 + 1456) = (_DWORD)v3;
            return (__int16)v3;
          }
          v3 = &WPP_RECORDER_INITIALIZED;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            LOWORD(v3) = WPP_RECORDER_SF_d(
                           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                           2u,
                           5u,
                           0x27u,
                           (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
                           v2);
        }
        *(_DWORD *)(a1 + 1456) |= 8u;
        return (__int16)v3;
      }
      v3 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        LOWORD(v3) = WPP_RECORDER_SF_d(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                       2u,
                       5u,
                       0x28u,
                       (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
                       v2);
    }
    *(_DWORD *)(a1 + 1456) |= 2u;
    return (__int16)v3;
  }
  *(_DWORD *)(a1 + 1456) |= 1u;
  return (__int16)v3;
}
