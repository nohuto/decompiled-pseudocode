__int64 __fastcall Controller_WdfEvtDevicePrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdi
  int v7; // edx
  char IsSecureDevice; // r12
  _QWORD *v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  int v12; // ebx
  int v13; // ecx
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  int v18; // ecx
  __int64 v19; // rbx
  NTSTATUS v20; // eax
  int v21; // edx
  int v22; // r9d
  __int64 v23; // rcx
  int v24; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  GUID v26; // [rsp+50h] [rbp-B0h] BYREF
  GUID v27; // [rsp+60h] [rbp-A0h] BYREF
  GUID v28; // [rsp+70h] [rbp-90h] BYREF
  GUID v29; // [rsp+80h] [rbp-80h] BYREF
  char v30; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&v26.Data1 = a2;
  *(_QWORD *)&DestinationString.Length = 0x2000000LL;
  DestinationString.Buffer = (wchar_t *)&v30;
  v5 = 0;
  v29 = 0LL;
  v28 = 0LL;
  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00633D8)
                 + 8);
  IsSecureDevice = Controller_IsSecureDevice(v6);
  v9 = (_QWORD *)(v6 + 72);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(*v9, v7, 4, 47, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, a1);
  }
  if ( *(_DWORD *)(v6 + 872) != KeQueryActiveProcessorCountEx(0xFFFFu) )
  {
    Controller_DeallocateIrqlTrackingArray(v6);
    Controller_AllocateIrqlTrackingArray(v6, v15, v16, v17);
  }
  v10 = Register_PrepareHardware(*(_QWORD *)(v6 + 88), a3);
  v12 = v10;
  if ( v10 < 0 )
  {
    v5 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_d(*v9, v11, 4, 48, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v10);
    }
    goto LABEL_46;
  }
  if ( !IsSecureDevice )
    goto LABEL_51;
  v11 = v6 + 104;
  if ( !*(_QWORD *)(v6 + 104) )
  {
    v12 = SecureDmaEnabler_Create(v6);
    if ( v12 < 0 )
    {
      v5 = 2;
      goto LABEL_46;
    }
  }
  if ( *(_DWORD *)(v6 + 604) == 2 )
  {
LABEL_51:
    if ( !*(_QWORD *)(v6 + 96) )
    {
      v12 = DmaEnabler_Create(a1, v6);
      if ( v12 < 0 )
      {
        v5 = 3;
        goto LABEL_46;
      }
    }
  }
  v13 = *(_DWORD *)(v6 + 604);
  if ( !v13 )
  {
LABEL_10:
    if ( !*(_QWORD *)(v6 + 120) )
    {
      v11 = 0LL;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  v18 = v13 - 1;
  if ( v18 )
  {
    if ( v18 != 1 )
    {
      Debug_FreAssertMsg(
        (__int64)"Unexpected DMA mode",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
        1485);
      v12 = -1073741630;
      goto LABEL_46;
    }
    goto LABEL_10;
  }
  if ( !*(_QWORD *)(v6 + 120) )
  {
    LOBYTE(v11) = 1;
LABEL_12:
    v12 = CommonBuffer_Create(v6, v11);
    if ( v12 < 0 )
    {
      v5 = 4;
      goto LABEL_46;
    }
  }
LABEL_13:
  v12 = Interrupter_PrepareHardware(*(_QWORD *)(v6 + 128), *(_QWORD *)&v26.Data1, a3);
  if ( v12 < 0 )
  {
    v5 = 5;
  }
  else
  {
    v12 = XilDeviceSlot_PrepareHardware(*(_QWORD *)(v6 + 136));
    if ( v12 < 0 )
    {
      v5 = 6;
    }
    else
    {
      v12 = Command_PrepareHardware(*(_QWORD *)(v6 + 144));
      if ( v12 < 0 )
      {
        v5 = 7;
      }
      else
      {
        v12 = RootHub_PrepareHardware(*(unsigned __int64 **)(v6 + 152));
        if ( v12 < 0 )
        {
          v5 = 13;
        }
        else
        {
          if ( !*(_DWORD *)(v6 + 464) || !*(_QWORD *)(g_WdfDriverUsbXhciContext + 32) )
            return (unsigned int)v12;
          v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 264))(
                  WdfDriverGlobals,
                  a1);
          SleepstudyHelper_GenerateGuid(0LL, v19, &v29);
          SleepstudyHelper_GenerateGuid(7LL, v19 + 336, &v28);
          v20 = RtlUnicodeStringPrintf(
                  &DestinationString,
                  L"USBXHCI Selective Suspend Disabled/ Unsupported: Reason code: %d",
                  *(unsigned int *)(v6 + 464));
          v12 = v20;
          if ( v20 >= 0 )
          {
            v26 = v28;
            v23 = *(_QWORD *)(g_WdfDriverUsbXhciContext + 32);
            v27 = v29;
            v20 = SleepstudyHelper_RegisterComponentEx(
                    v23,
                    (unsigned int)&v27,
                    (unsigned int)&v26,
                    (unsigned int)&DestinationString,
                    v6 + 848);
            v12 = v20;
            if ( v20 >= 0 )
              return (unsigned int)v12;
            v5 = 8;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_46;
            v22 = 50;
            goto LABEL_43;
          }
          v5 = 12;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v22 = 49;
LABEL_43:
            LOBYTE(v21) = 2;
            WPP_RECORDER_SF_d(*v9, v21, 4, v22, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v20);
          }
        }
      }
    }
  }
LABEL_46:
  DbgPrint("USBXHCI: Controller enumeration failure in WdfEvtDevicePrepareHardware\n");
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v24) = 1;
    WPP_RECORDER_SF_d(*v9, v24, 4, 51, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v12);
  }
  Controller_ReportFatalErrorEx(v6, 0x20u, 4137, v5, v12, 0LL, 0LL, 0LL);
  return (unsigned int)v12;
}
