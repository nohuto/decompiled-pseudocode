/*
 * XREFs of HUBMISC_ReportPnPFailureProblem @ 0x1C00835A0
 * Callers:
 *     HUBHSM_ReportingErrorToPnp @ 0x1C0008E40 (HUBHSM_ReportingErrorToPnp.c)
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0017920 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C0013FD0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMISC_ReportPnPFailureProblem(__int64 a1, ULONG a2)
{
  wchar_t *Data; // rbp
  NTSTATUS Message; // ebx
  unsigned __int64 v6; // rdi
  BYTE *Text; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v10; // rdi
  size_t v11; // rdi
  wchar_t *Pool2; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  wchar_t *j; // rax
  int v16; // edi
  struct _DEVICE_OBJECT *v17; // rax
  NTSTATUS v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-98h]
  ULONG Size[2]; // [rsp+28h] [rbp-90h]
  ULONG Sizea[2]; // [rsp+28h] [rbp-90h]
  PMESSAGE_RESOURCE_ENTRY v24; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v25[3]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v26; // [rsp+78h] [rbp-40h]
  int v27; // [rsp+80h] [rbp-38h]

  v24 = 0LL;
  Data = 0LL;
  Message = -1073741595;
  v25[0] = *(_OWORD *)L"@System32\\drivers\\usbhub3.sys";
  v25[1] = *(_OWORD *)L"2\\drivers\\usbhub3.sys";
  v26 = *(_QWORD *)L"3.sys";
  v25[2] = *(_OWORD *)L"s\\usbhub3.sys";
  v27 = *(_DWORD *)L"s";
  if ( !a2 )
    goto LABEL_27;
  Message = RtlFindMessage(*(PVOID *)(g_Usbhub3DriverObject + 24), 0xBu, 0, a2, &v24);
  if ( Message < 0 )
    goto LABEL_27;
  v6 = v24->Length - 4LL;
  if ( v6 > 0xFFFFFFFE )
    goto LABEL_27;
  Text = v24->Text;
  v8 = v6 >> 1;
  if ( v24 == (PMESSAGE_RESOURCE_ENTRY)-4LL || v8 > 0x7FFFFFFF )
    goto LABEL_26;
  for ( i = v8; i; --i )
  {
    if ( !*(_WORD *)Text )
      break;
    Text += 2;
  }
  Message = i == 0 ? 0xC000000D : 0;
  if ( i )
    v10 = v8 - i;
  else
    v10 = 0LL;
  if ( !i )
    goto LABEL_27;
  v11 = 2 * v10 + 88;
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, v11, 1748191317LL);
  Data = Pool2;
  if ( !Pool2 )
    goto LABEL_27;
  LODWORD(MessageResourceEntry) = a2;
  Message = RtlStringCbPrintfW(Pool2, v11, L"%s,#%d;%s", v25, MessageResourceEntry, v24->Text);
  if ( Message < 0 )
    goto LABEL_27;
  v13 = v11 >> 1;
  if ( v13 > 0x7FFFFFFF )
  {
LABEL_26:
    Message = -1073741811;
    goto LABEL_27;
  }
  v14 = v13;
  for ( j = Data; v14; --v14 )
  {
    if ( !*j )
      break;
    ++j;
  }
  Message = v14 == 0 ? 0xC000000D : 0;
  if ( v14 )
    v16 = v13 - v14;
  else
    v16 = 0;
  if ( v14 )
  {
    v17 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                     WdfDriverGlobals,
                                     a1);
    v18 = IoSetDevicePropertyData(v17, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0x19u, 2 * v16 + 2, Data);
    if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C006A1E8);
      Sizea[0] = v18;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v19 + 64),
        2u,
        5u,
        0x79u,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
        *(_QWORD *)Sizea);
    }
LABEL_30:
    ExFreePoolWithTag(Data, 0x68334855u);
    return;
  }
LABEL_27:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C006A1E8);
    Size[0] = Message;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v20 + 64),
      2u,
      5u,
      0x7Au,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      *(_QWORD *)Size);
  }
  if ( Data )
    goto LABEL_30;
}
