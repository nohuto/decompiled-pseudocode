/*
 * XREFs of HUBMISC_InstallMsOs20RegistryProperties @ 0x1C0032C14
 * Callers:
 *     HUBDSM_InstallingMsOs20RegistryValues @ 0x1C0024A60 (HUBDSM_InstallingMsOs20RegistryValues.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBDESC_GetNextMsOs20Descriptor @ 0x1C003D6A0 (HUBDESC_GetNextMsOs20Descriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C00867FC (HUBREG_WriteValueToDeviceHardwareKey.c)
 */

__int64 __fastcall HUBMISC_InstallMsOs20RegistryProperties(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  struct _DEVICE_OBJECT *v8; // rax
  NTSTATUS v9; // eax
  ULONG Sizea; // [rsp+28h] [rbp-50h]
  __int64 Size; // [rsp+28h] [rbp-50h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF

  v2 = 4077;
  v14 = *(_QWORD *)(a1 + 2488);
  v3 = v14 + *(unsigned __int16 *)(v14 + 8);
  while ( 1 )
  {
    if ( !(unsigned __int8)HUBDESC_GetNextMsOs20Descriptor(v3, &v14) )
    {
      v2 = 4065;
      goto LABEL_9;
    }
    v4 = v14;
    if ( !v14 )
      goto LABEL_9;
    if ( *(_WORD *)(v14 + 2) == 4 )
    {
      DestinationString = 0LL;
      v5 = *(unsigned __int16 *)(v14 + 6);
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v14 + 8));
      v6 = HUBREG_WriteValueToDeviceHardwareKey(
             a1,
             (unsigned int)&DestinationString,
             *(unsigned __int16 *)(v4 + 4),
             *(unsigned __int16 *)(v5 + v4 + 8),
             v5 + v4 + 10);
      if ( v6 < 0 )
        break;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Sizea = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x52u,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      Sizea);
  }
LABEL_9:
  if ( (*(_DWORD *)(a1 + 2464) & 0x100) != 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 16));
    v8 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                    WdfDriverGlobals,
                                    v7);
    v9 = IoSetDevicePropertyData(v8, &DEVPKEY_Device_ModelId, 0, 0, 0xDu, 0x10u, (PVOID)(*(_QWORD *)(a1 + 2512) + 4LL));
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(Size) = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x53u,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
        Size);
    }
  }
  return v2;
}
