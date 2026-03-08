/*
 * XREFs of DpiPdoDispatchInternalIoctl @ 0x1C0168D80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C0001F08 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01690AC (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AAC00 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B0684 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     DpiPdoSetDevicePower @ 0x1C01E1140 (DpiPdoSetDevicePower.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01E7088 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01E70A8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C02205EE (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C02206C8 (DxgkReleaseAdapterOpmI2CSync.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C039D8B4 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C039DD08 (DpiPdoHandleOpmIoctls.c)
 */

__int64 __fastcall DpiPdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  __int64 v4; // rdi
  __int64 VideoOutputTechnology; // rbx
  _QWORD *UserBuffer; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v8; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY Length; // ecx
  unsigned int Options; // edx
  __int64 LowPart; // rbp
  unsigned int *p_NamedPipeType; // r15
  __int64 v13; // rax
  PVOID DeviceExtension; // r13
  DXGADAPTER *v15; // rbx
  int v16; // eax
  MONITOR_MGR *v17; // rdi
  __int64 v18; // r13
  unsigned __int64 Information; // rdi
  __int64 v20; // rdx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  void *v26; // [rsp+28h] [rbp-70h]
  struct DXGMONITOR *v27; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v28[10]; // [rsp+48h] [rbp-50h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v29; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v32; // [rsp+B8h] [rbp+20h]

  v32 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  LODWORD(VideoOutputTechnology) = -1073741637;
  UserBuffer = a2->UserBuffer;
  v28[0] = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v8 = *(struct _DEVICE_OBJECT **)(v4 + 32);
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v13 = *(int *)(v4 + 496);
  DeviceExtension = v8->DeviceExtension;
  v29 = Length;
  v31 = Options;
  if ( (_DWORD)v13 != 1 )
  {
    WdLogSingleEntry3(2LL, -1073741637LL, v13, LowPart);
    goto LABEL_38;
  }
  if ( (unsigned int)LowPart <= 0x23248B )
  {
    switch ( (_DWORD)LowPart )
    {
      case 0x23248B:
        goto LABEL_78;
      case 0x232407:
        v29 = D3DKMDT_VOT_HD15;
        if ( UserBuffer )
        {
          if ( (unsigned int)Length >= 0x28 )
          {
            LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
            if ( (int)VideoOutputTechnology < 0 )
              goto LABEL_38;
            *UserBuffer = *((_QWORD *)DeviceExtension + 489);
            UserBuffer[1] = *((_QWORD *)DeviceExtension + 334);
            *((_DWORD *)UserBuffer + 4) = *(_DWORD *)(v4 + 504);
            *((_DWORD *)UserBuffer + 6) = *(_DWORD *)(*(_QWORD *)(v4 + 936) + 68LL);
            *((_BYTE *)UserBuffer + 28) = *(_BYTE *)(*(_QWORD *)(v4 + 936) + 66LL);
            *((_DWORD *)UserBuffer + 8) = UserBuffer[4] & 0xFFFFFFFE | (*(_DWORD *)(*((_QWORD *)DeviceExtension + 5)
                                                                                  + 28LL) >= 0x7006u);
            VideoOutputTechnology = (int)DmmGetVideoOutputTechnology(
                                           *((void *const *)DeviceExtension + 489),
                                           *(_DWORD *)(v4 + 504),
                                           &v29,
                                           0LL);
            DpiReleaseCoreSyncAccessSafe(a1, 0LL);
            if ( (int)VideoOutputTechnology >= 0 )
            {
              Information = 40LL;
              *((_DWORD *)UserBuffer + 5) = v29;
              LODWORD(VideoOutputTechnology) = 0;
              goto LABEL_27;
            }
            v23 = VideoOutputTechnology;
            goto LABEL_49;
          }
          goto LABEL_52;
        }
        break;
      case 0x23242F:
        if ( p_NamedPipeType )
        {
          if ( Options >= 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v4 + 484) )
              DpiCheckForOutstandingD3Requests(v4);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
            LODWORD(VideoOutputTechnology) = DpiPdoSetDevicePower(a1, *p_NamedPipeType, 0LL);
            if ( *(_BYTE *)(v4 + 484) )
              DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
            KeLeaveCriticalRegion();
            goto LABEL_38;
          }
          goto LABEL_52;
        }
        break;
      case 0x232437:
LABEL_38:
        Information = v32;
        goto LABEL_27;
      case 0x232443:
        if ( !*((_QWORD *)DeviceExtension + 377) )
          goto LABEL_38;
        if ( p_NamedPipeType )
        {
          if ( Options >= 0x10 )
          {
            if ( p_NamedPipeType[1] - 1 <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_38;
              DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 489));
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*((_QWORD *)DeviceExtension + 489), 1LL);
              VideoOutputTechnology = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DeviceExtension
                                       + 377))(
                                        *(_QWORD *)(v4 + 48),
                                        *(unsigned int *)(v4 + 504),
                                        *p_NamedPipeType,
                                        p_NamedPipeType[1],
                                        *((_QWORD *)p_NamedPipeType + 1));
              DxgkReleaseAdapterDdiSync(*((_QWORD *)DeviceExtension + 489));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 489));
              DpiReleaseCoreSyncAccessSafe(a1, 0LL);
              if ( (int)VideoOutputTechnology >= 0 )
                goto LABEL_38;
LABEL_50:
              v23 = VideoOutputTechnology;
              v24 = 3LL;
              goto LABEL_51;
            }
            break;
          }
          goto LABEL_52;
        }
        break;
      case 0x232447:
        if ( !*((_QWORD *)DeviceExtension + 378) )
          goto LABEL_38;
        if ( p_NamedPipeType )
        {
          if ( Options >= 8 )
          {
            if ( UserBuffer && (unsigned int)(Length - 1) <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_38;
              DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 489));
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*((_QWORD *)DeviceExtension + 489), 1LL);
              v26 = UserBuffer;
              v22 = v29;
              VideoOutputTechnology = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY, void *))DeviceExtension
                                       + 378))(
                                        *(_QWORD *)(v4 + 48),
                                        *(unsigned int *)(v4 + 504),
                                        *p_NamedPipeType,
                                        p_NamedPipeType[1],
                                        v29,
                                        v26);
              DxgkReleaseAdapterDdiSync(*((_QWORD *)DeviceExtension + 489));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 489));
              DpiReleaseCoreSyncAccessSafe(a1, 0LL);
              if ( (int)VideoOutputTechnology >= 0 )
              {
                Information = (unsigned int)v22;
                goto LABEL_27;
              }
              goto LABEL_50;
            }
            break;
          }
LABEL_52:
          LODWORD(VideoOutputTechnology) = -1073741789;
          v23 = -1073741789LL;
          goto LABEL_49;
        }
        break;
      case 0x232483:
      case 0x232487:
LABEL_78:
        v25 = DpiPdoHandleOpmIoctls(a1, a2);
        Information = a2->IoStatus.Information;
        LODWORD(VideoOutputTechnology) = v25;
        goto LABEL_27;
      default:
        goto LABEL_11;
    }
    LODWORD(VideoOutputTechnology) = -1073741811;
    v23 = -1073741811LL;
LABEL_49:
    v24 = 2LL;
LABEL_51:
    WdLogSingleEntry1(v24, v23);
    goto LABEL_38;
  }
  if ( (_DWORD)LowPart == 2303119
    || (_DWORD)LowPart == 2303123
    || (_DWORD)LowPart == 2303127
    || (_DWORD)LowPart == 2303131
    || (_DWORD)LowPart == 2303135
    || (_DWORD)LowPart == 2303139 )
  {
    goto LABEL_78;
  }
  if ( (_DWORD)LowPart == 2303195 )
  {
    LODWORD(VideoOutputTechnology) = DpiBrightnessSetUncalibratedBrightness3Fallback(v8, *(_DWORD *)(v4 + 504));
    goto LABEL_38;
  }
LABEL_11:
  LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
  if ( (int)VideoOutputTechnology < 0 )
    goto LABEL_38;
  v15 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 489);
  v16 = *(_DWORD *)(v4 + 504);
  LODWORD(v30) = v16;
  if ( !v15 || v16 == -1 )
    goto LABEL_76;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v15) )
    WdLogSingleEntry0(1LL);
  if ( !*((_QWORD *)v15 + 365) )
    WdLogSingleEntry0(1LL);
  v17 = *(MONITOR_MGR **)(*((_QWORD *)v15 + 365) + 112LL);
  if ( !v17 )
  {
    WdLogSingleEntry1(2LL, v15);
LABEL_76:
    Information = v32;
    LODWORD(VideoOutputTechnology) = -1073741811;
    goto LABEL_28;
  }
  v18 = (unsigned int)v30;
  v27 = 0LL;
  LODWORD(VideoOutputTechnology) = MONITOR_MGR::_GetMonitorInstance(v17, v30, 1u, &v27);
  if ( (int)VideoOutputTechnology < 0 )
  {
    WdLogSingleEntry2(7LL, v18, v17);
    Information = v32;
  }
  else
  {
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v30, (__int64)v27, 1);
    LODWORD(VideoOutputTechnology) = DXGMONITOR::_DispatchInternalIOCtrl(
                                       v27,
                                       LowPart,
                                       v31,
                                       p_NamedPipeType,
                                       v29,
                                       UserBuffer,
                                       v28);
    if ( v30 )
    {
      ExReleaseResourceLite((PERESOURCE)(v30 + 24));
      KeLeaveCriticalRegion();
    }
    Information = v28[0];
  }
  v20 = -1073741637LL;
  if ( (_DWORD)VideoOutputTechnology == -1073741637 )
    goto LABEL_29;
  if ( (int)VideoOutputTechnology >= 0
    || (_DWORD)VideoOutputTechnology == -2147483643
    || (_DWORD)VideoOutputTechnology == -1073741789 )
  {
    goto LABEL_26;
  }
LABEL_28:
  v20 = (int)VideoOutputTechnology;
LABEL_29:
  WdLogSingleEntry1(3LL, v20);
LABEL_26:
  DpiReleaseCoreSyncAccessSafe(a1, 0LL);
LABEL_27:
  a2->IoStatus.Status = VideoOutputTechnology;
  a2->IoStatus.Information = Information;
  IofCompleteRequest(a2, 1);
  return (unsigned int)VideoOutputTechnology;
}
