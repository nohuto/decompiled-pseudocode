__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  __int64 v6; // r12
  int v7; // r13d
  void *v9; // r15
  __int64 v10; // r14
  int DriverConfiguration; // ebx
  __int64 *v12; // r12
  int v13; // edx
  const WCHAR *v14; // rdx
  wchar_t *v15; // rcx
  __int64 v16; // r12
  char v17; // cl
  char v18; // al
  _BYTE *v19; // rax
  char v20; // al
  int v21; // ebx
  int v22; // eax
  __int64 v23; // rcx
  int *v24; // r12
  __int64 *i; // r12
  int *v26; // r13
  _DWORD *v27; // r12
  __int64 v28; // r10
  UNICODE_STRING v29; // xmm0
  __int64 v30; // r8
  __int64 v31; // rcx
  const WCHAR *v32; // rdi
  const WCHAR *v33; // rdi
  int v35; // eax
  char v36; // cl
  unsigned int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  char v43; // al
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp+20h] [rbp-E0h]
  int v56; // [rsp+28h] [rbp-D8h]
  int v57; // [rsp+28h] [rbp-D8h]
  int v58; // [rsp+28h] [rbp-D8h]
  int v59; // [rsp+28h] [rbp-D8h]
  int v60; // [rsp+28h] [rbp-D8h]
  int v61; // [rsp+28h] [rbp-D8h]
  int v62; // [rsp+28h] [rbp-D8h]
  int v63; // [rsp+28h] [rbp-D8h]
  int v64; // [rsp+28h] [rbp-D8h]
  int v65; // [rsp+28h] [rbp-D8h]
  int v66; // [rsp+28h] [rbp-D8h]
  int v67; // [rsp+28h] [rbp-D8h]
  int v68; // [rsp+28h] [rbp-D8h]
  char v69; // [rsp+60h] [rbp-A0h] BYREF
  char v70; // [rsp+61h] [rbp-9Fh] BYREF
  char v71; // [rsp+62h] [rbp-9Eh] BYREF
  char v72; // [rsp+63h] [rbp-9Dh]
  int v73; // [rsp+64h] [rbp-9Ch] BYREF
  char v74[4]; // [rsp+68h] [rbp-98h] BYREF
  int v75; // [rsp+6Ch] [rbp-94h] BYREF
  int v76; // [rsp+70h] [rbp-90h] BYREF
  int v77; // [rsp+74h] [rbp-8Ch]
  int v78; // [rsp+78h] [rbp-88h] BYREF
  int v79; // [rsp+7Ch] [rbp-84h] BYREF
  int v80; // [rsp+80h] [rbp-80h]
  int v81; // [rsp+84h] [rbp-7Ch]
  __int64 v82; // [rsp+88h] [rbp-78h]
  unsigned int v83; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v85; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING String2; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v87; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v88; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v89; // [rsp+D4h] [rbp-2Ch]
  int v90; // [rsp+D8h] [rbp-28h] BYREF
  int v91; // [rsp+DCh] [rbp-24h] BYREF
  int *v92; // [rsp+E0h] [rbp-20h]
  _DWORD *v93; // [rsp+E8h] [rbp-18h]
  UNICODE_STRING UnicodeString; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v95; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v96; // [rsp+110h] [rbp+10h] BYREF
  PCWSTR Buffer; // [rsp+120h] [rbp+20h]
  PVOID P; // [rsp+128h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+130h] [rbp+30h] BYREF
  __int64 v100; // [rsp+138h] [rbp+38h]
  PCWSTR SourceString; // [rsp+140h] [rbp+40h]
  UNICODE_STRING DestinationString; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING v103; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING v104; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v105; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v106; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v107; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING String1; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v109; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v110; // [rsp+1C8h] [rbp+C8h] BYREF
  UNICODE_STRING v111; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v112; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v113; // [rsp+1F0h] [rbp+F0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1F8h] [rbp+F8h] BYREF
  __int128 Source2; // [rsp+228h] [rbp+128h] BYREF
  _QWORD v116[22]; // [rsp+240h] [rbp+140h] BYREF

  v82 = a1;
  v6 = a1;
  *a4 = 1024;
  v7 = 1024;
  v93 = a5;
  *a5 = 0;
  v9 = *(void **)(a2 + 16);
  v10 = a1 + 40;
  v73 = 1024;
  v92 = a4;
  Handle = 0LL;
  KeyHandle = 0LL;
  String2 = 0LL;
  *(_DWORD *)(&v111.MaximumLength + 1) = 0;
  *(_QWORD *)&v96.Length = 0LL;
  v96.Buffer = 0LL;
  *(_QWORD *)&v103.Length = 0LL;
  SourceString = 0LL;
  v103.Buffer = 0LL;
  *(_QWORD *)&v104.Length = 0LL;
  Buffer = 0LL;
  v104.Buffer = 0LL;
  *(_QWORD *)&v105.Length = 0LL;
  v105.Buffer = 0LL;
  *(_QWORD *)&v106.Length = 0LL;
  v106.Buffer = 0LL;
  *(_QWORD *)&v109.Length = 0LL;
  v109.Buffer = 0LL;
  *(_QWORD *)&v110.Length = 0LL;
  v110.Buffer = 0LL;
  *(_QWORD *)&v107.Length = 0LL;
  v107.Buffer = 0LL;
  v80 = 0;
  v81 = 0;
  v75 = 0;
  v90 = 0;
  v91 = 0;
  v100 = 0LL;
  Source2 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v85.Length = 0LL;
  v85.Buffer = 0LL;
  *(_QWORD *)&v87.Length = 0LL;
  v87.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  v69 = 0;
  v83 = 0;
  v88 = 0;
  v70 = 0;
  v71 = 0;
  P = 0LL;
  v89 = 0;
  v76 = 0;
  v72 = 0;
  *(_QWORD *)&v95.Length = 0LL;
  v95.Buffer = 0LL;
  v74[0] = 0;
  v78 = 0;
  v79 = 0;
  *(_DWORD *)&v111.Length = 68157440;
  v111.Buffer = (wchar_t *)ExAllocatePool2(256LL, 1040LL, 1667526736LL);
  if ( !v111.Buffer )
    goto LABEL_159;
  if ( a3 )
  {
    DriverConfiguration = PiDevCfgQueryDriverConfiguration(a3);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
    v100 = *(_QWORD *)(a3 + 264);
    if ( *(_QWORD *)(a3 + 296) && !PnpDuplicateUnicodeString((__int64)&v96, a3 + 288) )
      goto LABEL_159;
    if ( *(_QWORD *)(a3 + 312) )
    {
      if ( !PnpDuplicateUnicodeString((__int64)&v103, a3 + 304) )
        goto LABEL_159;
      SourceString = v103.Buffer;
    }
    if ( *(_QWORD *)(a3 + 328) )
    {
      if ( !PnpDuplicateUnicodeString((__int64)&v104, a3 + 320) )
        goto LABEL_159;
      Buffer = v104.Buffer;
    }
    if ( (!*(_QWORD *)(a3 + 344) || PnpDuplicateUnicodeString((__int64)&v105, a3 + 336))
      && (!*(_QWORD *)(a3 + 360) || PnpDuplicateUnicodeString((__int64)&v106, a3 + 352))
      && (!*(_QWORD *)(a3 + 392) || PnpDuplicateUnicodeString((__int64)&v107, a3 + 384)) )
    {
      v12 = *(__int64 **)(a3 + 208);
      v13 = *(_DWORD *)(a3 + 184);
      v77 = *(_DWORD *)(a3 + 400);
      v73 = v77;
      v80 = *(_DWORD *)(a3 + 404);
      v81 = v13;
      if ( v12 != (__int64 *)(a3 + 208) )
      {
        do
        {
          v35 = PiDevCfgQueryDriverConfiguration(v12);
          DriverConfiguration = v35;
          if ( v35 >= 0 )
          {
            if ( v12[37] )
            {
              *((_DWORD *)v12 + 46) &= ~1u;
            }
            else
            {
              if ( v12[39] )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(&v103);
                if ( DriverConfiguration < 0 )
                  goto LABEL_146;
              }
              if ( v12[41] )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(&v104);
                if ( DriverConfiguration < 0 )
                  goto LABEL_146;
              }
              if ( v12[43] )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(&v105);
                if ( DriverConfiguration < 0 )
                  goto LABEL_146;
              }
              if ( v12[45] )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(&v106);
                if ( DriverConfiguration < 0 )
                  goto LABEL_146;
              }
              v77 |= *((_DWORD *)v12 + 100);
              v73 = v77;
              v80 |= *((_DWORD *)v12 + 101);
              v81 |= *((_DWORD *)v12 + 46);
              DriverConfiguration = PiDevCfgAppendMultiSz(&v109);
              if ( DriverConfiguration < 0 )
                goto LABEL_146;
              DriverConfiguration = PiDevCfgAppendMultiSz(&v110);
              if ( DriverConfiguration < 0 )
                goto LABEL_146;
              if ( v12[49] )
              {
                DriverConfiguration = PiDevCfgAppendMultiSz(&v107);
                if ( DriverConfiguration < 0 )
                  goto LABEL_146;
              }
            }
          }
          else
          {
            if ( v35 != -1073740653 || !PnpBootMode || (PiDevCfgFlags & 2) == 0 )
              goto LABEL_146;
            DriverConfiguration = 0;
            v77 |= 0x400u;
            v73 = v77;
          }
          v12 = (__int64 *)*v12;
        }
        while ( v12 != (__int64 *)(a3 + 208) );
        LOBYTE(v13) = v81;
        if ( DriverConfiguration < 0 )
          goto LABEL_146;
        SourceString = v103.Buffer;
        Buffer = v104.Buffer;
      }
      v7 = v77;
      if ( (PiDevCfgFlags & 2) != 0 )
      {
        if ( (v77 & 0x400) != 0
          && (*(_BYTE *)(a3 + 424) & 2) == 0
          && (PiDevCfgOptions & 1) == 0
          && !InitIsWinPEMode
          && !PnpBootMode )
        {
          goto LABEL_194;
        }
        if ( (v13 & 0x40) != 0 )
        {
          if ( !PnpBootMode )
            goto LABEL_194;
          v7 = v77 | 0x400;
          v73 = v77 | 0x400;
        }
      }
      memset(v116, 0, 0xA8uLL);
      LODWORD(v116[1]) = 288;
      LODWORD(v116[4]) = 0x1000000;
      v116[2] = L"Description";
      LODWORD(v116[11]) = 0x1000000;
      v14 = *(const WCHAR **)(a3 + 24);
      v116[3] = &v85;
      v116[9] = L"Manufacturer";
      LODWORD(v116[8]) = 288;
      v116[10] = &v87;
      DriverConfiguration = RtlpQueryRegistryValues(3221225472LL, v14, v116, 0LL);
      if ( DriverConfiguration < 0 )
        goto LABEL_146;
      v15 = v87.Buffer;
      if ( !v85.Buffer && !v87.Buffer && *(_QWORD *)(a3 + 168) && (PiDevCfgFlags & 2) != 0 && !InitIsWinPEMode )
      {
        if ( !PnpBootMode )
          goto LABEL_194;
        v7 |= 0x400u;
        v73 = v7;
      }
      if ( !v85.Length && v85.Buffer )
      {
        RtlFreeUnicodeString(&v85);
        v15 = v87.Buffer;
      }
      if ( !v87.Length && v15 )
        RtlFreeUnicodeString(&v87);
      v16 = v100;
      if ( !v100 || (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v100, 2u, 131097, 0, (__int64)&Handle) < 0 )
        goto LABEL_218;
      memset(v116, 0, 0xA0uLL);
      v116[0] = &DEVPKEY_DeviceClass_Configurable;
      LODWORD(v116[1]) = 17;
      v116[2] = &v69;
      LODWORD(v116[6]) = 17;
      v116[5] = DEVPKEY_DeviceClass_PolicyExempt;
      v116[7] = &v70;
      LODWORD(v116[3]) = 1;
      v116[10] = &DEVPKEY_DeviceClass_DefaultService;
      v116[12] = &DestinationString;
      v116[15] = DEVPKEY_DeviceClass_CompatibleFeatureScores;
      v116[17] = &P;
      LODWORD(v116[8]) = 1;
      LODWORD(v116[11]) = 18;
      HIDWORD(v116[13]) = 6;
      LODWORD(v116[16]) = 4099;
      HIDWORD(v116[18]) = 2;
      DriverConfiguration = PiDevCfgQueryObjectProperties(2LL, v16, 2u, Handle, (__int64)v116, 4u);
      if ( DriverConfiguration < 0 )
        goto LABEL_146;
      v17 = v69;
      v18 = v70;
      if ( SLODWORD(v116[4]) < 0 )
        v17 = 0;
      v69 = v17;
      if ( SLODWORD(v116[9]) < 0 )
        v18 = 0;
      v70 = v18;
      if ( SLODWORD(v116[14]) < 0 )
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
        v17 = v69;
      }
      if ( SLODWORD(v116[19]) >= 0 )
        v89 = v116[18];
      else
        P = 0LL;
      if ( v17 )
        goto LABEL_31;
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v16,
                  2LL,
                  (__int64)Handle,
                  0LL,
                  (__int64)DEVPKEY_DeviceClass_ConfigurableClassVersion,
                  (__int64)&v78,
                  (__int64)&v83,
                  4,
                  (__int64)&v79,
                  0) >= 0
        && v78 == 7
        && v79 == 4
        && v83
        && (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a3 + 64),
                  8LL,
                  *(_QWORD *)(a3 + 16),
                  0LL,
                  (__int64)DEVPKEY_DriverPackage_ClassVersion,
                  (__int64)&v78,
                  (__int64)&v88,
                  4,
                  (__int64)&v79,
                  0) >= 0
        && v78 == 7
        && v79 == 4 )
      {
        v36 = v69;
        if ( v88 >= v83 )
          v36 = -1;
        v69 = v36;
      }
      else
      {
LABEL_218:
        v36 = v69;
      }
      if ( v36 || (PiDevCfgOptions & 1) != 0 || (PiDevCfgFlags & 2) == 0 )
      {
LABEL_31:
        v19 = P;
        if ( P )
        {
          v37 = 0;
          if ( !v89 )
            goto LABEL_227;
          do
          {
            if ( *v19 == *(_BYTE *)(a3 + 110) )
              break;
            ++v37;
            ++v19;
          }
          while ( v37 < v89 );
          if ( v37 >= v89 )
          {
LABEL_227:
            DriverConfiguration = -1073740764;
            goto LABEL_146;
          }
        }
        v6 = v82;
        goto LABEL_33;
      }
      if ( PnpBootMode )
      {
        v7 |= 0x400u;
        v73 = v7;
        goto LABEL_31;
      }
LABEL_194:
      DriverConfiguration = -1073740651;
      goto LABEL_146;
    }
LABEL_159:
    DriverConfiguration = -1073741670;
    goto LABEL_146;
  }
LABEL_33:
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    memset(v116, 0, 0xA0uLL);
    v38 = *(_QWORD *)(v10 + 8);
    v116[0] = &DEVPKEY_Device_ClassGuid;
    v116[2] = &Source2;
    LODWORD(v116[1]) = 13;
    v116[5] = DEVPKEY_Device_InstallFlags;
    v116[7] = &v76;
    v116[10] = DEVPKEY_Device_DriverNodeStrongName;
    v116[12] = &v95;
    LODWORD(v116[3]) = 16;
    LODWORD(v116[6]) = 7;
    LODWORD(v116[8]) = 4;
    LODWORD(v116[11]) = 18;
    HIDWORD(v116[13]) = 6;
    DriverConfiguration = PiDevCfgQueryObjectProperties(v39, v38, 1u, v9, (__int64)v116, 3u);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
    if ( SLODWORD(v116[4]) >= 0 )
      v72 = 1;
    else
      Source2 = 0LL;
    v40 = v76;
    if ( SLODWORD(v116[9]) < 0 )
      v40 = 0;
    v76 = v40;
    if ( SLODWORD(v116[14]) < 0 )
      RtlInitUnicodeString(&v95, 0LL);
  }
  if ( !v70 )
  {
    if ( (v76 & 4) == 0 )
      goto LABEL_36;
    if ( !a3 )
      goto LABEL_243;
    memset(v116, 0, 0xA0uLL);
    v41 = *(_QWORD *)(v10 + 8);
    v116[0] = &DEVPKEY_Device_DriverInfPath;
    v116[2] = &String1;
    LODWORD(v116[1]) = 18;
    HIDWORD(v116[3]) = 6;
    DriverConfiguration = PiDevCfgQueryObjectProperties(v42, v41, 1u, v9, (__int64)v116, 1u);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
    if ( SLODWORD(v116[4]) < 0 )
      RtlInitUnicodeString(&String1, 0LL);
    if ( String1.Buffer && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(a3 + 40), 1u) )
    {
LABEL_243:
      v43 = -1;
      v70 = -1;
    }
    else
    {
      v43 = v70;
    }
    if ( !v43 )
    {
LABEL_36:
      DriverConfiguration = PiDevCfgEnforceDevicePolicy(v6, a2, v100);
      if ( DriverConfiguration < 0 )
        goto LABEL_146;
    }
  }
  if ( Handle )
  {
    ObjectAttributes.RootDirectory = Handle;
    String2.Buffer = L"Configuration";
    *(_DWORD *)&String2.Length = 1835034;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.ObjectName = &String2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DriverConfiguration = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( DriverConfiguration != -1073741772 )
    {
      if ( DriverConfiguration < 0 )
        goto LABEL_146;
      DriverConfiguration = PiDevCfgVerifyDeviceAllowed(v6, KeyHandle);
      if ( DriverConfiguration < 0 )
        goto LABEL_146;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL) + 16LL) & 4) == 0
    || (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v10 + 8),
              1LL,
              (__int64)v9,
              0LL,
              (__int64)&DEVPKEY_Device_Reported,
              (__int64)&v78,
              (__int64)&v71,
              1,
              (__int64)&v79,
              0) >= 0
    && v78 == 17
    && v79 == 1 )
  {
    v20 = v71;
  }
  else
  {
    v20 = 0;
    v71 = 0;
  }
  if ( a3 && !v96.Buffer && !DestinationString.Buffer && !v20 && (*(_DWORD *)(v6 + 560) & 0x100) == 0 )
  {
    DriverConfiguration = -1073740652;
    goto LABEL_146;
  }
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    if ( a3 )
    {
      if ( PnpIsNullGuid(&Source2) )
        goto LABEL_44;
      v44 = (_QWORD *)(a3 + 240);
      if ( PnpIsNullGuid((void *)(a3 + 240)) )
        goto LABEL_44;
      v45 = Source2 - *v44;
      if ( (_QWORD)Source2 == *v44 )
        v45 = *((_QWORD *)&Source2 + 1) - *(_QWORD *)(a3 + 248);
      if ( !v45 )
        goto LABEL_44;
    }
    else if ( !v72 || (*(_DWORD *)(v6 + 560) & 0x100) == 0 )
    {
      CmDeleteDeviceRegKey(PiPnpRtlCtx);
    }
    CmDeleteDeviceRegKey(PiPnpRtlCtx);
  }
LABEL_44:
  v21 = v82;
  if ( (int)PiDevCfgMigrateDevice(v82, a2, a3 != 0 ? a3 + 256 : 0, a3 != 0 ? a3 + 40 : 0, (__int64)&v90, (__int64)&v91) >= 0 )
  {
    v7 |= v90;
    v73 = v7;
    v75 = v91;
  }
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgResetDeviceDriverSettings(
      v21,
      a2,
      a3 != 0 ? a3 + 240 : 0,
      (_DWORD)Handle,
      (unsigned __int64)&Source2 & -(__int64)(v72 != 0));
    if ( *(_QWORD *)&PiPnpRtlCtx && (v46 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
      v47 = *(_QWORD *)(v46 + 8);
    else
      v47 = 0LL;
    RegRtlDeleteTreeInternal(v9, L"Devices", v47, 0);
    if ( *(_QWORD *)&PiPnpRtlCtx && (v48 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
      v49 = *(_QWORD *)(v48 + 8);
    else
      v49 = 0LL;
    RegRtlDeleteTreeInternal(v9, L"Filters", v49, 0);
  }
  if ( !a3 || PnpIsNullGuid((void *)(a3 + 240)) )
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v10 + 8),
        1,
        (__int64)v9,
        v56,
        (__int64)&DEVPKEY_Device_ClassGuid,
        0,
        0LL,
        0,
        0);
  }
  else
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v10 + 8),
                            1,
                            (__int64)v9,
                            v56,
                            (__int64)&DEVPKEY_Device_ClassGuid,
                            13,
                            a3 + 240,
                            16,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
  }
  if ( v96.Buffer )
  {
    if ( v96.Length )
    {
      v22 = PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              a2,
              *(_QWORD *)(v10 + 8),
              1,
              (__int64)v9,
              v56,
              (__int64)&DEVPKEY_Device_Service,
              18,
              (__int64)v96.Buffer,
              (unsigned int)v96.Length + 2,
              0);
      goto LABEL_53;
    }
LABEL_278:
    if ( (*(_DWORD *)a2 & 1) == 0 && (v96.Buffer && DestinationString.Buffer || !v71) )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v10 + 8),
        1,
        (__int64)v9,
        v56,
        (__int64)&DEVPKEY_Device_Service,
        0,
        0LL,
        0,
        0);
    goto LABEL_54;
  }
  if ( !DestinationString.Buffer || !DestinationString.Length )
    goto LABEL_278;
  v22 = PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v10 + 8),
          1,
          (__int64)v9,
          v56,
          (__int64)&DEVPKEY_Device_Service,
          18,
          (__int64)DestinationString.Buffer,
          (unsigned int)DestinationString.Length + 2,
          0);
LABEL_53:
  DriverConfiguration = v22;
  if ( v22 < 0 )
    goto LABEL_146;
LABEL_54:
  if ( SourceString )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v10 + 8),
                            1,
                            (__int64)v9,
                            v56,
                            (__int64)&DEVPKEY_Device_LowerFilters,
                            8210,
                            (__int64)SourceString,
                            v103.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v10 + 8),
      1,
      (__int64)v9,
      v56,
      (__int64)&DEVPKEY_Device_LowerFilters,
      0,
      0LL,
      0,
      0);
  }
  if ( Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v10 + 8),
                            1,
                            (__int64)v9,
                            v56,
                            (__int64)&DEVPKEY_Device_UpperFilters,
                            8210,
                            (__int64)Buffer,
                            v104.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v10 + 8),
      1,
      (__int64)v9,
      v56,
      (__int64)&DEVPKEY_Device_UpperFilters,
      0,
      0LL,
      0,
      0);
  }
  if ( a3 && v85.Buffer )
  {
    DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v85, &UnicodeString, &v112);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
    if ( (v7 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v10 + 8),
                              1,
                              (__int64)v9,
                              v56,
                              (__int64)&DEVPKEY_Device_DeviceDesc,
                              18,
                              (__int64)UnicodeString.Buffer,
                              (unsigned int)UnicodeString.Length + 2,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_146;
    }
    if ( v113 )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v10 + 8),
                              1,
                              (__int64)v9,
                              v56,
                              (__int64)&DEVPKEY_Device_DriverDesc,
                              18,
                              v113,
                              (unsigned int)(unsigned __int16)v112 + 2,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_146;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v10 + 8),
        1,
        (__int64)v9,
        v56,
        (__int64)&DEVPKEY_Device_DriverDesc,
        0,
        0LL,
        0,
        0);
    }
    RtlFreeUnicodeString(&UnicodeString);
  }
  else if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    if ( !a3 )
      goto LABEL_299;
  }
  else
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v10 + 8),
      1,
      (__int64)v9,
      v56,
      (__int64)&DEVPKEY_Device_DriverDesc,
      0,
      0LL,
      0,
      0);
    if ( !a3 )
    {
      memset(v116, 0, 0xA0uLL);
      v50 = *(_QWORD *)(v10 + 8);
      v116[0] = &DEVPKEY_Device_BusReportedDeviceDesc;
      v116[2] = &v85;
      LODWORD(v116[1]) = 18;
      HIDWORD(v116[3]) = 6;
      if ( (int)PiDevCfgQueryObjectProperties(v51, v50, 1u, v9, (__int64)v116, 1u) >= 0
        && SLODWORD(v116[4]) >= 0
        && v85.Buffer )
      {
        DriverConfiguration = PiDevCfgSetObjectProperty(
                                PiPnpRtlCtx,
                                a2,
                                *(_QWORD *)(v10 + 8),
                                1,
                                (__int64)v9,
                                v63,
                                (__int64)&DEVPKEY_Device_DeviceDesc,
                                v116[1],
                                (__int64)v85.Buffer,
                                (unsigned int)v85.Length + 2,
                                0);
        if ( DriverConfiguration < 0 )
          goto LABEL_146;
      }
      else
      {
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v10 + 8),
          1,
          (__int64)v9,
          v63,
          (__int64)&DEVPKEY_Device_DeviceDesc,
          0,
          0LL,
          0,
          0);
      }
      goto LABEL_299;
    }
  }
  if ( !v87.Buffer )
  {
LABEL_299:
    if ( (*(_DWORD *)a2 & 1) == 0 )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v10 + 8),
        1,
        (__int64)v9,
        v56,
        (__int64)&DEVPKEY_Device_Manufacturer,
        0,
        0LL,
        0,
        0);
    goto LABEL_77;
  }
  DriverConfiguration = PiDevCfgBuildIndirectString(a3, &v87, &UnicodeString, 0LL);
  if ( DriverConfiguration < 0 )
    goto LABEL_146;
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(v10 + 8),
                          1,
                          (__int64)v9,
                          v56,
                          (__int64)&DEVPKEY_Device_Manufacturer,
                          18,
                          (__int64)UnicodeString.Buffer,
                          (unsigned int)UnicodeString.Length + 2,
                          0);
  if ( DriverConfiguration < 0 )
    goto LABEL_146;
LABEL_77:
  if ( a3 && (v23 = *(_QWORD *)(a3 + 280)) != 0 )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v10 + 8),
                            1,
                            (__int64)v9,
                            v56,
                            (__int64)&DEVPKEY_Device_DriverProvider,
                            18,
                            v23,
                            (unsigned int)*(unsigned __int16 *)(a3 + 272) + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
  }
  else
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v10 + 8),
        1,
        (__int64)v9,
        v56,
        (__int64)&DEVPKEY_Device_DriverProvider,
        0,
        0LL,
        0,
        0);
    if ( !a3 )
    {
      if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v10 + 8),
          1,
          (__int64)v9,
          v56,
          (__int64)&DEVPKEY_Device_DriverDate,
          0,
          0LL,
          0,
          0);
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v10 + 8),
          1,
          (__int64)v9,
          v64,
          (__int64)&DEVPKEY_Device_DriverVersion,
          0,
          0LL,
          0,
          0);
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v10 + 8),
          1,
          (__int64)v9,
          v65,
          (__int64)&DEVPKEY_Device_DriverInfPath,
          0,
          0LL,
          0,
          0);
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v10 + 8),
          1,
          (__int64)v9,
          v66,
          (__int64)&DEVPKEY_Device_DriverInfSection,
          0,
          0LL,
          0,
          0);
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(v10 + 8),
          1,
          (__int64)v9,
          v67,
          (__int64)DEVPKEY_Device_DriverNodeStrongName,
          0,
          0LL,
          0,
          0);
      }
      goto LABEL_88;
    }
  }
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(v10 + 8),
                          1,
                          (__int64)v9,
                          v56,
                          (__int64)&DEVPKEY_Device_DriverDate,
                          16,
                          a3 + 112,
                          8,
                          0);
  if ( DriverConfiguration < 0 )
    goto LABEL_146;
  v57 = *(unsigned __int16 *)(a3 + 120);
  LODWORD(v55) = *(unsigned __int16 *)(a3 + 122);
  DriverConfiguration = RtlUnicodeStringPrintf(
                          &v111,
                          L"%u.%u.%u.%u",
                          (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124)),
                          *(unsigned __int16 *)(a3 + 124),
                          v55);
  if ( DriverConfiguration < 0 )
    goto LABEL_146;
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(v10 + 8),
                          1,
                          (__int64)v9,
                          v57,
                          (__int64)&DEVPKEY_Device_DriverVersion,
                          18,
                          (__int64)v111.Buffer,
                          (unsigned int)v111.Length + 2,
                          0);
  if ( DriverConfiguration < 0 )
    goto LABEL_146;
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(v10 + 8),
                          1,
                          (__int64)v9,
                          v58,
                          (__int64)&DEVPKEY_Device_DriverInfPath,
                          18,
                          *(_QWORD *)(a3 + 48),
                          (unsigned int)*(unsigned __int16 *)(a3 + 40) + 2,
                          0);
  if ( DriverConfiguration < 0 )
    goto LABEL_146;
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(v10 + 8),
                          1,
                          (__int64)v9,
                          v59,
                          (__int64)&DEVPKEY_Device_DriverInfSection,
                          18,
                          *(_QWORD *)(a3 + 96),
                          (unsigned int)*(unsigned __int16 *)(a3 + 88) + 2,
                          0);
  if ( DriverConfiguration < 0 )
    goto LABEL_146;
  DriverConfiguration = PiDevCfgBuildDriverNodeStrongName(a3, &v87, &v85, &String2);
  if ( DriverConfiguration < 0 )
    goto LABEL_146;
  if ( v95.Buffer && !RtlCompareUnicodeString(&v95, &String2, 1u) )
    RtlFreeUnicodeString(&v95);
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          *(_QWORD *)(v10 + 8),
                          1,
                          (__int64)v9,
                          v60,
                          (__int64)DEVPKEY_Device_DriverNodeStrongName,
                          18,
                          (__int64)String2.Buffer,
                          (unsigned int)String2.Length + 2,
                          0);
  RtlFreeUnicodeString(&String2);
  if ( DriverConfiguration < 0 )
    goto LABEL_146;
LABEL_88:
  if ( !v95.Buffer || (v76 & 8) != 0 || (*(_DWORD *)(v82 + 396) & 0x6000) != 0 )
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v10 + 8),
        1,
        (__int64)v9,
        v56,
        (__int64)DEVPKEY_Device_RollbackDriverNode,
        0,
        0LL,
        0,
        0);
  }
  else
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v10 + 8),
                            1,
                            (__int64)v9,
                            v56,
                            (__int64)DEVPKEY_Device_RollbackDriverNode,
                            18,
                            (__int64)v95.Buffer,
                            (unsigned int)v95.Length + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
  }
  if ( v105.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v10 + 8),
                            1,
                            (__int64)v9,
                            v56,
                            (__int64)DEVPKEY_Device_DriverIncludedInfs,
                            8210,
                            (__int64)v105.Buffer,
                            v105.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v10 + 8),
      1,
      (__int64)v9,
      v56,
      (__int64)DEVPKEY_Device_DriverIncludedInfs,
      0,
      0LL,
      0,
      0);
  }
  if ( v106.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v10 + 8),
                            1,
                            (__int64)v9,
                            v56,
                            (__int64)DEVPKEY_Device_DriverIncludedConfigs,
                            8210,
                            (__int64)v106.Buffer,
                            v106.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v10 + 8),
      1,
      (__int64)v9,
      v56,
      (__int64)DEVPKEY_Device_DriverIncludedConfigs,
      0,
      0LL,
      0,
      0);
  }
  if ( v107.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v10 + 8),
                            1,
                            (__int64)v9,
                            v56,
                            (__int64)DEVPKEY_Device_DriverShimIds,
                            8210,
                            (__int64)v107.Buffer,
                            v107.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v10 + 8),
      1,
      (__int64)v9,
      v56,
      (__int64)DEVPKEY_Device_DriverShimIds,
      0,
      0LL,
      0,
      0);
  }
  if ( v109.Buffer )
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v10 + 8),
                            1,
                            (__int64)v9,
                            v56,
                            (__int64)DEVPKEY_Device_DriverExtendedInfs,
                            8210,
                            (__int64)v109.Buffer,
                            v109.Length,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
  }
  else if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v10 + 8),
      1,
      (__int64)v9,
      v56,
      (__int64)DEVPKEY_Device_DriverExtendedInfs,
      0,
      0LL,
      0,
      0);
  }
  if ( !a3 || *(_DWORD *)(a3 + 108) == -1 )
  {
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v10 + 8),
        1,
        (__int64)v9,
        v56,
        (__int64)&DEVPKEY_Device_MatchingDeviceId,
        0,
        0LL,
        0,
        0);
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v10 + 8),
        1,
        (__int64)v9,
        v68,
        (__int64)&DEVPKEY_Device_DriverRank,
        0,
        0LL,
        0,
        0);
    }
  }
  else
  {
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v10 + 8),
                            1,
                            (__int64)v9,
                            v56,
                            (__int64)&DEVPKEY_Device_MatchingDeviceId,
                            18,
                            *(_QWORD *)(a3 + 80),
                            (unsigned int)*(unsigned __int16 *)(a3 + 72) + 2,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
    DriverConfiguration = PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            a2,
                            *(_QWORD *)(v10 + 8),
                            1,
                            (__int64)v9,
                            v61,
                            (__int64)&DEVPKEY_Device_DriverRank,
                            7,
                            a3 + 108,
                            4,
                            0);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
  }
  if ( v76 )
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      a2,
      *(_QWORD *)(v10 + 8),
      1,
      (__int64)v9,
      v56,
      (__int64)DEVPKEY_Device_InstallFlags,
      0,
      0LL,
      0,
      0);
  if ( a3 )
  {
    v24 = v92;
    *v92 = v7;
    if ( (*(_DWORD *)(a3 + 184) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
      *v24 = v7 | 0x400;
    DriverConfiguration = PiDevCfgConfigureDeviceDriver(v82, a2, a3, (unsigned int)&v73, (__int64)&v75);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
    *v24 |= v73;
    *v93 |= v75;
    for ( i = *(__int64 **)(a3 + 208); i != (__int64 *)(a3 + 208); i = (__int64 *)*i )
    {
      if ( (i[23] & 1) != 0 )
      {
        DriverConfiguration = PiDevCfgConfigureDeviceDriver(v82, a2, (_DWORD)i, (unsigned int)&v73, (__int64)&v75);
        if ( DriverConfiguration < 0 )
          goto LABEL_146;
        *v92 |= v73;
        *v93 |= v75;
      }
    }
    DriverConfiguration = PiDevCfgConfigureDeviceLocation(v82, a2, &v73, &v75);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
    v26 = v92;
    v27 = v93;
    *v92 |= v73;
    *v27 |= v75;
  }
  else
  {
    v28 = v82;
    v26 = v92;
    if ( (*(_DWORD *)(v82 + 560) & 0x100) != 0 )
    {
      v27 = v93;
      *v92 = 0;
      goto LABEL_117;
    }
    *v92 = 64;
    PnpDeleteDeviceInterfaces(v10);
    v27 = v93;
  }
  v28 = v82;
LABEL_117:
  if ( v80 && !InitIsWinPEMode && (unsigned int)PipIsDevNodeDNStarted(v28) )
    *v27 |= 0x10u;
  if ( (v76 & 2) != 0 )
    *v27 |= 0x20u;
  if ( v72 )
    *v27 |= 1u;
  if ( KeyHandle )
  {
    DriverConfiguration = PiDevCfgConfigureDeviceKeys(v28, a2, (_DWORD)KeyHandle, -1, (__int64)&v73, (__int64)&v75);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
    *v26 |= v73;
    *v27 |= v75;
  }
  if ( (*v27 & 2) == 0 && v100 && Handle )
  {
    DriverConfiguration = PiDevCfgGetDeviceClassConfigFlags(v100, Handle, &v73);
    if ( DriverConfiguration < 0 )
      goto LABEL_146;
    *v26 |= v73;
  }
  if ( a3 )
    v29 = *(UNICODE_STRING *)(a3 + 408);
  else
    v29 = *(UNICODE_STRING *)&PiDevCfgEmptyString;
  v30 = *(_QWORD *)(v10 + 8);
  String2 = v29;
  DriverConfiguration = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          a2,
                          v30,
                          1,
                          (__int64)v9,
                          v56,
                          (__int64)&DEVPKEY_Device_ConfigurationId,
                          18,
                          (__int64)v29.Buffer,
                          (unsigned int)v29.Length + 2,
                          0);
  if ( DriverConfiguration >= 0 )
  {
    if ( v110.Buffer )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v10 + 8),
                              1,
                              (__int64)v9,
                              v62,
                              (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
                              8210,
                              (__int64)v110.Buffer,
                              v110.Length,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_146;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v10 + 8),
        1,
        (__int64)v9,
        v62,
        (__int64)&DEVPKEY_Device_ExtendedConfigurationIds,
        0,
        0LL,
        0,
        0);
    }
    if ( a3 && (v31 = *(_QWORD *)(a3 + 136)) != 0 )
    {
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              *(_QWORD *)(v10 + 8),
                              1,
                              (__int64)v9,
                              v62,
                              (__int64)DEVPKEY_Device_MatchingTargetComputerId,
                              18,
                              v31,
                              (unsigned int)*(unsigned __int16 *)(a3 + 128) + 2,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_146;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v10 + 8),
        1,
        (__int64)v9,
        v62,
        (__int64)DEVPKEY_Device_MatchingTargetComputerId,
        0,
        0LL,
        0,
        0);
    }
    if ( (v81 & 0x80u) != 0 )
    {
      v52 = *(_QWORD *)(v10 + 8);
      v74[0] = -1;
      DriverConfiguration = PiDevCfgSetObjectProperty(
                              PiPnpRtlCtx,
                              a2,
                              v52,
                              1,
                              (__int64)v9,
                              v62,
                              (__int64)DEVPKEY_Device_DriverInGroup,
                              17,
                              (__int64)v74,
                              1,
                              0);
      if ( DriverConfiguration < 0 )
        goto LABEL_146;
    }
    else if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(v10 + 8),
        1,
        (__int64)v9,
        v62,
        (__int64)DEVPKEY_Device_DriverInGroup,
        0,
        0LL,
        0,
        0);
    }
    if ( v96.Buffer && v96.Length )
      PipHardwareConfigActivateService(v96.Buffer);
    v32 = SourceString;
    if ( SourceString )
    {
      while ( *v32 )
      {
        PipHardwareConfigActivateService(v32);
        if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
          PiDevCfgMakeServiceBootStart(v32);
        v53 = -1LL;
        do
          ++v53;
        while ( v32[v53] );
        v32 += v53 + 1;
      }
    }
    v33 = Buffer;
    if ( Buffer )
    {
      while ( *v33 )
      {
        PipHardwareConfigActivateService(v33);
        if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
          PiDevCfgMakeServiceBootStart(v33);
        v54 = -1LL;
        do
          ++v54;
        while ( v33[v54] );
        v33 += v54 + 1;
      }
    }
  }
LABEL_146:
  RtlFreeUnicodeString(&v85);
  RtlFreeUnicodeString(&v87);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&v96);
  RtlFreeUnicodeString(&v103);
  RtlFreeUnicodeString(&v104);
  RtlFreeUnicodeString(&v105);
  RtlFreeUnicodeString(&v106);
  RtlFreeUnicodeString(&v109);
  RtlFreeUnicodeString(&v110);
  RtlFreeUnicodeString(&v107);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&String1);
  RtlFreeUnicodeString(&v95);
  if ( v111.Buffer )
    ExFreePoolWithTag(v111.Buffer, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DriverConfiguration;
}
