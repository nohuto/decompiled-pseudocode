__int64 __fastcall PipCallDriverAddDevice(__int64 BugCheckParameter2, __int64 a2)
{
  char v4; // r15
  char v5; // r13
  __int64 v6; // rax
  void *v7; // r12
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  int ObjectProperty; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  void *Pool2; // rbx
  int DeviceRegProp; // eax
  __int64 *v20; // r14
  __int64 v21; // rdi
  PVOID *v22; // rsi
  bool v23; // zf
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // eax
  char *v30; // rbx
  ULONG v31; // esi
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // r14
  unsigned __int8 i; // bl
  __int64 v38; // r15
  _QWORD *v39; // rsi
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rdx
  BOOL v43; // r9d
  unsigned int v44; // r11d
  int v45; // eax
  __int64 v46; // rdx
  _DWORD *v47; // rbx
  _DWORD *v48; // rsi
  __int64 v49; // rcx
  ULONG v51; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v52; // [rsp+64h] [rbp-9Ch] BYREF
  char v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+6Ch] [rbp-94h] BYREF
  int v55; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v57; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  _WORD v59[2]; // [rsp+90h] [rbp-70h] BYREF
  int v60; // [rsp+94h] [rbp-6Ch] BYREF
  HANDLE v61; // [rsp+98h] [rbp-68h] BYREF
  int v62; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *AttachedDeviceReferenceWithTag; // [rsp+A8h] [rbp-58h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD *v66; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-30h]
  __int64 v68[8]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[40]; // [rsp+120h] [rbp+20h] BYREF

  v53 = 0;
  v61 = 0LL;
  v54 = 0;
  v57 = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0;
  v59[0] = 0;
  v66 = 0LL;
  v51 = 0;
  v55 = 0;
  v62 = 0;
  memset(v68, 0, sizeof(v68));
  v6 = 6LL;
  v7 = 0LL;
  v67 = 6LL;
  DestinationString = 0LL;
  v52 = 0;
  AttachedDeviceReferenceWithTag = 0LL;
  v60 = 0;
  SourceString[0] = 0;
  P = 0LL;
  Object = 0LL;
  if ( !*(_BYTE *)(BugCheckParameter2 + 688) || *(_BYTE *)(a2 + 4) )
  {
    *(_BYTE *)(BugCheckParameter2 + 688) = 0;
    v8 = CmOpenDeviceRegKey(PiPnpRtlCtx, 131097, 0, (__int64)&Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_44;
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 48LL) & 0x2000000) != 0
      && ((int)PnpGetObjectProperty(
                 PiPnpRtlCtx,
                 *(_QWORD *)(BugCheckParameter2 + 48),
                 1,
                 (_DWORD)Handle,
                 0LL,
                 (__int64)&DEVPKEY_Device_DebuggerSafe,
                 (__int64)&v60,
                 (__int64)&v57,
                 4,
                 (__int64)&v52,
                 0) < 0
       || v60 != 7
       || v52 != 4
       || !v57) )
    {
      v9 = 53LL;
LABEL_11:
      v10 = 0LL;
      goto LABEL_12;
    }
    if ( *(_DWORD *)(BugCheckParameter2 + 660) == -1 )
    {
      if ( PnpQueryProximityNode
        && (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  *(_QWORD *)(BugCheckParameter2 + 48),
                  1,
                  (_DWORD)Handle,
                  0LL,
                  (__int64)&DEVPKEY_Device_Numa_Proximity_Domain,
                  (__int64)&v60,
                  (__int64)&v57,
                  4,
                  (__int64)&v52,
                  0) >= 0
        && v57 <= 0xFF
        && (int)((__int64 (__fastcall *)(_QWORD, _WORD *))PnpQueryProximityNode)(v57, v59) >= 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 660) = v59[0];
      }
      v11 = *(_DWORD *)(BugCheckParameter2 + 660);
      if ( v11 == -1 )
      {
        v12 = *(_QWORD *)(BugCheckParameter2 + 16);
        if ( !v12 )
        {
          *(_DWORD *)(BugCheckParameter2 + 660) = -2;
          goto LABEL_24;
        }
        v11 = *(_DWORD *)(v12 + 660);
        *(_DWORD *)(BugCheckParameter2 + 660) = v11;
      }
      if ( v11 != -2 )
      {
        v13 = *(_QWORD *)(BugCheckParameter2 + 48);
        v57 = v11;
        PnpSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          v13,
          1u,
          (__int64)Handle,
          0LL,
          (__int64)&DEVPKEY_Device_Numa_Node,
          7,
          (__int64)&v57,
          4u,
          0);
      }
    }
LABEL_24:
    ObjectProperty = PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       *(_QWORD *)(BugCheckParameter2 + 48),
                       1,
                       (_DWORD)Handle,
                       0LL,
                       (__int64)DEVPKEY_Device_PreventDriverLoad,
                       (__int64)&v60,
                       (__int64)&v66,
                       8,
                       (__int64)&v52,
                       0);
    if ( ((int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789)
      && (int)PnpGetStableSystemBootTime(&AttachedDeviceReferenceWithTag) >= 0 )
    {
      if ( ObjectProperty != -1073741789
        && v60 == 16
        && v52 == 8
        && !PnpBootMode
        && AttachedDeviceReferenceWithTag == v66 )
      {
        goto LABEL_43;
      }
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1u,
        (__int64)Handle,
        0LL,
        (__int64)DEVPKEY_Device_PreventDriverLoad,
        0,
        0LL,
        0,
        0);
    }
    v15 = *(_QWORD *)(BugCheckParameter2 + 48);
    v51 = 78;
    if ( (int)CmGetDeviceRegProp(
                PiPnpRtlCtx,
                v15,
                (_DWORD)Handle,
                9,
                (__int64)&v55,
                (__int64)SourceString,
                (__int64)&v51,
                0) >= 0
      && v55 == 1
      && v51 )
    {
      RtlInitUnicodeStringEx(&DestinationString, SourceString);
      if ( (_DWORD)InitSafeBootMode )
      {
        if ( !(unsigned __int8)IopSafebootDriverLoad(&DestinationString) )
        {
          v51 = 256;
          Pool2 = (void *)ExAllocatePool2(256LL, 256LL, 1852141648LL);
          if ( Pool2 )
          {
            DeviceRegProp = CmGetDeviceRegProp(
                              PiPnpRtlCtx,
                              *(_QWORD *)(BugCheckParameter2 + 48),
                              (_DWORD)Handle,
                              1,
                              (__int64)&v55,
                              (__int64)Pool2,
                              (__int64)&v51,
                              0);
            if ( DeviceRegProp == -1073741789 )
            {
              ExFreePoolWithTag(Pool2, 0);
              Pool2 = (void *)ExAllocatePool2(256LL, v51, 1852141648LL);
            }
            else if ( DeviceRegProp >= 0 )
            {
              DestinationString = 0LL;
              RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
              IopBootLog(&DestinationString);
              goto LABEL_42;
            }
          }
          IopBootLog(&DestinationString);
          if ( !Pool2 )
          {
LABEL_43:
            v8 = -1073741823;
            goto LABEL_44;
          }
LABEL_42:
          ExFreePoolWithTag(Pool2, 0);
          goto LABEL_43;
        }
        v4 = v53;
      }
      CmOpenInstallerClassRegKey(PiPnpRtlCtx, (int)SourceString, v16, v17, 131097, 0, (__int64)&v61, 0LL);
    }
    v24 = *(_QWORD *)(BugCheckParameter2 + 48);
    v51 = 4;
    if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v24, (_DWORD)Handle, 11, (__int64)&v55, (__int64)&v54, (__int64)&v51, 0) < 0
      || v55 != 4
      || v51 != 4 )
    {
      v54 = 0;
    }
    v68[1] = a2;
    v8 = 0;
    v68[0] = BugCheckParameter2;
    v51 = 512;
    P = (PVOID)ExAllocatePool2(256LL, 512LL, 1852141648LL);
    if ( !P )
    {
      v8 = -1073741670;
      goto LABEL_105;
    }
    if ( (v54 & 0x80000) != 0 )
    {
      if ( v61 )
      {
        v25 = PnpCallDriverQueryServiceHelper(
                &P,
                &v51,
                0,
                (__int64)DEVPKEY_DeviceClass_ConfigFilters,
                (__int64)SourceString,
                (__int64)v61,
                1,
                0,
                v4,
                v68);
        v8 = v25;
        if ( v25 != -1073741772 && v25 != -1073741275 && v25 < 0 )
          goto LABEL_105;
        while ( 1 )
        {
          v26 = PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  (unsigned int)SourceString,
                  2,
                  (_DWORD)v61,
                  0LL,
                  (__int64)DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                  (__int64)&v62,
                  (__int64)P,
                  v51,
                  (__int64)&v52,
                  0);
          if ( v26 != -1073741789 )
            break;
          if ( v52 <= v51 )
          {
            v8 = -1073741823;
            goto LABEL_105;
          }
          ExFreePoolWithTag(P, 0);
          v51 = v52;
          P = (PVOID)ExAllocatePool2(256LL, v52, 1852141648LL);
          if ( !P )
          {
            v8 = -1073741670;
            goto LABEL_73;
          }
        }
        v8 = v26;
        if ( v26 >= 0 )
        {
          if ( v62 == 4099 && (v52 & 7) == 0 && v52 )
          {
            v30 = (char *)P;
            v31 = v52 >> 3;
            do
            {
              ZwUpdateWnfStateData((__int64)v30, 0LL);
              v30 += 8;
              --v31;
            }
            while ( v31 );
            v9 = 56LL;
            goto LABEL_11;
          }
        }
        else
        {
          if ( v26 == -1073741772 || v26 == -1073741275 )
            v8 = 0;
LABEL_73:
          if ( v8 < 0 )
            goto LABEL_105;
        }
      }
      if ( !v68[2] )
      {
        v27 = *(_QWORD *)(BugCheckParameter2 + 48);
        v52 = 4;
        if ( (int)CmGetDeviceRegProp(
                    PiPnpRtlCtx,
                    v27,
                    (_DWORD)Handle,
                    11,
                    (__int64)&v55,
                    (__int64)&v54,
                    (__int64)&v52,
                    0) >= 0
          && v55 == 4
          && v52 == 4
          && (v54 & 0x80000) != 0 )
        {
          v28 = *(_QWORD *)(BugCheckParameter2 + 48);
          v54 &= ~0x80000u;
          CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v28, (__int64)Handle, 0xBu, 4u, (__int64)&v54, 4u, 0);
        }
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x4000000) == 0
      && ((v29 = PnpCallDriverQueryServiceHelper(
                   &P,
                   &v51,
                   19,
                   (__int64)&DEVPKEY_Device_CompoundLowerFilters,
                   *(_QWORD *)(BugCheckParameter2 + 48),
                   (__int64)Handle,
                   0,
                   1,
                   v4,
                   v68),
           v8 = v29,
           v29 == -1073741772)
       || v29 == -1073741275) )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x4000000);
    }
    else if ( v8 < 0 )
    {
LABEL_105:
      if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000) != 0 )
      {
LABEL_106:
        v8 = 0;
        goto LABEL_44;
      }
      if ( v8 < 0 )
      {
        if ( v8 != -1073741772 )
          goto LABEL_44;
        if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100) == 0 )
          goto LABEL_43;
        PipClearDevNodeProblem(BugCheckParameter2);
        v5 = 1;
      }
      else if ( *(_QWORD *)(v68[5] + 8) )
      {
        PipSetDevNodeProblem(BugCheckParameter2, 19LL, 3221225858LL);
        goto LABEL_43;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x20000000) == 0 )
      {
        v34 = PnpCallDriverQueryServiceHelper(
                &P,
                &v51,
                18,
                (__int64)&DEVPKEY_Device_CompoundUpperFilters,
                *(_QWORD *)(BugCheckParameter2 + 48),
                (__int64)Handle,
                0,
                4,
                v4,
                v68);
        v8 = v34;
        if ( v34 == -1073741772 || v34 == -1073741275 )
        {
          PipSetDevNodeFlags(BugCheckParameter2, 0x20000000);
        }
        else if ( v34 < 0 )
        {
          goto LABEL_44;
        }
      }
      if ( v61 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000000) == 0 )
      {
        v35 = PnpCallDriverQueryServiceHelper(
                &P,
                &v51,
                18,
                (__int64)&DEVPKEY_DeviceClass_CompoundUpperFilters,
                (__int64)SourceString,
                (__int64)v61,
                1,
                5,
                v4,
                v68);
        v8 = v35;
        if ( v35 == -1073741772 || v35 == -1073741275 )
        {
          PipSetDevNodeFlags(BugCheckParameter2, 0x40000000);
        }
        else if ( v35 < 0 )
        {
          goto LABEL_44;
        }
      }
      v8 = PiDmaGuardProcessPreAddDevice(v68, Handle);
      if ( v8 >= 0 )
      {
        v36 = 0LL;
        AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(
                                           *(_QWORD **)(BugCheckParameter2 + 32),
                                           0x65706E50u);
        for ( i = 0; i < 6u; ++i )
        {
          while ( 1 )
          {
            if ( i == 3 )
            {
              Object = IoGetAttachedDeviceReferenceWithTag(*(_QWORD **)(BugCheckParameter2 + 32), 0x65706E50u);
              if ( v5 )
              {
                if ( !v68[5] )
                  PipSetDevNodeState(BugCheckParameter2, 773);
              }
            }
            v38 = v68[i + 2];
            v39 = (_QWORD *)v38;
            if ( v38 )
            {
              do
              {
                v40 = PnpCallAddDevice(BugCheckParameter2, *v39, *(_QWORD *)(*(_QWORD *)(*v39 + 48LL) + 8LL), i);
                *(_DWORD *)(*v39 + 16LL) |= 0x400u;
                if ( v40 < 0 )
                {
                  if ( i == 3 )
                  {
                    v7 = AttachedDeviceReferenceWithTag;
                    IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), AttachedDeviceReferenceWithTag[3], v36, 0);
                    v10 = v44;
                    *(_DWORD *)(BugCheckParameter2 + 392) = v44;
                    v9 = 31LL;
                    goto LABEL_12;
                  }
                }
                else
                {
                  if ( i == 3 )
                    v36 = *((_QWORD *)Object + 3);
                  PipSetDevNodeState(BugCheckParameter2, 773);
                }
                v39 = (_QWORD *)v39[1];
              }
              while ( v39 );
            }
            if ( i )
              break;
            if ( !v38 )
              break;
            v41 = *(_QWORD *)(BugCheckParameter2 + 48);
            v52 = 4;
            if ( (int)CmGetDeviceRegProp(
                        PiPnpRtlCtx,
                        v41,
                        (_DWORD)Handle,
                        11,
                        (__int64)&v55,
                        (__int64)&v54,
                        (__int64)&v52,
                        0) < 0
              || v55 != 4
              || v52 != 4
              || (v54 & 0x80000) == 0 )
            {
              break;
            }
            v42 = *(_QWORD *)(BugCheckParameter2 + 48);
            v54 &= ~0x80000u;
            CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v42, (__int64)Handle, 0xBu, 4u, (__int64)&v54, 4u, 0);
            i = 1;
          }
        }
        v43 = !v36 || v5;
        v7 = AttachedDeviceReferenceWithTag;
        IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), AttachedDeviceReferenceWithTag[3], v36, v43);
        v45 = PipChangeDeviceObjectFromRegistryProperties(
                *(_QWORD *)(BugCheckParameter2 + 32),
                (_DWORD)Handle,
                (unsigned int)SourceString,
                (_DWORD)v61,
                v5);
        if ( v45 < 0 )
        {
          v10 = (unsigned int)v45;
          v9 = 50LL;
LABEL_12:
          PnpRequestDeviceRemoval(BugCheckParameter2, 0LL, v9, v10);
          v8 = -1073741106;
          goto LABEL_44;
        }
        v47 = (_DWORD *)(BugCheckParameter2 + 452);
        v48 = (_DWORD *)(BugCheckParameter2 + 448);
        if ( (int)IopQueryLegacyBusInformation(
                    *(_QWORD *)(BugCheckParameter2 + 32),
                    v46,
                    BugCheckParameter2 + 448,
                    BugCheckParameter2 + 452) < 0 )
        {
          *v48 = -1;
          *v47 = -16;
        }
        else
        {
          IopInsertLegacyBusDeviceNode(BugCheckParameter2, (unsigned int)*v48, (unsigned int)*v47);
        }
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v49, *(_QWORD *)(BugCheckParameter2 + 48), 23);
        if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100000) == 0
          || (v8 = PiProcessDriversLoadedOnSecureDevice(BugCheckParameter2), v8 >= 0) )
        {
          if ( PipDmaGuardPolicy && *(_QWORD *)(BugCheckParameter2 + 720) )
          {
            v8 = PipDmgEnforceEnumerationPolicy(BugCheckParameter2);
            goto LABEL_44;
          }
          goto LABEL_106;
        }
      }
LABEL_44:
      v6 = 6LL;
      goto LABEL_45;
    }
    if ( v61 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x8000000) == 0 )
    {
      v32 = PnpCallDriverQueryServiceHelper(
              &P,
              &v51,
              19,
              (__int64)&DEVPKEY_DeviceClass_CompoundLowerFilters,
              (__int64)SourceString,
              (__int64)v61,
              1,
              2,
              v4,
              v68);
      v8 = v32;
      if ( v32 == -1073741772 || v32 == -1073741275 )
      {
        PipSetDevNodeFlags(BugCheckParameter2, 0x8000000);
      }
      else if ( v32 < 0 )
      {
        goto LABEL_105;
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x10000000) != 0 )
    {
      v8 = -1073741772;
    }
    else
    {
      v33 = PnpCallDriverQueryServiceHelper(
              &P,
              &v51,
              5,
              0LL,
              *(_QWORD *)(BugCheckParameter2 + 48),
              (__int64)Handle,
              0,
              3,
              v4,
              v68);
      v8 = v33;
      if ( v33 == -1073741772 || v33 == -1073741275 )
      {
        v8 = -1073741772;
        PipSetDevNodeFlags(BugCheckParameter2, 0x10000000);
      }
    }
    goto LABEL_105;
  }
  v8 = -1073741823;
LABEL_45:
  v20 = &v68[2];
  do
  {
    v21 = *v20;
    if ( *v20 )
    {
      do
      {
        v22 = (PVOID *)v21;
        v21 = *(_QWORD *)(v21 + 8);
        if ( (unsigned int)Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage() )
          v23 = PnpUnusedBootDriversCleanedUp == 0;
        else
          v23 = PnPBootDriversInitialized == 0;
        if ( !v23 )
          PnpUnloadAttachedDriver(*v22);
        ObfDereferenceObject(*v22);
        ExFreePoolWithTag(v22, 0);
      }
      while ( v21 );
      v6 = v67;
    }
    ++v20;
    v67 = --v6;
  }
  while ( v6 );
  if ( Handle )
    ZwClose(Handle);
  if ( v61 )
    ZwClose(v61);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x65706E50u);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v8;
}
