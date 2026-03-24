/*
 * XREFs of RIMCreateHidDesc @ 0x1C00572E8
 * Callers:
 *     RIMCreateDev @ 0x1C0054530 (RIMCreateDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0056570 (WPP_RECORDER_SF_qDD.c)
 *     RIMFreeHidDesc @ 0x1C0056658 (RIMFreeHidDesc.c)
 *     RIMAllocateHidDesc @ 0x1C0056F3C (RIMAllocateHidDesc.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00571B0 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0057904 (WPP_RECORDER_SF_DD.c)
 *     rimAnyExplicitRimUsagesMatchingUsages @ 0x1C00579D8 (rimAnyExplicitRimUsagesMatchingUsages.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C0057A7C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0057AB4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     RIMHidGetCaps @ 0x1C0057E7C (RIMHidGetCaps.c)
 *     Win32AllocPoolNonPaged @ 0x1C005B490 (Win32AllocPoolNonPaged.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C00AB718 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00AC134 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00AC2AC (RIMSearchHidTLCInfo.c)
 *     IsProcessHidRawInputSupported @ 0x1C00B6828 (IsProcessHidRawInputSupported.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0137184 (WPP_RECORDER_SF_qd.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0161020 (RIMAllocateHidConfigDesc.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C016326C (WPP_RECORDER_SF_DDq.c)
 *     RIMIDECreateHIDDesc @ 0x1C01674DC (RIMIDECreateHIDDesc.c)
 */

__int64 __fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  int v10; // edx
  struct _FILE_OBJECT *v11; // r13
  struct _DEVICE_OBJECT *v12; // rsi
  int v13; // edx
  PIRP v14; // rax
  int v15; // edx
  NTSTATUS Status; // eax
  int v17; // edx
  void *v18; // r15
  PIRP v19; // rax
  int v20; // edx
  NTSTATUS v21; // eax
  int v22; // edx
  int Caps; // eax
  int v24; // edx
  int v25; // edx
  unsigned __int16 v26; // bx
  int v27; // edx
  unsigned __int16 v28; // r11
  int v29; // r9d
  bool v31; // sf
  int v32; // ecx
  __int64 v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rbx
  int v37; // r8d
  int v38; // edx
  int v39; // r9d
  int v40; // r9d
  unsigned int v41; // eax
  char v42; // cl
  int CollectionDescription; // eax
  char OutputBufferLength; // [rsp+28h] [rbp-B1h]
  char InternalDeviceIoControl; // [rsp+30h] [rbp-A9h]
  HANDLE Handle; // [rsp+58h] [rbp-81h] BYREF
  PVOID v47; // [rsp+60h] [rbp-79h] BYREF
  PVOID Object; // [rsp+68h] [rbp-71h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-59h] BYREF
  ULONG OutputBuffer[2]; // [rsp+98h] [rbp-41h] BYREF
  int v52; // [rsp+A0h] [rbp-39h]
  unsigned __int16 v53[32]; // [rsp+B0h] [rbp-29h] BYREF

  v47 = 0LL;
  Object = 0LL;
  IoStatusBlock = 0LL;
  v6 = 0LL;
  memset(v53, 0, sizeof(v53));
  Handle = 0LL;
  *(_QWORD *)OutputBuffer = 0LL;
  v52 = 0;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 212LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 10, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
  {
    v9 = RIMGetDeviceObjectPointer(
           (struct _UNICODE_STRING *)(a2 + 208),
           v7,
           v8,
           &Handle,
           &v47,
           (PDEVICE_OBJECT *)&Object);
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_d((_DWORD)gRimLog, v10, 1, 11, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v9);
      }
      return v6;
    }
    v11 = (struct _FILE_OBJECT *)v47;
    if ( !v47 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 242LL);
    v12 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 243LL);
    ObfReferenceObject(v12);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v13, 1, 12, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, a2);
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v14 = IoBuildDeviceIoControlRequest(0xB01A8u, v12, 0LL, 0, OutputBuffer, 0xCu, 0, &Event, &IoStatusBlock);
    v15 = (int)v14;
    if ( v14 )
    {
      v14->Tail.Overlay.CurrentStackLocation[-1].FileObject = v11;
      Status = IofCallDriver(v12, v14);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 3;
          WPP_RECORDER_SF_d(
            (_DWORD)gRimLog,
            v17,
            1,
            14,
            (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
            Status);
        }
        goto LABEL_39;
      }
      v18 = (void *)Win32AllocPoolNonPaged(OutputBuffer[0], 1886417746LL);
      if ( v18 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v15, 1, 16, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, a2);
        }
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v19 = IoBuildDeviceIoControlRequest(0xB0193u, v12, 0LL, 0, v18, OutputBuffer[0], 0, &Event, &IoStatusBlock);
        v20 = (int)v19;
        if ( !v19 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_38;
          v40 = 17;
LABEL_74:
          LOBYTE(v20) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v20, 1, v40, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
          goto LABEL_38;
        }
        v19->Tail.Overlay.CurrentStackLocation[-1].FileObject = v11;
        v21 = IofCallDriver(v12, v19);
        if ( v21 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v21 = IoStatusBlock.Status;
        }
        if ( v21 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = 3;
            WPP_RECORDER_SF_d(
              (_DWORD)gRimLog,
              v22,
              1,
              18,
              (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
              v21);
          }
          goto LABEL_38;
        }
        Caps = RIMHidGetCaps(a1, v12, v18, v53);
        if ( Caps != 1114112 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = 3;
            WPP_RECORDER_SF_qd(
              (_DWORD)gRimLog,
              v24,
              1,
              19,
              (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
              (char)v12,
              Caps);
          }
          goto LABEL_38;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_DD(
            (_DWORD)gRimLog,
            v24,
            1,
            20,
            (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
            v53[1],
            v53[0]);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v25) = 4;
            WPP_RECORDER_SF_DD(
              (_DWORD)gRimLog,
              v25,
              1,
              21,
              (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
              v53[2],
              v53[4]);
          }
        }
        DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", v53[0], v53[1]);
        v26 = v53[0];
        if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(a1, v53[1], v53[0]) )
        {
          v41 = *(_DWORD *)(a2 + 184) & 0xFFFF3FFF | 0x4000;
          *(_DWORD *)(a2 + 200) |= 0x40u;
          *(_DWORD *)(a2 + 184) = v41;
        }
        else if ( *(_DWORD *)(a1 + 864) )
        {
          v31 = (int)IsProcessHidRawInputSupported() < 0;
          v32 = 0;
          if ( !v31 )
            v32 = 0x8000;
          v33 = v53[0];
          v34 = v32 | *(_DWORD *)(a2 + 184) & 0xFFFF7FFF;
          v35 = v53[1];
          *(_DWORD *)(a2 + 184) = v34;
          if ( (unsigned int)rimAnyExplicitRimUsagesMatchingUsages(v35, v33) )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_38;
            v29 = 22;
            InternalDeviceIoControl = v53[0];
            OutputBufferLength = v53[1];
            goto LABEL_36;
          }
          v28 = v53[1];
          v26 = v53[0];
        }
        if ( (*(_DWORD *)(a2 + 184) & 0x4000) != 0 || v28 != 1 )
        {
          v27 = 13;
          if ( v28 == 13 )
          {
            v42 = 14;
            if ( v26 == 14 )
            {
              if ( (*(_DWORD *)(a1 + 84) & 0x18) != 0 )
              {
                v6 = RIMAllocateHidConfigDesc(a1, a2, v12, v18, v53, OutputBuffer);
                if ( v6 )
                  goto LABEL_62;
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_38;
                v42 = v53[0];
                v29 = 25;
                v27 = v53[1];
              }
              else
              {
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_38;
                v29 = 26;
              }
              InternalDeviceIoControl = v42;
              OutputBufferLength = v27;
LABEL_52:
              LOBYTE(v27) = 3;
              goto LABEL_37;
            }
          }
          else if ( v28 == 1 )
          {
            goto LABEL_83;
          }
LABEL_48:
          if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v28, v26, (char *)&OutputBuffer[1] + 2)
            && (*(_DWORD *)(a1 + 84) & 4) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_38;
            v40 = 28;
            goto LABEL_74;
          }
          v6 = RIMAllocateHidDesc(a1, a2, v18, v53, (__int64)OutputBuffer, (__int64)v12, (__int64)v11);
          if ( !v6 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_38;
            v29 = 29;
            InternalDeviceIoControl = v53[0];
            OutputBufferLength = v53[1];
            goto LABEL_52;
          }
          v36 = RIMSearchHidTLCInfo(v53[1], v53[0]);
          if ( v36 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDq(
                v53[0],
                v53[1],
                v37,
                30,
                (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
                v53[1],
                v53[0],
                v36);
          }
          else
          {
            v36 = RIMAllocateAndLinkHidTLCInfo(v53[1], v53[0]);
            if ( !v36 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v38) = 3;
                WPP_RECORDER_SF_q(
                  (_DWORD)gRimLog,
                  v38,
                  1,
                  31,
                  (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
                  a1);
              }
              RIMFreeHidDesc(v6);
              v6 = 0LL;
              goto LABEL_39;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v38) = 4;
              WPP_RECORDER_SF_qDD(
                (_DWORD)gRimLog,
                v38,
                1,
                32,
                (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
                v36,
                v53[1],
                v53[0]);
            }
          }
          ++*(_DWORD *)(v36 + 20);
          *(_QWORD *)(a2 + 472) = v36;
LABEL_62:
          ObfDereferenceObject(v12);
          ObfDereferenceObject(v11);
          ZwClose(Handle);
          return v6;
        }
        if ( !v26 || v26 > 2u && (v26 <= 5u || v26 > 7u && v26 != 128) )
        {
LABEL_83:
          if ( v26 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_38;
            InternalDeviceIoControl = 14;
            v29 = 27;
            OutputBufferLength = 1;
            goto LABEL_52;
          }
          goto LABEL_48;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_38:
          Win32FreePool((__int64)v18);
LABEL_39:
          ObfDereferenceObject(v11);
          ZwClose(Handle);
          if ( !v12 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 524LL);
          ObfDereferenceObject(v12);
          return v6;
        }
        InternalDeviceIoControl = v26;
        v29 = 23;
        OutputBufferLength = 1;
LABEL_36:
        LOBYTE(v27) = 4;
LABEL_37:
        WPP_RECORDER_SF_DD(
          (_DWORD)gRimLog,
          v27,
          1,
          v29,
          (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
          OutputBufferLength,
          InternalDeviceIoControl);
        goto LABEL_38;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v39 = 15;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v39 = 13;
    }
    LOBYTE(v15) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v15, 1, v39, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    goto LABEL_39;
  }
  if ( *(_QWORD *)a3
    && (!gpfnHidP_GetCollectionDescription
      ? (CollectionDescription = -1073741637)
      : (CollectionDescription = gpfnHidP_GetCollectionDescription(
                                   *(unsigned __int8 **)a3,
                                   *(_DWORD *)(a3 + 8),
                                   PagedPool,
                                   (struct _HIDP_DEVICE_DESC *)(a3 + 16))),
        CollectionDescription < 0) )
  {
    return 0LL;
  }
  else
  {
    return RIMIDECreateHIDDesc(a1, a2, a3);
  }
}
