__int64 __fastcall IopInitializeBootDrivers(__int64 a1)
{
  NTSTATUS RegistryValue; // ebx
  _QWORD *v3; // r13
  int GroupOrderIndex; // eax
  unsigned int v5; // ecx
  char *v6; // rdx
  unsigned int v7; // r8d
  unsigned __int16 i; // cx
  __int64 v9; // rax
  char *v10; // rax
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // si
  __int64 v13; // r14
  UNICODE_STRING *v14; // r14
  UNICODE_STRING *v15; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v17; // rsi
  unsigned int v18; // ebx
  unsigned __int16 DriverTagPriority; // ax
  __int64 **v20; // rdx
  __int64 *j; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  unsigned __int16 v24; // r15
  __int64 v25; // r12
  _QWORD *v26; // rbx
  __int64 v27; // rsi
  _QWORD *v28; // r14
  int started; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  char v32; // r9
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rcx
  __int64 *v39; // rbx
  int v40; // eax
  __int64 v41; // rcx
  int Index; // r13d
  unsigned __int16 v43; // r15
  void **v44; // rdx
  void *v45; // rbx
  void **v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rdx
  PVOID v49; // r14
  void *v50; // rsi
  __int64 v51; // rcx
  unsigned __int16 *v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  PVOID v56; // r12
  void *dwFlags; // [rsp+20h] [rbp-E0h]
  void *v58; // [rsp+30h] [rbp-D0h]
  __int64 v59; // [rsp+30h] [rbp-D0h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  int v62; // [rsp+60h] [rbp-A0h] BYREF
  int v63; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  int v65; // [rsp+70h] [rbp-90h]
  void *v66; // [rsp+78h] [rbp-88h]
  void *v67; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v68; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING Destination; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v71[2]; // [rsp+B8h] [rbp-48h] BYREF
  const wchar_t *v72; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING String1; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t pszDest[64]; // [rsp+F0h] [rbp-10h] BYREF

  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v63 = 0;
  Handle = 0LL;
  P = 0LL;
  String2 = 0LL;
  *(_DWORD *)(&v68.MaximumLength + 1) = 0;
  String1 = 0LL;
  v71[1] = 0;
  v67 = 0LL;
  v66 = 0LL;
  v62 = 0;
  DestinationString = 0LL;
  Object = 0LL;
  PnpDiagnosticTrace(&KMPnPEvt_BootStart_Start, 0, 0LL);
  PnpDriverImageLoadPolicy = 3;
  v68.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\EarlyLaunch";
  *(_DWORD *)&v68.Length = 8388734;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v68, 0x20019u) >= 0
    || (*(_DWORD *)&v68.Length = 8257660,
        v68.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\EarlyLaunch",
        IopOpenRegistryKeyEx(&Handle, 0LL, &v68, 0x20019u) >= 0) )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"DriverLoadPolicy", 0, &P);
    ZwClose(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
        PnpDriverImageLoadPolicy = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( PnpDriverImageLoadPolicy == 8 )
  {
    PnpDriverImageLoadPolicy = 0;
  }
  else if ( (PnpDriverImageLoadPolicy & 0xFFFFFFF8) != 0 )
  {
    PnpDriverImageLoadPolicy = 3;
  }
  PipInitializeCoreDriversAndElam((UNICODE_STRING *)a1);
  PipInitComputerIds(a1);
  v71[0] = 2097182;
  v72 = L"\\FileSystem\\RAW";
  Destination.Buffer = (wchar_t *)&word_140B74130;
  *(_DWORD *)&Destination.Length = 0x20000;
  PnpInitializeBootStartDriver(
    (unsigned int)v71,
    (unsigned int)&Destination,
    (unsigned int)RawInitialize,
    0,
    a1 + 16,
    0,
    0);
  v3 = Object;
  if ( !Object )
    return 0LL;
  GroupOrderIndex = (unsigned __int16)PpInitGetGroupOrderIndex(0LL);
  IopGroupIndex = GroupOrderIndex;
  v65 = 0xFFFF;
  if ( (unsigned __int16)GroupOrderIndex == 0xFFFF )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
    {
      v5 = 16;
      goto LABEL_89;
    }
    return 0LL;
  }
  IopGroupTable = (PVOID)ExAllocatePool2(256LL, 16LL * (unsigned __int16)GroupOrderIndex, 0x6E697050u);
  v6 = (char *)IopGroupTable;
  if ( !IopGroupTable )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
    {
      v5 = 17;
      goto LABEL_89;
    }
    return 0LL;
  }
  v7 = IopGroupIndex;
  for ( i = 0; i < v7; *(_QWORD *)v10 = v10 )
  {
    v9 = i++;
    v10 = &v6[16 * v9];
    *((_QWORD *)v10 + 1) = v10;
  }
  PipInitializeDriverDependentDLLs(2, a1);
  RtlInitUnicodeString(&DestinationString, L"System Reserved");
  RtlInitUnicodeString(&String2, L"Boot Bus Extender");
  v11 = 0;
  v12 = 0;
  if ( !PiInitGroupOrderTableCount )
    goto LABEL_31;
  do
  {
    v13 = 16LL * v12;
    if ( !RtlCompareUnicodeString((PCUNICODE_STRING)((char *)PiInitGroupOrderTable + v13), &DestinationString, 1u) )
      goto LABEL_27;
    if ( !RtlCompareUnicodeString((PCUNICODE_STRING)((char *)PiInitGroupOrderTable + v13), &String2, 1u) )
    {
      LOWORD(v65) = v12;
LABEL_27:
      ++v11;
    }
    if ( v11 >= 2u )
      break;
    ++v12;
  }
  while ( v12 < (unsigned __int16)PiInitGroupOrderTableCount );
  v3 = Object;
LABEL_31:
  v14 = *(UNICODE_STRING **)(a1 + 48);
  while ( v14 != (UNICODE_STRING *)(a1 + 48) )
  {
    v15 = v14;
    v14 = *(UNICODE_STRING **)&v14->Length;
    if ( SLODWORD(v15[3].Buffer) >= 0 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 0x30uLL, 0x6E697050u);
      v17 = Pool2;
      if ( Pool2 )
      {
        Pool2[1] = Pool2;
        *Pool2 = Pool2;
        Pool2[3] = v15;
        if ( IopOpenRegistryKeyEx(&Handle, 0LL, v15 + 2, 0x20019u) >= 0 )
        {
          v17[4] = Handle;
          v18 = (unsigned __int16)PpInitGetGroupOrderIndex(Handle);
          DriverTagPriority = PipGetDriverTagPriority(Handle);
          *((_WORD *)v17 + 22) = DriverTagPriority;
          v20 = (__int64 **)((char *)IopGroupTable + 16 * v18);
          for ( j = *v20; j != (__int64 *)v20 && *((_WORD *)j + 22) <= DriverTagPriority; j = (__int64 *)*j )
            ;
          v22 = (__int64 *)j[1];
          v23 = *v22;
          if ( *(__int64 **)(*v22 + 8) != v22 )
            goto LABEL_142;
          *v17 = v23;
          v17[1] = v22;
          *(_QWORD *)(v23 + 8) = v17;
          *v22 = (__int64)v17;
        }
        else
        {
          ExFreePoolWithTag(v17, 0);
        }
      }
    }
  }
  PnpNotifyEarlyLaunchStatusUpdate(1LL);
  v24 = 0;
  if ( IopGroupIndex )
  {
    while ( 1 )
    {
      v25 = 16LL * v24;
      v26 = *(_QWORD **)((char *)IopGroupTable + v25);
      if ( v26 != (_QWORD *)((char *)IopGroupTable + v25) )
        break;
LABEL_67:
      if ( v24 == (_WORD)v65 )
      {
        IopAllocateLegacyBootResources(0LL, 0);
        IopBootConfigsReserved = 1;
        IopAllocateBootResourcesRoutine = (__int64)IopAllocateBootResources;
      }
      if ( ++v24 >= (unsigned int)IopGroupIndex )
        goto LABEL_70;
    }
    v27 = 0LL;
    while ( 2 )
    {
      Handle = (HANDLE)v26[4];
      v28 = (_QWORD *)v26[3];
      Object = v28;
      *(_QWORD *)&DestinationString.Length = v28[6];
      *((_BYTE *)v26 + 47) = 1;
      if ( (int)IopGetDriverNameFromKeyNode(Handle, &Destination) < 0 )
      {
        *((_BYTE *)v26 + 46) = 1;
LABEL_63:
        if ( !*((_BYTE *)v26 + 46) )
        {
          PnpLockDeviceActionQueue();
          PipApplyFunctionToServiceInstances(v30, (UNICODE_STRING *)(v3[6] + 24LL), v31, v32, dwFlags, (__int64)v3, v58);
          PnpUnlockDeviceActionQueue();
          PnpWaitForEmptyDeviceActionQueue();
          PnpRequestDeviceAction(0LL, 7, 0, 0LL, 0LL, 0LL, 0LL);
        }
        if ( PnpWaitForEmptyDeviceEventQueue() < 0 )
        {
          if ( HeadlessGlobals && HeadlessGlobals[1] )
          {
            v5 = 18;
            goto LABEL_89;
          }
          return 0LL;
        }
        v26 = (_QWORD *)*v26;
        if ( v26 == (_QWORD *)((char *)IopGroupTable + v25) )
          goto LABEL_67;
        continue;
      }
      break;
    }
    if ( IopGetRegistryValue(Handle, L"Group", 0, &P) >= 0 )
    {
      v28 = P;
      if ( *((_DWORD *)P + 3) )
      {
        String1.Length = *((_WORD *)P + 6);
        String1.MaximumLength = String1.Length;
        String1.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
        v27 = PipLookupGroupName(&String1);
      }
      ExFreePoolWithTag(v28, 0);
      LODWORD(v28) = (_DWORD)Object;
    }
    v3 = 0LL;
    if ( !(unsigned int)PipCheckDependencies(Handle) )
      goto LABEL_61;
    v3 = (_QWORD *)v26[2];
    Object = v3;
    if ( v3 || *((_BYTE *)v26 + 46) )
    {
LABEL_57:
      if ( !v3 )
        goto LABEL_61;
      if ( v27 )
        ++*(_DWORD *)(v27 + 28);
      v26[2] = v3;
    }
    else
    {
      started = PnpInitializeBootStartDriver(
                  (unsigned int)&Destination,
                  (int)v28 + 32,
                  *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 56LL),
                  *(_DWORD *)&DestinationString.Length,
                  a1 + 16,
                  0,
                  1);
      v3 = Object;
      *((_DWORD *)v26 + 10) = started;
      if ( v3 )
      {
        ObfReferenceObjectWithTag(v3, 0x746C6644u);
        goto LABEL_57;
      }
LABEL_61:
      *((_BYTE *)v26 + 46) = 1;
    }
    ExFreePoolWithTag(Destination.Buffer, 0);
    v27 = 0LL;
    goto LABEL_63;
  }
LABEL_70:
  PnpNotifyEarlyLaunchStatusUpdate(2LL);
  PipUnloadEarlyLaunchDrivers(a1);
  PnPBootDriversLoaded = 1;
  PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
  if ( !(unsigned int)PnpWaitForDevicesToStart() )
    goto LABEL_145;
  if ( (unsigned __int8)IopCallBootDriverReinitializationRoutines() && !(unsigned int)PnpWaitForDevicesToStart() )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
    {
      v5 = 20;
      goto LABEL_89;
    }
    return 0LL;
  }
  if ( (memicmp(*(const void **)(a1 + 184), "ramdisk(", 8uLL)
     || (int)RamdiskStart(a1) < 0
     || (unsigned int)PnpWaitForDevicesToStart())
    && ((int)VhdInitialize(a1) < 0 || (unsigned int)PnpWaitForDevicesToStart())
    && ((int)CimfsInitialize(a1) < 0 || (unsigned int)PnpWaitForDevicesToStart()) )
  {
    if ( (int)IopCreateArcNames(a1) < 0 )
      return 0LL;
    PnpBootDeviceWait(a1, 1, IopMarkBootPartition, 0LL);
    v34 = *(_QWORD *)(a1 + 240);
    PnPBootDriversInitialized = 1;
    if ( (*(_DWORD *)(v34 + 132) & 0x400) != 0
      && ((int)SbpStartLanman() < 0 || (int)SbpWaitForVmbus() < 0 || (int)SbpAddTransportToInstance() < 0) )
    {
      return 0LL;
    }
    if ( (unsigned int)Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage() )
      VhdAutoAttachVirtualDisks();
    v35 = *(_QWORD *)(a1 + 336);
    v36 = 0LL;
    if ( v35 )
    {
      v37 = PnpBootDeviceWait(
              a1,
              3,
              (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&PipCriticalDeviceWaitCallback,
              v35);
      v36 = (unsigned int)v37;
      if ( v37 < 0 )
        return 0LL;
    }
    v38 = *(_QWORD *)(a1 + 240) + 312LL;
    v39 = *(__int64 **)v38;
    if ( *(_QWORD *)v38 != v38 )
    {
      do
      {
        v38 = *((unsigned int *)v39 + 6);
        if ( (v38 & 0x80u) != 0LL )
        {
          v40 = PnpBootDeviceWait(
                  a1,
                  4,
                  (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&PipCriticalDeviceWaitCallback,
                  v39[11]);
          v36 = (unsigned int)v40;
          if ( v40 < 0 )
            return 0LL;
        }
        v39 = (__int64 *)*v39;
      }
      while ( v39 != (__int64 *)(*(_QWORD *)(a1 + 240) + 312LL) );
      if ( (int)v36 < 0 )
        return 0LL;
    }
    if ( (int)PiCreateDriverDataDirectoryRoot(v38, v36) < 0 )
      return 0LL;
    pszDest[0] = 0;
    Index = PipHardwareConfigGetIndex(v41, &v63);
    if ( Index >= 0 )
    {
      LODWORD(v59) = v63;
      Index = RtlStringCchPrintfExW(pszDest, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v59);
    }
    v43 = 0;
    if ( IopGroupIndex )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v44 = (void **)((char *)IopGroupTable + 16 * v43);
          v45 = *v44;
          if ( *v44 != v44 )
            break;
          if ( ++v43 >= (unsigned int)IopGroupIndex )
            goto LABEL_111;
        }
        if ( *((void ***)v45 + 1) != v44 )
          break;
        v46 = *(void ***)v45;
        if ( *(void **)(*(_QWORD *)v45 + 8LL) != v45 )
          break;
        *v44 = v46;
        v46[1] = v44;
        v47 = *((_QWORD *)v45 + 2);
        if ( Index >= 0
          && !*((_BYTE *)v45 + 46)
          && !*(_QWORD *)(v47 + 8)
          && *(_QWORD *)(*(_QWORD *)(v47 + 48) + 8LL)
          && (*(_DWORD *)(v47 + 16) & 0x408) == 0
          && IopGetRegistryValue(*((HANDLE *)v45 + 4), L"Start", 0, &P) >= 0 )
        {
          v49 = P;
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
          {
            v62 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            if ( !v62 )
            {
              v62 = 3;
              if ( (int)PiCreateDriverRedirectedStateKey(*(_QWORD *)(v47 + 48) + 24LL, v48, &v67) >= 0 )
              {
                v50 = v67;
              }
              else
              {
                v50 = (void *)*((_QWORD *)v45 + 4);
                v67 = v50;
              }
              if ( (int)PnpCtxRegCreateKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v50) >= 0 )
              {
                PnpCtxRegSetValue(4LL, v66, pszDest, 4u, &v62, 4u);
                PnpCtxRegCloseKey(v51, v66);
                v66 = 0LL;
                if ( (byte_140C0E10B & 1) != 0 )
                {
                  v52 = (unsigned __int16 *)(*(_QWORD *)(v47 + 48) + 24LL);
                  Object = 0LL;
                  if ( (int)PnpUnicodeStringToWstr(&Object, 0LL, v52) >= 0 )
                  {
                    v56 = Object;
                    if ( (byte_140C0E10B & 1) != 0 )
                      McTemplateK0dzd_EtwWriteTransfer(v54, v53, v55, v63, (const wchar_t *)Object, v62);
                    PnpUnicodeStringToWstrFree(v56, *(_QWORD *)(v47 + 48) + 24LL);
                  }
                }
              }
              if ( v50 != *((void **)v45 + 4) )
              {
                ZwClose(v50);
                v67 = 0LL;
              }
            }
          }
          ExFreePoolWithTag(v49, 0);
        }
        if ( v47 )
          ObfDereferenceObjectWithTag((PVOID)v47, 0x746C6644u);
        if ( *((_BYTE *)v45 + 46) )
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v45 + 3) + 48LL) + 104LL) |= 0x20000u;
        ZwClose(*((HANDLE *)v45 + 4));
        ExFreePoolWithTag(v45, 0);
      }
LABEL_142:
      __fastfail(3u);
    }
LABEL_111:
    ExFreePoolWithTag(IopGroupTable, 0);
    if ( (unsigned int)Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage() )
      PnpUnusedBootDriversCleanedUp = 1;
    PnpDiagnosticTrace(&KMPnPEvt_BootStart_Stop, 0, 0LL);
    return 1LL;
  }
  else
  {
LABEL_145:
    if ( HeadlessGlobals && HeadlessGlobals[1] )
    {
      v5 = 19;
LABEL_89:
      HdlspKernelAddLogEntry(v5, 0LL);
    }
    return 0LL;
  }
}
