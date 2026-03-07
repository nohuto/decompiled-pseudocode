__int64 __fastcall PiProcessNewDeviceNode(__int64 MaxDataSize)
{
  __int64 v2; // rcx
  ULONG_PTR v3; // r13
  int v4; // eax
  wchar_t *v5; // rax
  int Capabilities; // ebx
  char v7; // r15
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r8
  int v11; // eax
  int GloballyUniqueId; // ebx
  WCHAR *v13; // r14
  _DWORD *v14; // r12
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // edx
  int *v24; // rsi
  void *v25; // rax
  ULONG_PTR v26; // rbx
  _DWORD *v27; // r15
  int *v28; // rbx
  HANDLE v29; // r14
  unsigned int v30; // r12d
  unsigned int v31; // esi
  int v32; // ebx
  struct _KTHREAD *v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  unsigned int v36; // eax
  int v37; // eax
  int v38; // r15d
  PVOID v39; // rsi
  WCHAR *v40; // rbx
  __int64 v41; // r8
  HANDLE v42; // rdx
  struct _KTHREAD *v43; // rax
  struct _KTHREAD *v44; // rax
  struct _KTHREAD *v45; // rax
  HANDLE v46; // rsi
  WCHAR *v47; // r15
  PVOID v48; // r12
  unsigned int v49; // r14d
  int v50; // eax
  char v51; // bl
  int v52; // eax
  unsigned int v53; // r14d
  __int64 v54; // rdx
  PVOID v55; // r14
  int AlternateStringData; // eax
  unsigned int v57; // ebx
  __int64 v58; // r9
  int DeviceLocationStrings; // eax
  PVOID v60; // rbx
  int v61; // eax
  unsigned int v62; // ebx
  __int64 v63; // r8
  __int64 v64; // r8
  struct _KTHREAD *v65; // rax
  __int64 v66; // r9
  __int64 v67; // rdx
  int v68; // eax
  unsigned int *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  PVOID v74; // rcx
  _QWORD *v76; // rcx
  PVOID v77; // rsi
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 FailedInstallProblemStatus; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rdx
  unsigned int v87; // eax
  bool v88; // zf
  __int64 v89; // rdx
  __int64 v90; // r8
  int v91; // eax
  __int64 v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // rcx
  _WORD *v96; // rcx
  __int64 v97; // rcx
  unsigned __int16 *v98; // rdi
  _WORD *v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rcx
  _WORD *v103; // rcx
  __int64 v104; // rcx
  unsigned __int16 *v105; // rdi
  _WORD *v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rcx
  int v109; // eax
  int v110; // eax
  int v111; // edx
  char v112; // al
  int v113; // ecx
  bool v114; // [rsp+58h] [rbp-B0h]
  _BYTE v115[3]; // [rsp+59h] [rbp-AFh] BYREF
  unsigned int v116; // [rsp+5Ch] [rbp-ACh] BYREF
  int v117; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v118; // [rsp+64h] [rbp-A4h]
  unsigned int v119; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v120; // [rsp+6Ch] [rbp-9Ch]
  __int64 v121; // [rsp+70h] [rbp-98h] BYREF
  unsigned int *v122; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  _DWORD *v124; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+90h] [rbp-78h] BYREF
  int v126; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v127; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v128; // [rsp+A0h] [rbp-68h]
  int v129; // [rsp+A4h] [rbp-64h]
  wchar_t *Str; // [rsp+A8h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v132; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v133; // [rsp+C0h] [rbp-48h] BYREF
  PVOID v134; // [rsp+C8h] [rbp-40h]
  HANDLE v135; // [rsp+D0h] [rbp-38h]
  int v136; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v137; // [rsp+E0h] [rbp-28h] BYREF
  PVOID v138; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v139; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v140; // [rsp+F8h] [rbp-10h] BYREF
  PVOID v141; // [rsp+100h] [rbp-8h] BYREF
  const WCHAR *v142; // [rsp+108h] [rbp+0h] BYREF
  PVOID v143; // [rsp+110h] [rbp+8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+118h] [rbp+10h] BYREF
  __int64 v145; // [rsp+128h] [rbp+20h] BYREF
  __int128 v146; // [rsp+130h] [rbp+28h] BYREF
  __int128 v147; // [rsp+140h] [rbp+38h]
  void (__fastcall *v148)(_QWORD, __int64 *); // [rsp+150h] [rbp+48h]
  _DWORD v149[16]; // [rsp+158h] [rbp+50h] BYREF
  GUID Guid; // [rsp+198h] [rbp+90h] BYREF

  SourceString = 0LL;
  memset(v149, 0, sizeof(v149));
  Guid = 0LL;
  v133 = 0LL;
  DestinationString = 0LL;
  v127 = 0;
  v137 = 0LL;
  v143 = 0LL;
  v138 = 0LL;
  v139 = 0;
  v132 = 0LL;
  LODWORD(v122) = 0;
  v141 = 0LL;
  v142 = 0LL;
  v126 = 0;
  v136 = 0;
  LOBYTE(v117) = 0;
  P = 0LL;
  if ( (byte_140C0E10B & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(v2, (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_Start, 0LL, MaxDataSize);
  LOBYTE(v128) = 0;
  v114 = 0;
  v129 = 0;
  v121 = 0LL;
  v3 = *(_QWORD *)(MaxDataSize + 32);
  v145 = MEMORY[0xFFFFF78000000014];
  v118 = 0;
  v119 = 0;
  v135 = 0LL;
  Handle = 0LL;
  v116 = 0;
  v115[0] = 0;
  v120 = 0;
  PiPnpRtlBeginOperation(&v143);
  PipClearDevNodeFlags(MaxDataSize, 0x2000000LL);
  Str = 0LL;
  LODWORD(v124) = 0;
  v4 = PnpQueryID(MaxDataSize, 0LL, &Str, &v124);
  if ( v4 < 0 )
  {
    v134 = 0LL;
    Str = 0LL;
    LODWORD(v121) = -1073741823;
    if ( v4 != -1073479624 )
      LODWORD(v121) = v4;
  }
  else
  {
    v134 = Str;
    v5 = wcschr(Str, 0x5Cu);
    *v5 = 0;
    Str = v5 + 1;
  }
  Capabilities = PpIrpQueryCapabilities(v3, v149);
  PipClearDevNodeUserFlags(MaxDataSize, 2);
  v7 = 0;
  if ( Capabilities >= 0 )
  {
    if ( (v149[1] & 0x20000) != 0 )
      PipSetDevNodeUserFlags(MaxDataSize, 2);
    if ( (v149[1] & 0x40) != 0 )
      v7 = 1;
  }
  if ( (v149[1] & 0x20) != 0 )
  {
    if ( *(_DWORD *)(MaxDataSize + 568) == 4 )
      PpProfileCancelTransitioningDock(MaxDataSize);
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)(MaxDataSize + 568) = v8;
  v140 = -1LL;
  v148 = 0LL;
  v146 = 0LL;
  v147 = 0LL;
  if ( (int)PnpQueryInterface((PVOID)v3, 0LL, &v146) >= 0 )
  {
    if ( v148 )
    {
      if ( WORD1(v146) == 1 )
      {
        v148(*((_QWORD *)&v146 + 1), &v140);
        if ( *((_QWORD *)&v147 + 1) )
          (*((void (__fastcall **)(_QWORD))&v147 + 1))(*((_QWORD *)&v146 + 1));
      }
    }
  }
  PnpQueryDeviceText(*(_QWORD *)(MaxDataSize + 32), 0, v9, &v137);
  PnpQueryDeviceText(*(_QWORD *)(MaxDataSize + 32), 1, v10, &v141);
  v11 = PnpQueryID(MaxDataSize, 3LL, &v132, &v122);
  GloballyUniqueId = v11;
  if ( v7 )
  {
    if ( v11 == -1073741637 )
    {
      PipSetDevNodeProblem(MaxDataSize, 9LL, 3221225659LL);
      PipSetDevNodeFlags(*(_QWORD *)(MaxDataSize + 16), 0x200000);
      PnpSetInvalidIDEvent(*(_QWORD *)(MaxDataSize + 16) + 40LL);
    }
  }
  else if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || *(_DWORD *)(MaxDataSize + 404) != 9 )
  {
    v76 = *(_QWORD **)(MaxDataSize + 16);
    if ( v76 != IopRootDeviceNode )
    {
      v77 = v132;
      GloballyUniqueId = PipMakeGloballyUniqueId(v76[4], v132, &P);
      if ( v77 )
        ExFreePoolWithTag(v77, 0);
      v13 = (WCHAR *)P;
      v132 = P;
      goto LABEL_17;
    }
  }
  v13 = (WCHAR *)v132;
LABEL_17:
  v14 = (_DWORD *)(MaxDataSize + 396);
  v15 = (_DWORD *)(MaxDataSize + 396);
  v124 = (_DWORD *)(MaxDataSize + 396);
  while ( 1 )
  {
    if ( GloballyUniqueId < 0 )
    {
      v88 = (*v15 & 0x2000) == 0;
      LODWORD(v121) = GloballyUniqueId;
      if ( v88 || (v14 = v15, *(_DWORD *)(MaxDataSize + 404) != 9) )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v89 = 3LL;
          v90 = 3221225626LL;
        }
        else
        {
          v90 = (unsigned int)GloballyUniqueId;
          v89 = 19LL;
        }
        PipSetDevNodeProblem(MaxDataSize, v89, v90);
        v14 = v15;
      }
    }
    v18 = PiBuildDeviceNodeInstancePath(MaxDataSize, v134, Str, v13);
    if ( v18 >= 0 )
    {
      if ( (byte_140C0E10B & 8) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v17, v16, v19, MaxDataSize, *(_QWORD *)(MaxDataSize + 48));
      v20 = PiCreateDeviceInstanceKey(MaxDataSize, &Handle, &v119);
      v18 = v20;
      if ( v20 < 0 )
      {
        PipSetDevNodeProblem(MaxDataSize, 19LL, (unsigned int)v20);
        v118 = v119;
        v135 = Handle;
      }
      else
      {
        v118 = v119;
        v21 = 0;
        if ( v119 == 1 )
          v21 = 0x20000;
        v135 = Handle;
        v120 = v21;
      }
    }
    if ( v18 >= 0 )
      v18 = v121;
    LODWORD(v121) = v18;
    PpMarkDeviceStackExtensionFlag(v3, 16, 1);
    v22 = *(_DWORD *)(MaxDataSize + 300);
    if ( v22 == 769 )
    {
      v23 = 772;
    }
    else
    {
      if ( v22 != 770 )
        goto LABEL_31;
      v23 = 771;
    }
    PipSetDevNodeState(MaxDataSize, v23);
LABEL_31:
    v24 = (int *)(MaxDataSize + 404);
    if ( (*v14 & 0x2000) != 0 )
    {
      v91 = *v24;
      v28 = (int *)(MaxDataSize + 404);
      v122 = (unsigned int *)(MaxDataSize + 404);
      if ( v91 == 9
        || (v122 = (unsigned int *)(MaxDataSize + 404), v91 == 3)
        || (v122 = (unsigned int *)(MaxDataSize + 404), v91 == 19) )
      {
        v27 = v124;
        goto LABEL_35;
      }
    }
    if ( v118 == 1 )
      break;
    v25 = (void *)PnpDeviceObjectFromDeviceInstanceWithTag(MaxDataSize + 40, 1701867088LL);
    v26 = (ULONG_PTR)v25;
    if ( !v25 )
      goto LABEL_34;
    if ( v25 == (void *)v3 )
    {
      ObfDereferenceObjectWithTag(v25, 0x65706E50u);
      goto LABEL_34;
    }
    if ( !v7 )
    {
      PpvUtilFailDriver(0);
      IoAddTriageDumpDataBlock(v3, (PVOID)*(unsigned __int16 *)(v3 + 2));
      v95 = *(_QWORD *)(v3 + 8);
      if ( v95 )
      {
        IoAddTriageDumpDataBlock(v95, (PVOID)(unsigned int)*(__int16 *)(v95 + 2));
        v96 = (_WORD *)(*(_QWORD *)(v3 + 8) + 56LL);
        if ( *v96 )
        {
          IoAddTriageDumpDataBlock((ULONG)v96, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v3 + 8) + 56LL));
        }
      }
      v97 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
      if ( v97 )
      {
        v98 = (unsigned __int16 *)(v97 + 40);
        IoAddTriageDumpDataBlock(v97, (PVOID)0x388);
        if ( *v98 )
        {
          IoAddTriageDumpDataBlock((ULONG)v98, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v98 + 1), (PVOID)*v98);
        }
        v99 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 56LL);
        if ( *v99 )
        {
          IoAddTriageDumpDataBlock((ULONG)v99, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 56LL));
        }
        v100 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 16LL);
        if ( v100 && *(_WORD *)(v100 + 56) )
        {
          IoAddTriageDumpDataBlock(v100 + 56, (PVOID)2);
          v101 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v101 + 64), (PVOID)*(unsigned __int16 *)(v101 + 56));
        }
      }
      IoAddTriageDumpDataBlock(v26, (PVOID)*(unsigned __int16 *)(v26 + 2));
      v102 = *(_QWORD *)(v26 + 8);
      if ( v102 )
      {
        IoAddTriageDumpDataBlock(v102, (PVOID)(unsigned int)*(__int16 *)(v102 + 2));
        v103 = (_WORD *)(*(_QWORD *)(v26 + 8) + 56LL);
        if ( *v103 )
        {
          IoAddTriageDumpDataBlock((ULONG)v103, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v26 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v26 + 8) + 56LL));
        }
      }
      v104 = *(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL);
      if ( v104 )
      {
        v105 = (unsigned __int16 *)(v104 + 40);
        IoAddTriageDumpDataBlock(v104, (PVOID)0x388);
        if ( *v105 )
        {
          IoAddTriageDumpDataBlock((ULONG)v105, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v105 + 1), (PVOID)*v105);
        }
        v106 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL) + 56LL);
        if ( *v106 )
        {
          IoAddTriageDumpDataBlock((ULONG)v106, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL) + 56LL));
        }
        v107 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL) + 16LL);
        if ( v107 && *(_WORD *)(v107 + 56) )
        {
          IoAddTriageDumpDataBlock(v107 + 56, (PVOID)2);
          v108 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v108 + 64), (PVOID)*(unsigned __int16 *)(v108 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, v3, v26, 0LL);
    }
    ZwClose(v135);
    v149[1] &= ~0x40u;
    v135 = 0LL;
    Handle = 0LL;
    v7 = 0;
    PipSetDevNodeProblem(MaxDataSize, 42LL, 0LL);
    v92 = *(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL);
    PnpLogDuplicateDevice((PCWSTR)v134, v13);
    if ( (byte_140C0E10B & 0x20) != 0 )
      McTemplateK0zzzzz_EtwWriteTransfer(
        *(_QWORD *)(v92 + 16),
        v93,
        v94,
        (const wchar_t *)v134,
        Str,
        v13,
        *(const wchar_t **)(*(_QWORD *)(v92 + 16) + 48LL),
        *(const wchar_t **)(*(_QWORD *)(MaxDataSize + 16) + 48LL));
    if ( *(_QWORD *)(v92 + 16) == *(_QWORD *)(MaxDataSize + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObjectWithTag((PVOID)v26, 0x65706E50u);
    GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 32LL), v13, &P);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    v13 = (WCHAR *)P;
    v15 = v124;
    v132 = P;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v135 = Handle;
  if ( Handle && v137 )
  {
    v85 = -1LL;
    do
      ++v85;
    while ( *((_WORD *)v137 + v85) );
    CmSetDeviceRegProp(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      (__int64)Handle,
      1u,
      1u,
      (__int64)v137,
      2 * v85 + 2,
      v120);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  v118 = v119;
LABEL_34:
  v27 = v124;
  v28 = (int *)(MaxDataSize + 404);
  v122 = (unsigned int *)(MaxDataSize + 404);
  if ( (*v124 & 0x2000) != 0 )
  {
    v88 = *v24 == 42;
    v122 = (unsigned int *)(MaxDataSize + 404);
    if ( v88 )
    {
      PipClearDevNodeProblem(MaxDataSize);
      v122 = (unsigned int *)(MaxDataSize + 404);
    }
  }
LABEL_35:
  v29 = v135;
  v30 = v118;
  if ( v135 )
  {
    if ( v118 != 1 )
      PnpClearDeviceTemporaryProperties(*(_QWORD *)(MaxDataSize + 48));
    v31 = v120;
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)DEVPKEY_Device_LastKnownParent,
      18,
      *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 40LL) + 2,
      v120);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v145,
      8,
      v31);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v31);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v31);
  }
  else
  {
    v31 = v120;
  }
  if ( (v149[1] & 0x4000) != 0 && ((*v27 & 0x2000) == 0 || *v28 != 1 && *v28 != 14) )
    PnpDisableDevice(MaxDataSize, 29LL);
  if ( (*v27 & 0x2000) == 0 )
  {
    v32 = v121;
    goto LABEL_42;
  }
  v109 = *v28;
  v32 = v121;
  v118 = v121;
  if ( v109 != 9 )
  {
    v118 = v121;
    if ( v109 != 3 )
    {
      v118 = v121;
      if ( v109 != 19 )
      {
LABEL_42:
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        v29 = Handle;
        if ( Handle && v141 )
        {
          v80 = -1LL;
          do
            ++v80;
          while ( *((_WORD *)v141 + v80) );
          CmSetDeviceRegProp(
            *(__int64 *)&PiPnpRtlCtx,
            *(_QWORD *)(MaxDataSize + 48),
            (__int64)Handle,
            0xEu,
            1u,
            (__int64)v141,
            2 * v80 + 2,
            v31);
        }
        v30 = v119;
        PnpSaveDeviceCapabilities(MaxDataSize, v149, v119 == 1, v34);
        if ( v140 != -1 )
          PnpSetObjectProperty(
            PiPnpRtlCtx,
            *(_QWORD *)(MaxDataSize + 48),
            1,
            0LL,
            (__int64)&DEVPKEY_Device_ExtendedAddress,
            9,
            (__int64)&v140,
            8,
            v31);
        v35 = *(_QWORD *)(MaxDataSize + 48);
        v126 = 4;
        v114 = v30 == 1;
        if ( (int)CmGetDeviceRegProp(
                    PiPnpRtlCtx,
                    v35,
                    (_DWORD)v29,
                    11,
                    (__int64)&v136,
                    (__int64)&v116,
                    (__int64)&v126,
                    0) >= 0
          && v136 == 4
          && v126 == 4 )
        {
          v36 = v116;
          if ( (v116 & 0x20) == 0 )
          {
            if ( (v116 & 0x40) == 0 )
            {
LABEL_51:
              v37 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(MaxDataSize + 32), MaxDataSize + 40);
              v38 = v32;
              if ( v37 < 0 )
                v38 = v37;
              v118 = v38;
              if ( PnpBootMode )
              {
                *(_DWORD *)(MaxDataSize + 704) |= 0x1000u;
                v129 = 2;
              }
              else
              {
                v79 = (unsigned __int8)v128;
                if ( (v116 & 0x40000) != 0 )
                  v79 = 1;
                v128 = v79;
              }
              ExReleaseResourceLite(&PnpRegistryDeviceResource);
              KeLeaveCriticalRegion();
              goto LABEL_56;
            }
            v81 = 28LL;
LABEL_150:
            if ( (v149[1] & 0x100) != 0 )
            {
              v86 = *(_QWORD *)(MaxDataSize + 48);
              v116 = v36 | 0x400;
              CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v86, (__int64)v29, 0xBu, 4u, (__int64)&v116, 4u, v31);
            }
            else
            {
              if ( (_DWORD)v81 == 28 )
              {
                FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(
                                                             *(_QWORD *)(MaxDataSize + 48),
                                                             v29);
                v81 = 28LL;
              }
              else
              {
                FailedInstallProblemStatus = 0LL;
              }
              PipSetDevNodeProblem(MaxDataSize, v81, FailedInstallProblemStatus);
            }
            goto LABEL_51;
          }
          v81 = 18LL;
          if ( (v116 & 1) != 0 )
            goto LABEL_150;
        }
        else
        {
          v36 = 0;
          v116 = 0;
          v81 = 1LL;
        }
        v114 = 1;
        goto LABEL_150;
      }
    }
  }
LABEL_56:
  PnpQueryID(MaxDataSize, 1LL, &v138, &v139);
  v39 = v138;
  KseAddHardwareId((PCWSTR)v138);
  PnpQueryID(MaxDataSize, 2LL, &v133, &v127);
  PnpGenerateDeviceIdsHash((__int64)v39, (__int64)v133, (_DWORD *)(MaxDataSize + 684));
  PnpIrpQueryID(*(_QWORD *)(MaxDataSize + 32), 5LL, &SourceString);
  v40 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v40, 0);
      v40 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(MaxDataSize, v39, v133, (bool *)&v117) >= 0 )
  {
    LOBYTE(v41) = v117;
    goto LABEL_63;
  }
  if ( (v149[1] & 0x20) != 0 || (v149[1] & 0x40000) != 0 || (v149[1] & 0x10) == 0 )
    LOBYTE(v41) = 0;
  else
    v41 = 1LL;
  if ( !v40 )
  {
LABEL_63:
    v42 = 0LL;
    if ( v30 != 1 )
      v42 = v29;
    if ( (int)PipGenerateContainerID(MaxDataSize, v42, v41, v40, &v142) >= 0 )
    {
      if ( v40 )
        ExFreePoolWithTag(v40, 0);
      v40 = (WCHAR *)v142;
      SourceString = v142;
    }
  }
  if ( !v40
    || (RtlInitUnicodeString(&DestinationString, v40),
        RtlGUIDFromString(&DestinationString, (GUID *)(MaxDataSize + 664)) < 0) )
  {
    *(_OWORD *)(MaxDataSize + 664) = 0LL;
  }
  v43 = KeGetCurrentThread();
  --v43->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(MaxDataSize, 32);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( Handle && SourceString )
  {
    v44 = KeGetCurrentThread();
    --v44->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(MaxDataSize + 48), (int)Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  v45 = KeGetCurrentThread();
  --v45->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v46 = Handle;
  v47 = (WCHAR *)v133;
  v48 = v138;
  if ( Handle )
  {
    v49 = v139;
    if ( v114 || v119 == 1 )
    {
      v51 = v115[0];
    }
    else
    {
      v50 = PnpCheckDeviceIdsChanged(MaxDataSize, (__int64)Handle, (const WCHAR *)v138, v139, 1, v115);
      v51 = v115[0];
      if ( v50 < 0 )
        v51 = 0;
      v115[0] = v51;
      if ( !v51 )
      {
        v52 = PnpCheckDeviceIdsChanged(MaxDataSize, (__int64)v46, v47, v127, 0, v115);
        v51 = v115[0];
        if ( v52 < 0 )
          v51 = 0;
      }
    }
    if ( v48 )
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(MaxDataSize + 48),
        (__int64)v46,
        2u,
        7u,
        (__int64)v48,
        v49,
        v120);
    v53 = v120;
    if ( v47 )
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(MaxDataSize + 48),
        (__int64)v46,
        3u,
        7u,
        (__int64)v47,
        v127,
        v120);
    if ( v51 || (_BYTE)v128 )
    {
      if ( v114 )
      {
        v111 = v116;
        v112 = BYTE4(v121);
      }
      else
      {
        v110 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(MaxDataSize + 48), v46, (char *)&v121 + 4);
        v111 = v116;
        if ( v110 < 0 )
        {
          v112 = 0;
        }
        else
        {
          v112 = BYTE4(v121);
          v111 = HIDWORD(v121) | v116;
          v116 |= HIDWORD(v121);
        }
      }
      if ( (v112 & 0x20) != 0 || (v111 & 0x40000) != 0 )
      {
        v116 = v111 & 0xFFFBFFFF;
        CmSetDeviceRegProp(
          *(__int64 *)&PiPnpRtlCtx,
          *(_QWORD *)(MaxDataSize + 48),
          (__int64)v46,
          0xBu,
          4u,
          (__int64)&v116,
          4u,
          v53);
        LOBYTE(v111) = v116;
      }
      if ( (v111 & 0x20) != 0 )
      {
        v114 = 1;
        PipSetDevNodeProblem(MaxDataSize, 18LL, 0LL);
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  v55 = v137;
  if ( v46 )
  {
    P = 0LL;
    AlternateStringData = 0;
    HIDWORD(v121) = 0;
    v57 = 0;
    if ( v137 )
    {
      v78 = -1LL;
      do
        ++v78;
      while ( *((_WORD *)v137 + v78) );
      v57 = 2 * v78 + 2;
      AlternateStringData = PnpFindAlternateStringData(v137, v57, &P, (char *)&v121 + 4);
    }
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      AlternateStringData != 0 ? 25 : 18,
      (__int64)v55,
      v57,
      v120);
    DeviceLocationStrings = PnpGetDeviceLocationStrings(MaxDataSize, &P, (char *)&v121 + 4, v58);
    v54 = 0LL;
    if ( DeviceLocationStrings >= 0 )
    {
      v60 = P;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(MaxDataSize + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)P,
        2 * HIDWORD(v121),
        v120);
      ExFreePoolWithTag(v60, 0);
    }
  }
  PnpQueryBusInformation(MaxDataSize, v54);
  v61 = PiDmaGuardProcessNewDeviceNode(MaxDataSize);
  v62 = v118;
  if ( v61 < 0 )
    v62 = v61;
  if ( (v149[1] & 0x4000) == 0 && ((*v124 & 0x2000) == 0 || *v122 != 14) )
  {
    if ( v114 )
    {
      v84 = v129;
      if ( v119 == 1 )
        v84 = v129 | 1;
      if ( PiDevCfgMode )
        PiDevCfgProcessDevice(MaxDataSize, v46, v84);
    }
    else if ( v46 )
    {
      PpDevCfgProcessDeviceOperations(MaxDataSize, v46);
    }
  }
  PiQueryResourceRequirements(MaxDataSize);
  if ( (*v124 & 0x2000) == 0 || (v87 = *v122, *v122 != 22) && (v87 > 0x1D || (v113 = 537412104, !_bittest(&v113, v87))) )
    PnpIsDeviceInstanceEnabled(v46, MaxDataSize + 40, 1LL);
  if ( v46 )
  {
    LOBYTE(v63) = v119 == 1;
    PnpInitializeSessionId(MaxDataSize, v46, v63);
    LOBYTE(v64) = v119 == 1;
    PnpInitializeInheritedRestrictedSd(MaxDataSize, v46, v64);
  }
  PiQueryAndAllocateBootResources(MaxDataSize);
  if ( (*v124 & 0x2000) == 0 || (v69 = v122, *v122 != 9) && ((*v122 - 3) & 0xFFFFFFEF) != 0 )
  {
    v65 = KeGetCurrentThread();
    --v65->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    PnpSaveDeviceCapabilities(MaxDataSize, v149, v119 == 1, v66);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    PpHotSwapUpdateRemovalPolicy(MaxDataSize);
    LOBYTE(v67) = 1;
    v68 = PpDeviceRegistration(MaxDataSize + 40, v67, MaxDataSize + 56, 0);
    if ( v68 < 0 )
      PipSetDevNodeProblem(MaxDataSize, 19LL, (unsigned int)v68);
    v69 = v122;
    v46 = Handle;
    v48 = v138;
    v55 = v137;
    v47 = (WCHAR *)v133;
  }
  if ( (*v124 & 0x2000) == 0 || *v69 != 9 && *v69 != 3 )
  {
    PnpIrpDeviceEnumerated(v3);
    if ( v46 )
      PiUpdateDevicePanel(MaxDataSize, v46, v71, v72);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v70, *(_QWORD *)(MaxDataSize + 48), 1LL);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v73, *(_QWORD *)(MaxDataSize + 48), 14LL);
    PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, v3);
    PnpNewDeviceNodeDependencyCheck(MaxDataSize);
  }
  if ( v48 )
    ExFreePoolWithTag(v48, 0);
  if ( v47 )
    ExFreePoolWithTag(v47, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v46 )
    ZwClose(v46);
  if ( v132 )
    ExFreePoolWithTag(v132, 0);
  if ( v141 )
    ExFreePoolWithTag(v141, 0);
  if ( v55 )
    ExFreePoolWithTag(v55, 0);
  if ( v134 )
    ExFreePoolWithTag(v134, 0);
  v74 = v143;
  if ( v143 )
    PiPnpRtlEndOperation(v143);
  if ( (byte_140C0E10B & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      (__int64)v74,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_Stop,
      0LL,
      MaxDataSize);
  if ( *(_DWORD *)(MaxDataSize + 568) )
    PnpTraceDockDeviceEnumeration(MaxDataSize, v62);
  return v62;
}
