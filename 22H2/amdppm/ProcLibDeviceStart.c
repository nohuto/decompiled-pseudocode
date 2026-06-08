/*
 * XREFs of ProcLibDeviceStart @ 0x1C0028EB0
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C0020780 (EvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C00037C0 (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     AcpiEval_OSC @ 0x1C00056F8 (AcpiEval_OSC.c)
 *     AcquireBiosPpmControl @ 0x1C0008230 (AcquireBiosPpmControl.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C00092E0 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceSummary2 @ 0x1C001F1CC (ProcLibTraceSummary2.c)
 *     InitAcpiCpc @ 0x1C0021EB8 (InitAcpiCpc.c)
 *     AcpiEval_PDC @ 0x1C0025CE4 (AcpiEval_PDC.c)
 *     AcpiEval_PPC @ 0x1C0025DEC (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C002668C (AcpiEval_TPC.c)
 *     AcquireAcpiInterfaces @ 0x1C00285BC (AcquireAcpiInterfaces.c)
 *     EnumerateControlMethods @ 0x1C0028694 (EnumerateControlMethods.c)
 *     ProcLibCapChange @ 0x1C0028C54 (ProcLibCapChange.c)
 *     InitAcpiProcessorDomains @ 0x1C002A3A4 (InitAcpiProcessorDomains.c)
 *     RegisterXsdDomain @ 0x1C002A624 (RegisterXsdDomain.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002C1F0 (ValidatePerfDomainSymmetry.c)
 *     InitAcpiPerfStates @ 0x1C0031BE8 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0031FA8 (InitAcpiThrottleStates.c)
 *     InitAcpiCStates @ 0x1C003255C (InitAcpiCStates.c)
 *     InitPepIdleStates @ 0x1C003262C (InitPepIdleStates.c)
 *     InitializeEnergyEstimation @ 0x1C003431C (InitializeEnergyEstimation.c)
 *     InitPepPerfStates @ 0x1C0034860 (InitPepPerfStates.c)
 *     InitPep @ 0x1C0035544 (InitPep.c)
 *     QueryPepCapabilites @ 0x1C00359B0 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C0035DB4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0035FE0 (InitAcpiLpiStates.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  int (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD); // rax
  int v4; // eax
  _DWORD *v5; // rdi
  int v6; // eax
  int v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rax
  int v10; // eax
  const wchar_t *v11; // rax
  PIO_WORKITEM WorkItem; // rax
  __int16 v13; // r8
  int v14; // r13d
  int v15; // ebx
  unsigned __int16 v16; // r9
  unsigned __int8 v17; // dl
  unsigned int v18; // r8d
  int inited; // eax
  __int64 v20; // rax
  int v21; // eax
  int PepCapabilites; // eax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  unsigned __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned __int16 v36; // r9
  __int64 v37; // rcx
  void (__fastcall *v38)(_QWORD, _QWORD); // rax
  void (__fastcall *v39)(_QWORD); // rax
  int v40; // ebx
  int v41; // eax
  int v42; // edi
  int v43; // eax
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  char v47; // al
  __int64 v48; // rax
  void (__fastcall *v49)(__int64); // rax
  int v50; // r9d
  unsigned __int64 v51; // r8
  __int64 v52; // rcx
  int Type; // [rsp+28h] [rbp-A9h]
  ULONG Size[2]; // [rsp+30h] [rbp-A1h]
  ULONG Sizea[2]; // [rsp+30h] [rbp-A1h]
  ULONG Sizeb[2]; // [rsp+30h] [rbp-A1h]
  int *v58; // [rsp+88h] [rbp-49h] BYREF
  int v59; // [rsp+90h] [rbp-41h]
  int v60; // [rsp+94h] [rbp-3Dh] BYREF
  __int64 v61; // [rsp+98h] [rbp-39h] BYREF
  __int128 v62; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-21h]
  _QWORD v64[3]; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v65; // [rsp+D0h] [rbp-1h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+E0h] [rbp+Fh] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+F0h] [rbp+1Fh] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v63 = 0LL;
  *(_QWORD *)(a1 + 256) = Globals;
  *(_QWORD *)(a1 + 272) = Globals;
  *(_QWORD *)(a1 + 264) = 0LL;
  v64[1] = &v65;
  v65 = 0LL;
  v61 = 0LL;
  Affinity = 0LL;
  v60 = 0;
  PreviousAffinity = 0LL;
  v64[0] = 1LL;
  v62 = 0LL;
  v64[2] = 16LL;
  v3 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488);
  v59 = 0;
  if ( v3(WdfDriverGlobals, v1, 0LL, 2703744LL, 0LL, v64, 0LL, 0LL) >= 0 )
  {
    if ( DWORD1(v65) )
    {
      *(_DWORD *)(a1 + 188) = DWORD1(v65);
      *(_BYTE *)(a1 + 185) = BYTE8(v65);
      *(_BYTE *)(a1 + 184) = 1;
      *(_WORD *)(a1 + 186) = 0x2000;
      *(_DWORD *)(a1 + 192) = 0;
    }
  }
  else
  {
    v65 = 0LL;
    HIDWORD(v65) = -1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x1Eu,
        (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
    *(_QWORD *)(a1 + 272) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  v4 = HIDWORD(v65);
  v5 = (_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 48) = v4;
  *(_DWORD *)(a1 + 52) = v65;
  v6 = ((__int64 (__fastcall *)(__int64))qword_1C00137F8)(a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    *(_QWORD *)(a1 + 272) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Size[0] = v6;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x1Fu,
        (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
        *(_QWORD *)Size);
    }
    if ( dword_1C0013834 == 1 )
      v7 = 0;
    goto LABEL_184;
  }
  if ( *v5 == -1 )
  {
    if ( (Globals & 0x200000000000LL) != 0 )
    {
      *(_DWORD *)(a1 + 80) = dword_1C0013C00;
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 272) &= 0xFFFFFFCFFFFFFFFFuLL;
    }
  }
  else
  {
    v8 = IoSetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 8), &PROCESSOR_NUMBER_PKEY, 0, 0, 7u, 4u, (PVOID)(a1 + 56));
    if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizea[0] = v8;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x20u,
        (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
        *(_QWORD *)Sizea);
    }
    KeProcessorGroupAffinity(&Affinity, (unsigned int)*v5);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v59 = 1;
  }
  *((_QWORD *)&v62 + 1) = &DEVPKEY_Device_BiosDeviceName;
  *(_QWORD *)&v62 = 24LL;
  v63 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int64, _QWORD, __int64 *, int *))(WdfFunctions_01015 + 3472))(
          WdfDriverGlobals,
          v9,
          &v62,
          512LL,
          0LL,
          &v61,
          &v60);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v10;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x21u,
        (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
        *(_QWORD *)Sizeb);
    }
    v11 = L"Unknown";
  }
  else
  {
    v11 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                             WdfDriverGlobals,
                             v61,
                             0LL);
  }
  *(_QWORD *)(a1 + 64) = v11;
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1152) = WorkItem;
  *(_BYTE *)(a1 + 1161) = 1;
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x22u,
        (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
    v7 = -1073741670;
    goto LABEL_182;
  }
  v58 = 0LL;
  if ( qword_1C0013520 )
  {
    v14 = AcpiEval_OSC(a1, (_DWORD *)qword_1C0013520, v13, &v58);
    if ( v14 >= 0 )
    {
      v15 = *v58;
      if ( (*v58 & 0xE) == 0 )
      {
        *(_QWORD *)(a1 + 88) = v58;
        goto LABEL_47;
      }
      if ( (v15 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x23u,
          (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
      if ( (v15 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDDDDDDDDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(unsigned __int8 *)(qword_1C0013520 + 13),
          *(unsigned __int8 *)(qword_1C0013520 + 12),
          *(unsigned __int8 *)(qword_1C0013520 + 11),
          Type);
      if ( (v15 & 8) == 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_47:
        if ( v14 >= 0 )
          goto LABEL_50;
        goto LABEL_48;
      }
      v16 = 37;
      v17 = 2;
      v18 = 1;
      Sizeb[0] = *(_DWORD *)(qword_1C0013520 + 16);
LABEL_46:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v17,
        v18,
        v16,
        (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
        *(_QWORD *)Sizeb);
      goto LABEL_47;
    }
    if ( v14 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v16 = 39;
      Sizeb[0] = v14;
      v18 = 3;
      v17 = 3;
      goto LABEL_46;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0x26u,
        (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
  }
LABEL_48:
  if ( qword_1C0013518 )
    AcpiEval_PDC(a1, (const void *)qword_1C0013518, word_1C0013528);
LABEL_50:
  EnumerateControlMethods(a1, (_DWORD *)(a1 + 1088));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    Sizeb[0] = *(_DWORD *)(a1 + 1088);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      3u,
      0x28u,
      (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
      *(_QWORD *)Sizeb);
  }
  if ( (*(_QWORD *)(a1 + 272) & 0x111300000F00LL) != 0 )
  {
    inited = InitPep(a1);
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = inited;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x29u,
          (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
          *(_QWORD *)Sizeb);
      }
      *(_QWORD *)(a1 + 272) &= 0xFFFFEEECFFFFF0FFuLL;
    }
  }
  v20 = *(_QWORD *)(a1 + 272);
  if ( (v20 & 0xE0000000000LL) != 0 )
  {
    v21 = InitAcpiLpiStates(a1);
    if ( v21 >= 0 )
    {
      *(_QWORD *)(a1 + 272) &= 0xFFFFFFFCFFF80C88uLL;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v21;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Au,
        (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
        *(_QWORD *)Sizeb);
    }
    v20 = *(_QWORD *)(a1 + 272);
  }
  if ( (v20 & 0x111300000F00LL) != 0 )
  {
    PepCapabilites = QueryPepCapabilites(a1);
    if ( PepCapabilites < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = PepCapabilites;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Bu,
          (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
          *(_QWORD *)Sizeb);
      }
      *(_QWORD *)(a1 + 272) &= 0xFFFFEEECFFFFF0FFuLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 272) & 0x7F077LL) != 0 )
  {
    v23 = InitAcpiCStates(a1);
    if ( v23 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v23;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Cu,
        (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  v24 = *(_QWORD *)(a1 + 272);
  if ( (v24 & 0x7F077) == 0 )
  {
    v24 &= 0xFFFFFFFFFFFFFCFFuLL;
    *(_QWORD *)(a1 + 272) = v24;
  }
  if ( (v24 & 0x300000300LL) != 0 )
  {
    v25 = InitPepIdleStates(a1);
    if ( v25 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v25;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Du,
          (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
          *(_QWORD *)Sizeb);
      }
      *(_QWORD *)(a1 + 272) &= 0xFFFFFFFCFFFFFCFFuLL;
    }
  }
  v26 = *(_QWORD *)(a1 + 272);
  if ( (v26 & 0x1000000000LL) != 0 )
  {
    v27 = InitPepPerfStates(a1);
    v28 = *(_QWORD *)(a1 + 272);
    if ( v27 >= 0 )
    {
      v26 = v28 & 0xFFFFFFFF04CFFFFFuLL;
      *(_QWORD *)(a1 + 272) = v26;
    }
    else
    {
      v26 = v28 & 0xFFFFFFEFFFFFFFFFuLL;
      *(_QWORD *)(a1 + 272) = v26;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v27;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Eu,
          (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
          *(_QWORD *)Sizeb);
        v26 = *(_QWORD *)(a1 + 272);
      }
    }
  }
  if ( (v26 & 0x8000000) != 0 )
  {
    v29 = InitAcpiCpc(a1);
    v30 = *(_QWORD *)(a1 + 272);
    if ( v29 >= 0 )
    {
      v26 = v30 & 0xFFFFFFFF0CCFFFFFuLL;
      *(_QWORD *)(a1 + 272) = v26;
    }
    else
    {
      v26 = v30 & 0xFFFFFFFFF7FFFFFFuLL;
      *(_QWORD *)(a1 + 272) = v26;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v29;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Fu,
          (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
          *(_QWORD *)Sizeb);
        v26 = *(_QWORD *)(a1 + 272);
      }
    }
  }
  if ( (v26 & 0x80000000) != 0 )
  {
    v31 = InitAcpiLegacyPcc(a1);
    v32 = *(_QWORD *)(a1 + 272);
    if ( v31 >= 0 )
    {
      v26 = v32 & 0xFFFFFFFF8CCFFFFFuLL;
      *(_QWORD *)(a1 + 272) = v26;
    }
    else
    {
      v26 = v32 & 0xFFFFFFFF7FFFFFFFuLL;
      *(_QWORD *)(a1 + 272) = v26;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v31;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x30u,
          (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
          *(_QWORD *)Sizeb);
        v26 = *(_QWORD *)(a1 + 272);
      }
    }
  }
  if ( (v26 & 0x70000000) != 0 )
  {
    v33 = InitAcpiPerfStates(a1);
    if ( v33 < 0 )
    {
      *(_QWORD *)(a1 + 272) &= 0xFFFFFFFF8FFFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v33;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x31u,
          (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 272) & 0x3300000) != 0 )
  {
    v34 = InitAcpiThrottleStates(a1);
    if ( v34 < 0 )
    {
      *(_QWORD *)(a1 + 272) &= 0xFFFFFFFFFCCFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v34;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x32u,
          (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
  }
  if ( !qword_1C0013530 || (v35 = qword_1C0013530(a1), v7 = v35, v35 >= 0) )
  {
    if ( dword_1C0013834 == 1 )
      goto LABEL_133;
    v37 = *(_QWORD *)(a1 + 272);
    if ( (v37 & 0x60000000) != 0 && *(_BYTE *)(a1 + 408) == 127 )
    {
      if ( (v37 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 288) = qword_1C0013550;
        *(_QWORD *)(a1 + 320) = qword_1C0013578;
        *(_QWORD *)(a1 + 304) = qword_1C0013560;
      }
      if ( (v37 & 0x40000000) == 0 )
        goto LABEL_120;
      v37 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 288) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 408) == 1 && (v37 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 288) = SetPerfStateIO;
      v37 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 304) = SetPerfStateIOHidden;
    }
    else
    {
      v37 &= 0xFFFFFFFF8FFFFFFFuLL;
    }
    *(_QWORD *)(a1 + 272) = v37;
LABEL_120:
    if ( (v37 & 0x4000000) != 0 )
      *(_QWORD *)(a1 + 328) = qword_1C0013580;
    if ( (v37 & 0xA8000000) != 0 )
    {
      *(_QWORD *)(a1 + 344) = qword_1C0013590;
      *(_QWORD *)(a1 + 352) = qword_1C0013598;
    }
    if ( (v37 & 0x2000000) != 0 && *(_BYTE *)(a1 + 464) == 127 )
    {
      *(_QWORD *)(a1 + 296) = qword_1C0013558;
      *(_QWORD *)(a1 + 312) = qword_1C0013568;
    }
    else if ( *(_BYTE *)(a1 + 464) == 1 && (v37 & 0x1100000) != 0 )
    {
      *(_QWORD *)(a1 + 296) = SetPerfStateIO;
      *(_QWORD *)(a1 + 312) = SetPerfStateIOHidden;
    }
    else
    {
      *(_QWORD *)(a1 + 272) = v37 & 0xFFFFFFFFFCCFFFFFuLL;
    }
    if ( qword_1C0013588 )
      *(_QWORD *)(a1 + 336) = qword_1C0013588;
LABEL_133:
    InitAcpiProcessorDomains(a1);
    if ( (*(_DWORD *)(a1 + 272) & 0x7B07F070) != 0 )
    {
      v7 = AcquireAcpiInterfaces(a1);
      if ( v7 < 0 )
      {
        v38 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 176);
        if ( v38 )
          v38(*(_QWORD *)(a1 + 8), AcpiNotifyCallback);
        v39 = *(void (__fastcall **)(_QWORD))(a1 + 120);
        if ( v39 )
          v39(*(_QWORD *)(a1 + 104));
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_182;
        v36 = 52;
        Sizeb[0] = v7;
        goto LABEL_107;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 208),
      0LL);
    v40 = ((__int64 (__fastcall *)(__int64))qword_1C00137C0)(a1);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 208));
    if ( v40 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v40;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x35u,
        (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
        *(_QWORD *)Sizeb);
    }
    v41 = *(_DWORD *)(a1 + 272);
    v42 = 0;
    LODWORD(v58) = 0;
    if ( (v41 & 0x70000000) != 0 )
    {
      v43 = AcpiEval_PPC(a1, (int *)&v58);
      if ( v43 >= 0 )
      {
        v42 = (int)v58;
      }
      else if ( v43 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0x36u,
            (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v43;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x37u,
          (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
    v44 = *(_DWORD *)(a1 + 272);
    v45 = 0;
    LODWORD(v58) = 0;
    if ( (v44 & 0x3000000) != 0 )
    {
      v46 = AcpiEval_TPC(a1, (unsigned int *)&v58);
      if ( v46 >= 0 )
      {
        v45 = (int)v58;
      }
      else if ( v46 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0x38u,
            (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v46;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x39u,
          (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00133F8,
      0LL);
    ProcLibCapChange(a1, v42, v45, 0x64u);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00133F8);
    if ( (*(_QWORD *)(a1 + 272) & 0x10FF300000LL) == 0 )
      goto LABEL_178;
    if ( *(_QWORD *)(a1 + 536) )
    {
      v47 = RegisterXsdDomain(a1);
    }
    else
    {
      if ( byte_1C0013830 )
      {
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64))qword_1C0013800)(a1) )
        {
LABEL_168:
          if ( (int)ValidatePerfDomainSymmetry(a1) >= 0 )
          {
            v48 = *(_QWORD *)(a1 + 272);
            if ( (v48 & 0x1000000000LL) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C00137F0)(a1);
            }
            else if ( (v48 & 0x8000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C00137E8)(a1);
            }
            else if ( (v48 & 0x80000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C00137E0)(a1);
            }
            else
            {
              v49 = (void (__fastcall *)(__int64))qword_1C00137C8;
              if ( (*(_QWORD *)(a1 + 272) & 0x73300000LL) == 0 )
                v49 = (void (__fastcall *)(__int64))qword_1C00137D8;
              v49(a1);
            }
          }
        }
LABEL_178:
        if ( (*(_QWORD *)(a1 + 272) & 0x2000000000LL) != 0 && ++dword_1C0013BE8 == dword_1C00133F4 )
          InitializeEnergyEstimation();
        AcquireBiosPpmControl(a1);
        v7 = 0;
        goto LABEL_182;
      }
      v47 = 1;
    }
    if ( v47 )
      goto LABEL_168;
    goto LABEL_178;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_182;
  v36 = 51;
  Sizeb[0] = v35;
LABEL_107:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    3u,
    v36,
    (__int64)&WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
    *(_QWORD *)Sizeb);
LABEL_182:
  if ( v59 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_184:
  v50 = *(_DWORD *)(a1 + 264);
  v51 = *(_QWORD *)(a1 + 272);
  if ( (v50 & 0x7F077 & v51) != (v50 & 0x7F077) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, qword_1C0013810, (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV, 0, 0LL);
    v50 = *(_DWORD *)(a1 + 264);
    v51 = *(_QWORD *)(a1 + 272);
  }
  v52 = v50 & 0x40000000;
  if ( (v51 & 0x40000000) == 0 )
    v52 = v50 & 0x70000000;
  if ( ((unsigned int)v51 & (unsigned int)v52) != v52 )
  {
    ProcLibTraceProcessorSpecificEvent(a1, qword_1C0013818, (__int64)&PPM_ETW_PERF_STATES_ERROR_HV, 0, 0LL);
    v50 = *(_DWORD *)(a1 + 264);
    v51 = *(_QWORD *)(a1 + 272);
  }
  if ( ((unsigned int)v51 & v50 & 0x3300000) != (unsigned __int64)(v50 & 0x3300000) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, qword_1C0013820, (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV, 0, 0LL);
    v50 = *(_DWORD *)(a1 + 264);
    v51 = *(_QWORD *)(a1 + 272);
  }
  if ( ((unsigned int)v51 & v50 & 0x80000000) != (unsigned __int64)(v50 & 0x80000000) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, (__int64)&PPM_ETW_PCC_ERROR, (__int64)&PPM_ETW_PCC_ERROR_HV, 0, 0LL);
    v50 = *(_DWORD *)(a1 + 264);
    v51 = *(_QWORD *)(a1 + 272);
  }
  if ( ((unsigned int)v51 & v50 & 0x8000000) != (unsigned __int64)(v50 & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, (__int64)&PPM_ETW_CPC_ERROR, (__int64)&PPM_ETW_CPC_ERROR_HV, 0, 0LL);
  ProcLibTraceSummary2(a1, 0);
  return (unsigned int)v7;
}
