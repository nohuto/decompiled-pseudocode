__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPreprocess(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx
  __int64 v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v6; // rdi
  unsigned int LowPart; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  bool v15; // zf
  _IRP *MasterIrp; // rdx
  int v17; // r14d
  char v18; // dl
  unsigned int v19; // esi
  _IO_SECURITY_CONTEXT *v20; // r14
  unsigned int v21; // edx
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int16 v25; // r9
  unsigned __int8 v26; // dl
  __int64 v27; // rdx
  __int64 v28; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  __int64 v30; // rax
  _SECURITY_QUALITY_OF_SERVICE *v31; // rcx
  PVOID v32; // r9
  __int64 v35; // rcx
  unsigned __int16 *v36; // rcx
  unsigned int *v37; // rsi
  unsigned int v38; // ebx
  __int64 v39; // rdx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  PVOID v41; // r9
  unsigned __int16 *v42; // rdx
  unsigned int AccessState_high; // ecx
  unsigned int v44; // ebx
  _IO_STACK_LOCATION *v45; // rax
  _IO_STACK_LOCATION *v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rax
  int v50; // eax
  unsigned __int16 v51; // r9
  unsigned __int8 v52; // dl
  int v53; // eax
  __int64 v54; // rcx
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // eax
  unsigned int DeviceBusInfo; // eax
  unsigned __int16 v62; // r9
  unsigned __int8 v63; // dl
  __int64 v64; // rdx
  _IO_SECURITY_CONTEXT *v65; // rax
  _IO_STACK_LOCATION *v66; // rax
  _IO_STACK_LOCATION *v67; // rax
  __int64 v68; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // eax
  unsigned int v73; // eax
  unsigned int v74; // eax
  unsigned int v75; // eax
  _IO_SECURITY_CONTEXT *v76; // rcx
  __int64 v77; // rax
  __int16 v78; // dx
  __int64 v79; // r8
  unsigned int v80; // eax
  unsigned int v81; // eax
  unsigned int v82; // eax
  unsigned int v83; // eax
  unsigned int v84; // eax
  unsigned int v85; // eax
  _IO_SECURITY_CONTEXT *v86; // rax
  __int64 v87; // rcx
  _IO_SECURITY_CONTEXT *v88; // r8
  __int64 v89; // rax
  __int64 v90; // r9
  __int64 v91; // rcx
  char v92; // cl
  __int64 v93; // rcx
  char v94; // cl
  unsigned int v95; // eax
  unsigned int v96; // eax
  unsigned int v97; // eax
  unsigned int v98; // eax
  unsigned int v99; // eax
  unsigned int v100; // eax
  unsigned __int16 v101; // r9
  _IO_SECURITY_CONTEXT *v102; // rax
  int v103; // eax
  int v104; // r14d
  int v105; // r14d
  int v106; // r14d
  int v107; // r14d
  _IO_STACK_LOCATION *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  int v111; // ecx
  __int64 v112; // [rsp+20h] [rbp-60h]
  __int64 v113; // [rsp+20h] [rbp-60h]
  ULONG Priority[2]; // [rsp+28h] [rbp-58h]
  unsigned int v115; // [rsp+30h] [rbp-50h]
  _IO_STACK_LOCATION *v116; // [rsp+38h] [rbp-48h]
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  GUID v118; // [rsp+58h] [rbp-28h] BYREF
  __int128 Source1; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)&v118.Data1 = a1;
  Status = 0;
  memset(&Event, 0, sizeof(Event));
  Source1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  v116 = CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v115 = LowPart;
  if ( CurrentStackLocation->MajorFunction != 14 )
  {
    v18 = 0;
    switch ( LowPart )
    {
      case 0x220003u:
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( (unsigned __int16)(*(_WORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 2) - 53) <= 1u )
LABEL_20:
          v18 = 1;
        break;
      case 0x490007u:
      case 0x49104Bu:
        v18 = 1;
        break;
      case 0x220FB3u:
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( (*(_DWORD *)(v6 + 32) & 0x20) == 0 )
          break;
        goto LABEL_20;
      case 0x220463u:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL) + 1432LL),
            4u,
            5u,
            0x39u,
            (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
            a2);
        *(_DWORD *)(*(_QWORD *)(v6 + 24) + 1632LL) |= 0x80000u;
        goto LABEL_53;
    }
    if ( *(_BYTE *)v6 && !v18 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL) + 1432LL),
          3u,
          5u,
          0x3Au,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          a2);
      v19 = v115;
      Status = -1073741810;
      if ( v115 == 2228227 )
        *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
LABEL_54:
      if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                          WdfDriverGlobals,
                          WdfDriverGlobals->Driver,
                          off_1C006A1E8)
                      + 4) & 0x1000) != 0 )
      {
        v118 = 0LL;
        if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
          (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, &v118);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
        {
          LODWORD(v112) = v19;
          McTemplateK0pq_EtwWriteTransfer(
            v28,
            &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
            &v118,
            *(_QWORD *)(*(_QWORD *)(v6 + 24) + 24LL),
            v112);
        }
        if ( v19 != 2228227 )
        {
          if ( v19 == 4788299 )
          {
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
              goto LABEL_278;
            Priority[0] = Status;
            McTemplateK0pjq_EtwWriteTransfer(
              v28,
              v27,
              &v118,
              *(_QWORD *)(*(_QWORD *)(v6 + 24) + 24LL),
              &Source1,
              *(_QWORD *)Priority);
          }
LABEL_276:
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
          {
            Priority[0] = Status;
            LODWORD(v112) = v19;
            McTemplateK0pqq_EtwWriteTransfer(
              v28,
              &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
              &v118,
              *(_QWORD *)(*(_QWORD *)(v6 + 24) + 24LL),
              v112,
              *(_QWORD *)Priority);
          }
          goto LABEL_278;
        }
        SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
        {
          LODWORD(v112) = WORD1(SecurityContext->SecurityQos);
          McTemplateK0pq_EtwWriteTransfer(
            v28,
            &USBHUB3_ETW_EVENT_DEVICE_URB_START,
            &v118,
            *(_QWORD *)(*(_QWORD *)(v6 + 24) + 24LL),
            v112);
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
          {
            Priority[0] = HIDWORD(SecurityContext->SecurityQos);
            LODWORD(v113) = WORD1(SecurityContext->SecurityQos);
            McTemplateK0pqq_EtwWriteTransfer(
              WORD1(SecurityContext->SecurityQos),
              &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
              &v118,
              *(_QWORD *)(*(_QWORD *)(v6 + 24) + 24LL),
              v113,
              *(_QWORD *)Priority);
            goto LABEL_276;
          }
        }
      }
LABEL_278:
      a2->IoStatus.Status = Status;
      goto LABEL_279;
    }
    if ( LowPart == 2228227 )
    {
      v20 = CurrentStackLocation->Parameters.Create.SecurityContext;
      v21 = WORD1(v20->SecurityQos);
      if ( (unsigned __int16)(v21 - 9) <= 1u || (unsigned __int16)(v21 - 57) <= 1u )
        goto LABEL_114;
      if ( v21 > 0x2A )
      {
        if ( v21 != 48 && v21 != 49 )
        {
          if ( v21 == 53 || v21 == 54 )
          {
            v20->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v6 + 24) + 24LL);
            goto LABEL_117;
          }
          v22 = v21 == 59;
LABEL_113:
          if ( !v22 )
            goto LABEL_114;
        }
      }
      else
      {
        if ( v21 == 42 )
        {
          v39 = *(_QWORD *)(v6 + 24);
          if ( WORD2(v20[5].AccessState) != 7 )
          {
            if ( (unsigned __int16)(*(_WORD *)(v39 + 1990) - 256) > 0xFFu && (*(_DWORD *)(v39 + 1632) & 0x80u) == 0
              || (*(_DWORD *)(v39 + 1644) & 2) != 0 )
            {
              BYTE1(v20[5].AccessState) = *(_BYTE *)(v39 + 2052);
              v20->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v6 + 24) + 24LL);
              goto LABEL_107;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_51;
            v24 = *(_QWORD *)(v39 + 8);
            v25 = 59;
            v26 = 3;
            goto LABEL_50;
          }
          if ( (*(_DWORD *)(v39 + 2464) & 2) == 0 )
            goto LABEL_51;
          SecurityQos = v20[2].SecurityQos;
          if ( SecurityQos )
            v41 = (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0
                ? *(PVOID *)&SecurityQos[2].Length
                : MmMapLockedPagesSpecifyCache(
                    (PMDL)SecurityQos,
                    0,
                    MmCached,
                    0LL,
                    0,
                    ExDefaultMdlProtection | 0x40000010u);
          else
            v41 = *(PVOID *)&v20[1].DesiredAccess;
          if ( !v41 )
            goto LABEL_51;
          v42 = *(unsigned __int16 **)(*(_QWORD *)(v6 + 24) + 2488LL);
          AccessState_high = v42[4];
          if ( AccessState_high >= HIDWORD(v20[1].AccessState) )
            AccessState_high = HIDWORD(v20[1].AccessState);
          v44 = AccessState_high;
          memmove(v41, v42, AccessState_high);
          HIDWORD(v20[1].AccessState) = v44;
LABEL_89:
          Status = 0;
          goto LABEL_52;
        }
        if ( WORD1(v20->SecurityQos) && v21 != 1 )
        {
          if ( v21 != 11 )
          {
            if ( v21 != 19 )
            {
              v22 = v21 == 30;
              goto LABEL_113;
            }
            v23 = *(_QWORD *)(v6 + 24);
            if ( (*(_DWORD *)(v23 + 1632) & 0x80000) == 0 )
            {
LABEL_114:
              v20->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v6 + 24) + 24LL);
              goto LABEL_76;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_51;
            v24 = *(_QWORD *)(v23 + 8);
            v25 = 60;
            v26 = 4;
LABEL_50:
            WPP_RECORDER_SF_(
              *(_QWORD *)(v24 + 1432),
              v26,
              5u,
              v25,
              (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
LABEL_51:
            Status = -1073741637;
LABEL_52:
            CurrentStackLocation = v116;
            goto LABEL_53;
          }
          v30 = *(_QWORD *)(v6 + 24);
          if ( *(_WORD *)(v30 + 1990) <= 0x200u )
          {
            v20->AccessState = *(_ACCESS_STATE **)(v30 + 24);
            goto LABEL_76;
          }
          Status = HUBPDO_ValidateURB(v6, (unsigned __int16 *)v20, 4788299LL);
          if ( (Status & 0x80000000) != 0 )
            goto LABEL_52;
          v31 = v20[2].SecurityQos;
          if ( v31 )
          {
            if ( (*(&v31->EffectiveOnly + 1) & 5) != 0 )
              v32 = *(PVOID *)&v31[2].Length;
            else
              v32 = MmMapLockedPagesSpecifyCache((PMDL)v31, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010u);
          }
          else
          {
            v32 = *(PVOID *)&v20[1].DesiredAccess;
          }
          if ( !v32 )
          {
            Status = -1073741811;
            HIDWORD(v20->SecurityQos) = -2147482880;
            goto LABEL_52;
          }
          if ( BYTE3(v20[5].AccessState) == 1 )
          {
            v37 = (unsigned int *)&v20[1].AccessState + 1;
            v36 = (unsigned __int16 *)(*(_QWORD *)(v6 + 24) + 1988LL);
            v38 = 18;
            if ( HIDWORD(v20[1].AccessState) <= 0x12 )
              v38 = HIDWORD(v20[1].AccessState);
          }
          else
          {
            if ( BYTE3(v20[5].AccessState) != 2 )
            {
              v20->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v6 + 24) + 24LL);
              goto LABEL_76;
            }
            v35 = *(_QWORD *)(v6 + 24);
            if ( BYTE2(v20[5].AccessState) )
            {
              v20->AccessState = *(_ACCESS_STATE **)(v35 + 24);
              goto LABEL_76;
            }
            v36 = *(unsigned __int16 **)(v35 + 2016);
            v37 = (unsigned int *)&v20[1].AccessState + 1;
            v38 = v36[1];
            if ( v38 >= HIDWORD(v20[1].AccessState) )
              v38 = HIDWORD(v20[1].AccessState);
          }
          LODWORD(v20[1].AccessState) |= 1u;
          if ( ((__int64)v20[1].AccessState & 8) != 0 )
            WORD1(v20->SecurityQos) = 8;
          memmove(v32, v36, v38);
          *v37 = v38;
          goto LABEL_89;
        }
      }
      v53 = HUBPDO_ValidateURB(v6, (unsigned __int16 *)v20, 4788299LL);
      Status = v53;
      if ( v53 < 0 )
        goto LABEL_52;
      if ( v53 != 128 )
      {
        v17 = (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 1632LL) & 2) != 0 ? 5 : 3;
        goto LABEL_256;
      }
      goto LABEL_89;
    }
    if ( LowPart <= 0x22043F )
    {
      if ( LowPart == 2229311 )
      {
        v76 = CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( v76 )
        {
          v77 = *(_QWORD *)(v6 + 16);
          *(_OWORD *)&v76->SecurityQos = *(_OWORD *)(v77 + 304);
          *(_OWORD *)&v76->DesiredAccess = *(_OWORD *)(v77 + 320);
          v78 = *(_WORD *)(v6 + 48);
          v79 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 240LL);
          if ( (_BYTE)v79 )
            *((_WORD *)&v76->DesiredAccess + v79) = v78;
          else
            LOWORD(v76->DesiredAccess) = v78;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL) + 1432LL),
              3u,
              5u,
              0xBu,
              (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
          Status = -1073741811;
        }
        goto LABEL_53;
      }
      v54 = 2228263LL;
      if ( LowPart > 0x220027 )
      {
        v70 = LowPart - 2228267;
        if ( !v70 )
        {
          DeviceBusInfo = HUBPDO_RecordFailure(v6, (__int64)a2);
          goto LABEL_135;
        }
        v71 = v70 - 1013;
        if ( !v71 )
        {
          DeviceBusInfo = HUBUCX_GetDeviceBusInfo(
                            *(_QWORD *)(v6 + 16),
                            *(_QWORD *)(*(_QWORD *)(v6 + 24) + 24LL),
                            CurrentStackLocation->Parameters.WMI.ProviderId);
          goto LABEL_135;
        }
        v72 = v71 - 4;
        if ( !v72 )
        {
          DeviceBusInfo = HUBUCX_GetControllerName(
                            *(_QWORD *)(v6 + 16),
                            CurrentStackLocation->Parameters.WMI.ProviderId,
                            CurrentStackLocation->Parameters.Create.Options);
          goto LABEL_135;
        }
        v73 = v72 - 8;
        if ( v73 )
        {
          v74 = v73 - 7;
          if ( !v74 )
          {
            Status = CurrentStackLocation->Parameters.WMI.ProviderId == 0 ? 0xC000000D : 0;
            goto LABEL_53;
          }
          v75 = v74 - 4;
          if ( v75 )
          {
            if ( v75 != 4 )
            {
LABEL_238:
              Status = a2->IoStatus.Status;
              goto LABEL_53;
            }
          }
        }
        goto LABEL_182;
      }
      if ( LowPart != 2228263 )
      {
        v55 = LowPart - 2228231;
        if ( !v55 )
        {
          if ( (*(_DWORD *)(v6 + 32) & 1) != 0 )
          {
            if ( !KeGetCurrentIrql() )
              goto LABEL_117;
            Status = -1073741811;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_53;
            v62 = 64;
          }
          else
          {
            Status = -1073741101;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_53;
            v62 = 63;
          }
          goto LABEL_139;
        }
        v56 = v55 - 8;
        if ( v56 )
        {
          v57 = v56 - 4;
          if ( !v57 )
          {
            if ( KeGetCurrentIrql() )
            {
              Status = -1073741811;
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_53;
              v62 = 61;
            }
            else
            {
              v65 = CurrentStackLocation->Parameters.Create.SecurityContext;
              if ( v65 )
              {
                LODWORD(v65->SecurityQos) = 0;
                CurrentStackLocation->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v6;
LABEL_155:
                v66 = a2->Tail.Overlay.CurrentStackLocation;
                *(_OWORD *)&v66[-1].MajorFunction = *(_OWORD *)&v66->MajorFunction;
                *(_OWORD *)&v66[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v66->Parameters.NotifyDirectoryEx.CompletionFilter;
                *(_OWORD *)(&v66[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v66->Parameters.SetQuota + 6);
                v66[-1].FileObject = v66->FileObject;
                v66[-1].Control = 0;
                KeInitializeEvent(&Event, NotificationEvent, 0);
                v67 = a2->Tail.Overlay.CurrentStackLocation;
                v68 = *(_QWORD *)&v118.Data1;
                v67[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
                v67[-1].Context = &Event;
                v67[-1].Control = -32;
                v50 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, _QWORD, int))(WdfFunctions_01015
                                                                                                  + 3216))(
                        WdfDriverGlobals,
                        v68,
                        a2,
                        *(_QWORD *)(*(_QWORD *)(v6 + 16) + 2400LL),
                        2);
                if ( v50 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_159;
                v51 = 72;
                v52 = 2;
LABEL_158:
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL) + 1432LL),
                  v52,
                  5u,
                  v51,
                  (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
                  v50);
LABEL_159:
                HUBMISC_WaitForSignal(&Event);
                Status = a2->IoStatus.Status;
LABEL_279:
                IofCompleteRequest(a2, 0);
                return Status;
              }
              Status = -1073741811;
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_53;
              v62 = 62;
            }
            v63 = 2;
            goto LABEL_140;
          }
          v58 = v57 - 4;
          if ( !v58 )
            goto LABEL_53;
          v59 = v58 - 4;
          if ( !v59 )
            goto LABEL_53;
          v60 = v59 - 4;
          if ( v60 )
          {
            if ( v60 == 1 )
            {
              DeviceBusInfo = HUBPDO_GetHubName(v6, a2);
LABEL_135:
              Status = DeviceBusInfo;
              goto LABEL_53;
            }
            goto LABEL_238;
          }
          if ( KeGetCurrentIrql() )
          {
            Status = -1073741811;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_53;
            v62 = 67;
          }
          else
          {
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 4), 1, 0) )
            {
              v64 = *(_QWORD *)(v6 + 24);
              if ( (*(_DWORD *)(v64 + 2436) & 0x400) != 0 )
                HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedCyclePort", v64 + 504);
              EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(*(_QWORD *)(v6 + 24), 2228255LL, 0LL);
              HUBSM_AddEvent(*(_QWORD *)(v6 + 24) + 504LL, 4011);
              goto LABEL_53;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
LABEL_53:
              v19 = v115;
              goto LABEL_54;
            }
            v62 = 68;
          }
LABEL_139:
          v63 = 3;
LABEL_140:
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL) + 1432LL),
            v63,
            5u,
            v62,
            (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
          goto LABEL_53;
        }
LABEL_182:
        Status = -1073741637;
        goto LABEL_53;
      }
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      if ( Parameters && *(_QWORD *)&Parameters->NamedPipeType )
      {
        v118 = 0LL;
        if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
          (*(void (__fastcall **)(IRP *, GUID *, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
            a2,
            &v118,
            4788299LL);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
          McTemplateK0p_EtwWriteTransfer(
            v54,
            &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_START,
            &v118,
            *(_QWORD *)(*(_QWORD *)(v6 + 24) + 24LL));
        return (unsigned int)HUBIDLE_AddEvent(v6 + 72, 6003LL, a2);
      }
      Status = -1073741224;
      v17 = 2;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x45u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
LABEL_256:
      v104 = v17 - 1;
      if ( !v104 )
        goto LABEL_76;
      v105 = v104 - 1;
      if ( v105 )
      {
        v106 = v105 - 1;
        if ( v106 )
        {
          v107 = v106 - 1;
          if ( v107 )
          {
            if ( v107 != 1 )
              return Status;
            goto LABEL_261;
          }
          goto LABEL_155;
        }
LABEL_117:
        v45 = a2->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v45[-1].MajorFunction = *(_OWORD *)&v45->MajorFunction;
        *(_OWORD *)&v45[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v45->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v45[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v45->Parameters.SetQuota + 6);
        v45[-1].FileObject = v45->FileObject;
        v45[-1].Control = 0;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v46 = a2->Tail.Overlay.CurrentStackLocation;
        v47 = *(_QWORD *)&v118.Data1;
        v48 = *(_QWORD *)&v118.Data1;
        v46[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
        v46[-1].Context = &Event;
        v46[-1].Control = -32;
        v49 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                WdfDriverGlobals,
                v48);
        v50 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
                WdfDriverGlobals,
                v47,
                a2,
                v49,
                2);
        if ( v50 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_159;
        v51 = 73;
        v52 = 3;
        goto LABEL_158;
      }
      goto LABEL_52;
    }
    if ( LowPart <= 0x491043 )
    {
      if ( LowPart == 4788291 )
      {
        v88 = CurrentStackLocation->Parameters.Create.SecurityContext;
        v88->SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)(v6 + 16) + 2448LL);
        v89 = *(_QWORD *)(v6 + 24);
        *(_OWORD *)&v88->AccessState = *(_OWORD *)(v89 + 1988);
        LOWORD(v88[1].SecurityQos) = *(_WORD *)(v89 + 2004);
        WORD1(v88[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v6 + 24) + 2192LL);
        WORD2(v88[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v6 + 24) + 2194LL);
        v88[2].AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v6 + 24) + 2568LL);
        v88[2].DesiredAccess = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 2576LL);
        BYTE2(v88[1].DesiredAccess) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL) + 202LL);
        HIWORD(v88[1].AccessState) = *(_WORD *)(*(_QWORD *)(v6 + 24) + 2202LL);
        LOWORD(v88[1].DesiredAccess) = *(_WORD *)(*(_QWORD *)(v6 + 24) + 2204LL);
        v90 = *(_QWORD *)(v6 + 16);
        LOWORD(v88[1].FullCreateOptions) = *(_WORD *)(v90 + 1188)
                                         + *(_WORD *)(v90 + 2492)
                                         + *(_WORD *)(*(_QWORD *)(v6 + 24) + 2582LL);
        v91 = *(_QWORD *)(v6 + 24);
        if ( (*(_DWORD *)(v91 + 2216) & 1) != 0 )
        {
          HIWORD(v88[1].SecurityQos) = *(unsigned __int8 *)(v91 + 2197);
          v92 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 240LL);
        }
        else
        {
          HIWORD(v88[1].SecurityQos) = *(_WORD *)(v90 + 2478);
          v92 = *(_BYTE *)(v90 + 2480);
        }
        LOBYTE(v88[1].AccessState) = v92;
        v93 = *(_QWORD *)(v6 + 24);
        if ( (*(_DWORD *)(v93 + 2216) & 2) != 0 )
        {
          WORD1(v88[1].AccessState) = *(_WORD *)(v93 + 2200);
          v94 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 240LL);
        }
        else
        {
          WORD1(v88[1].AccessState) = *(_WORD *)(v90 + 2482);
          v94 = *(_BYTE *)(v90 + 2484);
        }
        BYTE4(v88[1].AccessState) = v94;
        if ( (*(_DWORD *)(v90 + 2496) & 1) != 0 )
          LODWORD(v88[2].SecurityQos) |= 1u;
        if ( (*(_DWORD *)(v90 + 2496) & 4) != 0 )
          LODWORD(v88[2].SecurityQos) |= 4u;
        if ( (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 1632LL) & 0x2000) != 0 )
          LODWORD(v88[2].SecurityQos) |= 2u;
        if ( (*(_DWORD *)(*(_QWORD *)(v6 + 16) + 44LL) & 8) != 0 || (*(_DWORD *)(v90 + 2496) & 8) != 0 )
          LODWORD(v88[2].SecurityQos) |= 8u;
        goto LABEL_53;
      }
      v80 = LowPart - 2229315;
      if ( !v80 )
        goto LABEL_182;
      v81 = v80 - 12;
      if ( !v81 )
      {
        DeviceBusInfo = HUBPDO_ReturnDeviceConfigInfo(v6, (__int64)a2);
        goto LABEL_135;
      }
      v82 = v81 - 2916;
      if ( !v82 )
      {
        if ( (*(_DWORD *)(v6 + 32) & 1) != 0 )
        {
          if ( KeGetCurrentIrql() <= 2u )
          {
LABEL_261:
            v108 = a2->Tail.Overlay.CurrentStackLocation;
            v109 = *(_QWORD *)&v118.Data1;
            *(_OWORD *)&v108[-1].MajorFunction = *(_OWORD *)&v108->MajorFunction;
            *(_OWORD *)&v108[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v108->Parameters.NotifyDirectoryEx.CompletionFilter;
            *(_OWORD *)(&v108[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v108->Parameters.SetQuota + 6);
            v108[-1].FileObject = v108->FileObject;
            v108[-1].Control = 0;
            v110 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                     WdfDriverGlobals,
                     v109);
            return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
                                   WdfDriverGlobals,
                                   *(_QWORD *)&v118.Data1,
                                   a2,
                                   v110,
                                   2);
          }
          Status = -1073741811;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_53;
          v62 = 66;
        }
        else
        {
          Status = -1073741101;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_53;
          v62 = 65;
        }
        goto LABEL_139;
      }
      v83 = v82 - 8;
      if ( !v83 )
      {
        v87 = *(_QWORD *)(v6 + 24);
        if ( (*(_DWORD *)(v87 + 1644) & 0x1000000) == 0 )
        {
          Status = -1073741275;
          goto LABEL_53;
        }
        DeviceBusInfo = HUBMISC_GenerateControllerSuffix(
                          v87,
                          CurrentStackLocation->Parameters.WMI.ProviderId,
                          4788299LL);
        goto LABEL_135;
      }
      v84 = v83 - 2551880;
      if ( !v84 )
      {
        v86 = CurrentStackLocation->Parameters.Create.SecurityContext;
        CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v6 + 24) + 24LL);
        if ( (v86->DesiredAccess & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)(v6 + 32), 0x10u);
        goto LABEL_76;
      }
      v85 = v84 - 4;
      if ( v85 && v85 != 4 )
        goto LABEL_238;
      goto LABEL_203;
    }
    v95 = LowPart - 4788299;
    if ( !v95 )
    {
      v102 = CurrentStackLocation->Parameters.Create.SecurityContext;
      Source1 = *(_OWORD *)&v102->DesiredAccess;
      HIDWORD(v102[1].AccessState) = 0;
      if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
      {
        v103 = -((*(_DWORD *)(*(_QWORD *)(v6 + 24) + 1456LL) & 0x10000) != 0);
      }
      else
      {
        if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
        {
          Status = (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 1456LL) & 0x10000) != 0 ? 0xC00000BB : 0;
          v17 = ((*(_DWORD *)(*(_QWORD *)(v6 + 24) + 1456LL) & 0x10000) != 0) + 1;
          goto LABEL_256;
        }
        if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_SUPER_SPEED_COMPATIBLE, 0x10uLL) == 16 )
        {
          v111 = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 1456LL) & 0x800;
        }
        else if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE, 0x10uLL) == 16 )
        {
          v111 = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 1456LL) & 0x900;
        }
        else
        {
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_FULL_SPEED_COMPATIBLE, 0x10uLL) != 16 )
          {
            if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_LOW_SPEED_COMPATIBLE, 0x10uLL) != 16
              && RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_SSP_ISOCH_PIPE_FLAGS, 0x10uLL) != 16 )
            {
              goto LABEL_76;
            }
            Status = 0;
            goto LABEL_53;
          }
          v111 = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 1456LL) & 0xB00;
        }
        v103 = -(v111 == 0);
      }
      Status = v103 & 0xC00000BB;
      goto LABEL_53;
    }
    v96 = v95 - 4;
    if ( !v96 )
    {
LABEL_203:
      CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v6 + 24) + 24LL);
      goto LABEL_76;
    }
    v97 = v96 - 949;
    if ( !v97 )
    {
      a2->AssociatedIrp.MasterIrp->AssociatedIrp.MasterIrp = *(_IRP **)(*(_QWORD *)(v6 + 24) + 24LL);
      goto LABEL_76;
    }
    v98 = v97 - 4;
    if ( !v98 )
      goto LABEL_76;
    v99 = v98 - 7;
    if ( !v99 )
    {
      *(_QWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 8) = *(_QWORD *)(*(_QWORD *)(v6 + 24) + 24LL);
      goto LABEL_76;
    }
    v100 = v99 - 1016;
    if ( v100 )
    {
      if ( v100 != 4 )
        goto LABEL_238;
      if ( !KeGetCurrentIrql() )
      {
        DeviceBusInfo = HUBPDO_UnregisterPortPLDRCapability(*(_QWORD *)(v6 + 24));
        goto LABEL_135;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v101 = 71;
LABEL_242:
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL) + 1432LL),
          3u,
          5u,
          v101,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
      }
    }
    else
    {
      if ( !KeGetCurrentIrql() )
      {
        DeviceBusInfo = HUBPDO_RegisterPortPLDRCapability(*(_QWORD *)(v6 + 24));
        goto LABEL_135;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v101 = 70;
        goto LABEL_242;
      }
    }
    Status = -1073741808;
    goto LABEL_53;
  }
  v8 = LowPart - 2229348;
  if ( !v8 )
  {
LABEL_107:
    v17 = 1;
    goto LABEL_256;
  }
  v9 = v8 - 4;
  if ( v9 )
  {
    v10 = v9 - 4;
    if ( v10 )
    {
      v11 = v10 - 4;
      if ( v11 )
      {
        v12 = v11 - 4;
        if ( !v12 )
          goto LABEL_76;
        v13 = v12 - 4;
        if ( !v13 )
          goto LABEL_76;
        v14 = v13 - 4;
        if ( !v14 )
          goto LABEL_76;
        if ( v14 != 4 )
          goto LABEL_117;
        if ( CurrentStackLocation->Parameters.Read.Length != 24 )
          goto LABEL_17;
        v15 = CurrentStackLocation->Parameters.Create.Options == 24;
        goto LABEL_12;
      }
    }
    goto LABEL_107;
  }
  if ( CurrentStackLocation->Parameters.Read.Length != 36 )
  {
LABEL_17:
    Status = -1073741811;
    v17 = 2;
    goto LABEL_256;
  }
  v15 = CurrentStackLocation->Parameters.Create.Options == 36;
LABEL_12:
  if ( !v15 )
    goto LABEL_17;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_17;
  *(_QWORD *)(&MasterIrp->Size + 1) = *(_QWORD *)(*(_QWORD *)(v6 + 24) + 24LL);
LABEL_76:
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 8), a2);
}
