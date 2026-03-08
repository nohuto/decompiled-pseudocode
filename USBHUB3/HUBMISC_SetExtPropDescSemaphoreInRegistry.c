/*
 * XREFs of HUBMISC_SetExtPropDescSemaphoreInRegistry @ 0x1C00831FC
 * Callers:
 *     HUBDSM_SettingExtPropDescSemaphoreForMsOs2 @ 0x1C0024A80 (HUBDSM_SettingExtPropDescSemaphoreForMsOs2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C00867FC (HUBREG_WriteValueToDeviceHardwareKey.c)
 */

__int64 __fastcall HUBMISC_SetExtPropDescSemaphoreInRegistry(__int64 a1)
{
  int v2; // ebx
  unsigned __int16 v3; // r9
  int v4; // ecx
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 1;
  v2 = HUBREG_WriteValueToDeviceHardwareKey(a1, (unsigned int)L"(*", 4, 4, (__int64)&v7);
  if ( v2 >= 0 )
  {
    v7 = *(unsigned __int16 *)(a1 + 2000);
    v2 = HUBREG_WriteValueToDeviceHardwareKey(a1, (unsigned int)&g_RevisionId, 4, 4, (__int64)&v7);
    if ( v2 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 2464) & 0x400) != 0 )
        v4 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 2528) + 4LL);
      else
        v4 = 0;
      v7 = v4;
      v2 = HUBREG_WriteValueToDeviceHardwareKey(a1, (unsigned int)&g_VendorRevision, 4, 4, (__int64)&v7);
      if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v3 = 63;
        goto LABEL_13;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = 62;
      goto LABEL_13;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = 61;
LABEL_13:
    v6 = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v3,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      v6);
  }
  return ((v2 >> 31) & 0xFFFFFFF4) + 4077;
}
