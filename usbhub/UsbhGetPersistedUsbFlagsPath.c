/*
 * XREFs of UsbhGetPersistedUsbFlagsPath @ 0x1C0045160
 * Callers:
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0044E20 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegPersistedUsbDeviceFlags @ 0x1C004539C (UsbhGetRegPersistedUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C0044C1C (RtlStringCbPrintfW.c)
 */

wchar_t *__fastcall UsbhGetPersistedUsbFlagsPath(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  wchar_t *v3; // rbx
  int PersistedStateLocation; // eax
  __int64 Pool2; // rax
  int v6; // esi
  PDEVICE_OBJECT v7; // rcx
  unsigned __int16 v8; // r9
  NTSTATUS v9; // edi
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+54h] [rbp+Ch]

  v14 = HIDWORD(a1);
  v13 = 0;
  v2 = (unsigned __int16 *)PdoExt(a2);
  v3 = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"usbflags",
                             0LL,
                             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
                             0LL,
                             0LL,
                             0,
                             &v13);
  if ( PersistedStateLocation == -2147483643 )
  {
    Pool2 = ExAllocatePool2(64LL, v13 + 26, 1112885333LL);
    v3 = (wchar_t *)Pool2;
    if ( Pool2 )
    {
      v6 = RtlGetPersistedStateLocation(
             L"usbflags",
             0LL,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
             0LL,
             Pool2,
             v13,
             0LL);
      if ( v6 >= 0 )
      {
        LODWORD(v12) = v2[706];
        LODWORD(v11) = v2[705];
        v9 = RtlStringCbPrintfW(&v3[((unsigned __int64)v13 >> 1) - 1], 0x1CuLL, L"\\%04X%04X%04X", v2[704], v11, v12);
        if ( v9 < 0 )
        {
          ExFreePoolWithTag(v3, 0);
          v3 = 0LL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v7 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v8 = 76;
              LODWORD(v12) = v9;
              goto LABEL_17;
            }
          }
        }
      }
      else
      {
        ExFreePoolWithTag(v3, 0);
        v3 = 0LL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v7 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v8 = 75;
            LODWORD(v12) = v6;
LABEL_17:
            WPP_RECORDER_SF_d(
              (__int64)v7->DeviceExtension,
              0,
              1u,
              v8,
              (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
              v12);
          }
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
           && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x4Du,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v8 = 78;
      LODWORD(v12) = PersistedStateLocation;
      goto LABEL_17;
    }
  }
  return v3;
}
