/*
 * XREFs of DpiFdoHandleStartDevice @ 0x1C01F6860
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     WindowsQueryLicenseDWORD @ 0x1C001D44C (WindowsQueryLicenseDWORD.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiReadPnpRegistryValue @ 0x1C01F1618 (DpiReadPnpRegistryValue.c)
 *     DpiFilterOutVgaResources @ 0x1C02125C0 (DpiFilterOutVgaResources.c)
 *     DpiDetermineResourceListSize @ 0x1C02127C8 (DpiDetermineResourceListSize.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1C02C935C (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall DpiFdoHandleStartDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  IRP *v4; // r13
  __int64 v5; // rcx
  int v6; // eax
  int v7; // r14d
  __int64 v8; // rdx
  int PnpRegistryValue; // eax
  IO_STATUS_BLOCK *p_IoStatus; // r13
  int Status; // r14d
  PUNICODE_STRING v12; // rcx
  int v13; // eax
  char v14; // r15
  IO_STATUS_BLOCK *v15; // r15
  void *v16; // rdx
  void *v17; // rdx
  PIO_SECURITY_CONTEXT SecurityContext; // rdx
  __int64 v20; // r9
  struct _UNICODE_STRING *v21; // rax
  unsigned int v22; // r12d
  void *Pool2; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  void *v27; // rcx
  _WORD *StartContext; // r15
  __int64 v29; // rax
  NTSTATUS v30; // eax
  PIRP v31; // rax
  PIRP v32; // rax
  ULONG_PTR v33; // [rsp+40h] [rbp-89h] BYREF
  int v34; // [rsp+48h] [rbp-81h] BYREF
  _DWORD Size[3]; // [rsp+4Ch] [rbp-7Dh] BYREF
  ULONG_PTR v36; // [rsp+58h] [rbp-71h]
  struct _UNICODE_STRING *FileName; // [rsp+60h] [rbp-69h]
  __int64 v38; // [rsp+70h] [rbp-59h] BYREF
  int v39; // [rsp+78h] [rbp-51h]
  const wchar_t *v40; // [rsp+80h] [rbp-49h]
  int *v41; // [rsp+88h] [rbp-41h]
  int v42; // [rsp+90h] [rbp-39h]
  int *v43; // [rsp+98h] [rbp-31h]
  int v44; // [rsp+A0h] [rbp-29h]
  __int64 v45; // [rsp+A8h] [rbp-21h]
  int v46; // [rsp+B0h] [rbp-19h]
  __int128 v47; // [rsp+B8h] [rbp-11h]
  __int128 v48; // [rsp+C8h] [rbp-1h]
  __int64 v49; // [rsp+D8h] [rbp+Fh]
  void *ThreadHandle; // [rsp+148h] [rbp+7Fh] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = a2;
  LOBYTE(ThreadHandle) = 0;
  v36 = 0LL;
  FileName = 0LL;
  Size[0] = 0;
  LODWORD(v33) = 0;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v6 = WindowsQueryLicenseDWORD(v5, &v33);
  if ( v6 < 0 )
  {
    v7 = 1;
    v8 = v6;
  }
  else
  {
    v7 = v33;
    v8 = (unsigned int)v33;
  }
  WdLogSingleEntry1(4LL, v8);
  v34 = 1;
  v38 = 0LL;
  v40 = L"MultiMonSupport";
  v39 = 288;
  v41 = &v34;
  v42 = 67108868;
  v43 = &v34;
  v44 = 4;
  v45 = 0LL;
  v46 = 0;
  v47 = 0LL;
  v49 = 0LL;
  v48 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v38, 0LL, 0LL);
  if ( !v34 )
    v7 = 0;
  if ( !v7
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2
    && !*(_BYTE *)(DeviceExtension + 1152)
    && !*(_BYTE *)(DeviceExtension + 480) )
  {
    Status = -1071774664;
    v24 = *(_QWORD *)(DeviceExtension + 24);
    v25 = 3LL;
LABEL_47:
    WdLogSingleEntry1(v25, v24);
    goto LABEL_57;
  }
  *(_DWORD *)(DeviceExtension + 2688) = v7;
  if ( *(_BYTE *)(DeviceExtension + 1156) == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v33 = 0LL;
    *(_QWORD *)&Size[1] = 0LL;
    if ( SecurityContext )
    {
      FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
      v36 = (ULONG_PTR)SecurityContext;
      DpiFilterOutVgaResources(DeviceExtension, SecurityContext, &v33, 0LL);
      LOBYTE(v20) = 1;
      DpiFilterOutVgaResources(DeviceExtension, CurrentStackLocation->Parameters.QueryDirectory.FileName, &Size[1], v20);
      if ( v33 )
      {
        v21 = *(struct _UNICODE_STRING **)&Size[1];
        if ( *(_QWORD *)&Size[1] )
        {
          CurrentStackLocation->Parameters.WMI.ProviderId = v33;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = v21;
          LOBYTE(ThreadHandle) = 1;
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
    }
  }
  if ( !*(_BYTE *)(DeviceExtension + 1152)
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    LODWORD(v33) = 0;
    PnpRegistryValue = DpiReadPnpRegistryValue((__int64)a1, L"DisableNonPOSTDevice", (char *)&v33, 4u, 2u);
    if ( PnpRegistryValue >= 0 )
    {
      if ( (_DWORD)v33 )
      {
        Status = -1073741823;
        v24 = -1073741823LL;
        v25 = 2LL;
        goto LABEL_47;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, PnpRegistryValue);
    }
  }
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), v4);
  p_IoStatus = &v4->IoStatus;
  Status = p_IoStatus->Status;
  if ( p_IoStatus->Status < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      *(unsigned int *)(DeviceExtension + 544),
      p_IoStatus->Status,
      *(unsigned int *)(DeviceExtension + 1124),
      *(unsigned int *)(DeviceExtension + 1128),
      *(_QWORD *)(*(_QWORD *)(DeviceExtension + 40) + 152LL));
    if ( Status == -1073741810 && *(_BYTE *)(*(_QWORD *)(DeviceExtension + 40) + 134LL) )
    {
      v4 = a2;
      if ( RtlCompareMemory((const void *)(DeviceExtension + 544), &GUID_BUS_TYPE_USB, 0x10uLL) == 16 )
      {
        v14 = 1;
LABEL_58:
        if ( *(_DWORD *)(DeviceExtension + 236) == 1 )
        {
          v26 = *(_DWORD *)(DeviceExtension + 240);
          --*(_DWORD *)(DeviceExtension + 276);
          *(_DWORD *)(DeviceExtension + 236) = v26;
          *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension
                                                         + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7)
                                                         + 244);
        }
        v27 = *(void **)(DeviceExtension + 1288);
        if ( v27 )
        {
          ExFreePoolWithTag(v27, 0);
          *(_QWORD *)(DeviceExtension + 1288) = 0LL;
        }
        if ( !v14 )
          DxgCreateLiveDumpWithWdLogs2(
            403LL,
            2050LL,
            Status,
            *(int *)(DeviceExtension + 236),
            *(int *)(DeviceExtension + 240),
            0LL);
        v15 = &v4->IoStatus;
        goto LABEL_28;
      }
LABEL_57:
      v14 = 0;
      goto LABEL_58;
    }
LABEL_56:
    v4 = a2;
    goto LABEL_57;
  }
  v12 = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  if ( v12 )
  {
    DpiDetermineResourceListSize(v12, Size);
    v22 = Size[0];
    Pool2 = (void *)ExAllocatePool2(256LL, Size[0], 1953656900LL);
    *(_QWORD *)(DeviceExtension + 1288) = Pool2;
    if ( !Pool2 )
    {
LABEL_55:
      Status = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      goto LABEL_56;
    }
    memmove(Pool2, CurrentStackLocation->Parameters.QueryDirectory.FileName, v22);
    if ( (_BYTE)ThreadHandle == 1 )
    {
      ExFreePoolWithTag(CurrentStackLocation->Parameters.Create.SecurityContext, 0);
      ExFreePoolWithTag(CurrentStackLocation->Parameters.QueryDirectory.FileName, 0);
      CurrentStackLocation->Parameters.WMI.ProviderId = v36;
      CurrentStackLocation->Parameters.QueryDirectory.FileName = FileName;
    }
  }
  *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
  v13 = *(_DWORD *)(DeviceExtension + 236);
  ++*(_DWORD *)(DeviceExtension + 276);
  *(_DWORD *)(DeviceExtension + 240) = v13;
  *(_DWORD *)(DeviceExtension + 236) = 1;
  if ( *(_DWORD *)(DeviceExtension + 16) != 1953656900 || *(_DWORD *)(DeviceExtension + 20) != 2 )
  {
LABEL_20:
    if ( !(_BYTE)word_1C013B4E0 )
      goto LABEL_21;
    goto LABEL_39;
  }
  if ( !*(_BYTE *)(DeviceExtension + 2693) )
  {
    HIBYTE(word_1C013B4E0) = 1;
    goto LABEL_20;
  }
  LOBYTE(word_1C013B4E0) = 1;
LABEL_39:
  if ( HIBYTE(word_1C013B4E0) )
    KeSetEvent(&stru_1C013B4E8, 0, 0);
LABEL_21:
  if ( !byte_1C013B4E2 || *(_BYTE *)(DeviceExtension + 1159) )
    goto LABEL_22;
  ThreadHandle = 0LL;
  StartContext = (_WORD *)ExAllocatePool2(256LL, 1552LL, 1953656900LL);
  if ( !StartContext )
    goto LABEL_55;
  v29 = *(_QWORD *)(DeviceExtension + 168);
  StartContext[2] = 0;
  *((_DWORD *)StartContext + 131) = 0;
  *(_DWORD *)StartContext = *(_BYTE *)(v29 + 108) != 0 ? 2 : 0;
  v30 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiFdoStartAdapterThread, StartContext);
  Status = v30;
  if ( v30 < 0 )
  {
    WdLogSingleEntry1(2LL, v30);
    ExFreePoolWithTag(StartContext, 0x74727044u);
    goto LABEL_56;
  }
  ZwClose(ThreadHandle);
LABEL_22:
  *(_DWORD *)(DeviceExtension + 284) = 1;
  *(_DWORD *)(DeviceExtension + 280) = 1;
  PoSetPowerState(a1, DevicePowerState, (POWER_STATE)1);
  v14 = 0;
  if ( Status < 0 )
  {
    v4 = a2;
    goto LABEL_58;
  }
  v15 = p_IoStatus;
  if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    v16 = *(void **)(DeviceExtension + 5360);
    if ( v16 )
    {
      v31 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 5272), v16);
      *(_QWORD *)(DeviceExtension + 5360) = 0LL;
      if ( v31 )
      {
        *(_BYTE *)(DeviceExtension + 5388) = 1;
        v31->IoStatus.Status = 0;
        v31->IoStatus.Information = 0LL;
        IofCompleteRequest(v31, 0);
        IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(DeviceExtension + 152));
      }
    }
    v17 = *(void **)(DeviceExtension + 5392);
    if ( v17 )
    {
      v32 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 5272), v17);
      *(_QWORD *)(DeviceExtension + 5392) = 0LL;
      if ( v32 )
      {
        *(_BYTE *)(DeviceExtension + 5420) = 1;
        v32->IoStatus.Status = 0;
        v32->IoStatus.Information = 0LL;
        IofCompleteRequest(v32, 0);
      }
    }
  }
  v4 = a2;
LABEL_28:
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  v15->Status = Status;
  IofCompleteRequest(v4, 1);
  return (unsigned int)Status;
}
