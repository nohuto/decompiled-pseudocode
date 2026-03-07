__int64 __fastcall CmUpdateDevicePanel(__int64 a1, const WCHAR *a2, int a3)
{
  __int64 v3; // rdi
  _DWORD *v4; // r12
  wchar_t *v5; // r14
  void *v6; // r13
  int DevicePanelPldProperty; // eax
  int ParentDeviceContainerId; // ebx
  void *v11; // rax
  int v12; // eax
  const wchar_t *v13; // rbx
  unsigned __int16 *v14; // rax
  _DWORD *v15; // r12
  int v16; // eax
  __int64 v17; // rdx
  int v19; // ecx
  __int64 v20; // rax
  bool v21; // al
  __int64 v22; // rax
  int v23; // ecx
  __int64 Pool2; // rax
  int v25; // ebx
  __int64 i; // rdx
  void *v27; // rax
  int ObjectProperty; // eax
  PVOID v29; // rcx
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  int v35; // r8d
  int DevicePanel; // eax
  unsigned int v37; // ecx
  int v38; // eax
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // ecx
  __int64 v42; // rax
  PVOID v43; // r9
  __int64 v44; // r8
  __int64 v45; // rax
  int v46; // ecx
  __int64 v47; // rax
  int v48; // edx
  unsigned int v49; // r8d
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // [rsp+60h] [rbp-A0h] BYREF
  char v53; // [rsp+64h] [rbp-9Ch]
  char v54; // [rsp+65h] [rbp-9Bh] BYREF
  char v55; // [rsp+66h] [rbp-9Ah]
  PVOID v56; // [rsp+68h] [rbp-98h]
  unsigned int v57; // [rsp+70h] [rbp-90h] BYREF
  char v58[4]; // [rsp+74h] [rbp-8Ch] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  int v60; // [rsp+80h] [rbp-80h] BYREF
  unsigned int DevicePanelGroup; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v62; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v63; // [rsp+8Ch] [rbp-74h]
  _DWORD *v64; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v65; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v66; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v67; // [rsp+A0h] [rbp-60h]
  int v68; // [rsp+A8h] [rbp-58h] BYREF
  int v69; // [rsp+ACh] [rbp-54h] BYREF
  PVOID v70; // [rsp+B0h] [rbp-50h]
  PVOID v71; // [rsp+B8h] [rbp-48h]
  void *v72; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v73; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v74; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v75; // [rsp+E0h] [rbp-20h] BYREF
  int v76; // [rsp+F0h] [rbp-10h]
  __int128 v77; // [rsp+F8h] [rbp-8h] BYREF
  int v78; // [rsp+108h] [rbp+8h]

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  v73 = 0LL;
  v69 = 0;
  v64 = 0LL;
  v68 = 0;
  v71 = 0LL;
  v4 = 0LL;
  v63 = 0;
  v5 = 0LL;
  v56 = 0LL;
  v6 = 0LL;
  v74 = 0LL;
  v55 = 0;
  DevicePanelGroup = 0;
  v62 = 0;
  P = 0LL;
  v70 = 0LL;
  v53 = 0;
  v75 = 0LL;
  v76 = 0;
  v77 = 0LL;
  v78 = 0;
  v72 = 0LL;
  v54 = 0;
  v52 = 0;
  v65 = 0;
  v66 = 0;
  v58[0] = 0;
  v57 = 0;
  v60 = 1;
  if ( (unsigned __int8)CmIsRootDevice(a2) )
    return (unsigned int)-1073741637;
  DevicePanelPldProperty = CmQueryDevicePanelPldProperty(
                             v3,
                             (_DWORD)a2,
                             1,
                             a3,
                             (__int64)&DEVPKEY_Device_PhysicalDeviceLocation,
                             (__int64)&v73,
                             (__int64)&v69,
                             (__int64)&v64,
                             (__int64)&v68);
  ParentDeviceContainerId = DevicePanelPldProperty;
  if ( DevicePanelPldProperty == -1073741275 )
  {
    v64 = 0LL;
    goto LABEL_4;
  }
  if ( DevicePanelPldProperty < 0 )
    goto LABEL_35;
  v4 = v64;
  if ( !v64 )
    goto LABEL_4;
  ParentDeviceContainerId = CmGetParentDeviceContainerId(v3, a2, &v74);
  if ( ParentDeviceContainerId < 0 )
  {
LABEL_105:
    v4 = 0LL;
    goto LABEL_35;
  }
  v55 = 1;
  DevicePanelGroup = CmGetDevicePanelGroup(v4, 0LL);
  v23 = 0;
  if ( ((v4[2] >> 3) & 7) != 7 )
    v23 = dword_140021370[(v4[2] >> 3) & 7];
  v62 = v23;
  Pool2 = ExAllocatePool2(256LL, 114LL, 1380994640LL);
  v5 = (wchar_t *)Pool2;
  if ( !Pool2 )
  {
    ParentDeviceContainerId = -1073741801;
    goto LABEL_105;
  }
  ParentDeviceContainerId = CmBuildDevicePanelId(&v74, DevicePanelGroup, v62, Pool2);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_98;
  v25 = 16;
  for ( i = 16LL; ; i = v57 )
  {
    v67 = v25;
    v27 = (void *)ExAllocatePool2(256LL, i, 1380994640LL);
    v56 = v27;
    if ( !v27 )
    {
      ParentDeviceContainerId = -1073741801;
      goto LABEL_98;
    }
    ObjectProperty = PnpGetObjectProperty(
                       v3,
                       (_DWORD)a2,
                       1,
                       a3,
                       0LL,
                       (__int64)DEVPKEY_Device_PhysicalDeviceLocationSpatial,
                       (__int64)&v60,
                       (__int64)v27,
                       v25,
                       (__int64)&v57,
                       0);
    ParentDeviceContainerId = ObjectProperty;
    if ( ObjectProperty != -1073741789 )
      break;
    if ( v57 <= v67 )
    {
      ParentDeviceContainerId = -1073741823;
      goto LABEL_98;
    }
    ExFreePoolWithTag(v56, 0);
    v25 = v57;
  }
  if ( ObjectProperty == -1073741275 )
  {
    v29 = v56;
LABEL_91:
    ExFreePoolWithTag(v29, 0);
    v56 = 0LL;
    goto LABEL_4;
  }
  if ( ObjectProperty < 0 )
    goto LABEL_98;
  v29 = v56;
  if ( v60 != 4099 || v57 < 0x10 || (*(_BYTE *)v56 & 0x1F) == 0 )
    goto LABEL_91;
LABEL_4:
  v11 = (void *)ExAllocatePool2(256LL, 114LL, 1380994640LL);
  P = v11;
  if ( !v11 )
  {
    ParentDeviceContainerId = -1073741801;
    goto LABEL_29;
  }
  v12 = PnpGetObjectProperty(
          v3,
          (_DWORD)a2,
          1,
          a3,
          0LL,
          (__int64)&DEVPKEY_Device_PanelId,
          (__int64)&v60,
          (__int64)v11,
          114,
          (__int64)&v57,
          0);
  ParentDeviceContainerId = v12;
  if ( v12 == -1073741275 )
    goto LABEL_6;
  if ( v12 < 0 )
    goto LABEL_29;
  if ( v60 != 18 || v57 < 2 )
  {
LABEL_6:
    ExFreePoolWithTag(P, 0);
    v13 = 0LL;
    P = 0LL;
  }
  else
  {
    v13 = (const wchar_t *)P;
  }
  if ( v5 )
  {
    v21 = !v13 || wcsicmp(v13, v5);
    if ( !v13 )
      goto LABEL_65;
    v53 = v21;
    if ( !v21 )
      goto LABEL_65;
  }
  else
  {
    if ( !v13 )
      goto LABEL_9;
    v53 = 1;
  }
  ParentDeviceContainerId = CmRemovePanelDevice(v3, v13, a2);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_29;
  if ( !v5 )
  {
    v13 = (const wchar_t *)P;
    if ( !P )
      goto LABEL_9;
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelGroup, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelSide, 0, 0LL, 0, 0);
    goto LABEL_101;
  }
  v21 = v53;
LABEL_65:
  v53 = v21;
  v22 = -1LL;
  do
    ++v22;
  while ( v5[v22] );
  ParentDeviceContainerId = PnpSetObjectProperty(
                              v3,
                              (_DWORD)a2,
                              1,
                              0LL,
                              (__int64)&DEVPKEY_Device_PanelId,
                              18,
                              (__int64)v5,
                              2 * (int)v22 + 2,
                              0);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_98;
  ParentDeviceContainerId = PnpSetObjectProperty(
                              v3,
                              (_DWORD)a2,
                              1,
                              0LL,
                              (__int64)DEVPKEY_Device_PanelGroup,
                              7,
                              (__int64)&DevicePanelGroup,
                              4,
                              0);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_98;
  ParentDeviceContainerId = PnpSetObjectProperty(
                              v3,
                              (_DWORD)a2,
                              1,
                              0LL,
                              (__int64)DEVPKEY_Device_PanelSide,
                              7,
                              (__int64)&v62,
                              4,
                              0);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_98;
  if ( v4 )
  {
    if ( v56 )
    {
      v52 = (unsigned __int16)*((_DWORD *)v56 + 1);
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelWidth,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_98;
      v52 = *((unsigned __int16 *)v56 + 3);
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelHeight,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_98;
      v52 = (unsigned __int16)*((_DWORD *)v56 + 2);
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelLength,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_98;
    }
    else
    {
      v52 = (unsigned __int16)v4[1];
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelWidth,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_98;
      v52 = *((unsigned __int16 *)v4 + 3);
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelHeight,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_98;
      if ( P )
        PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
    }
    goto LABEL_76;
  }
  v13 = (const wchar_t *)P;
  if ( P )
  {
LABEL_101:
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelWidth, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelHeight, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
    if ( !v5 )
      goto LABEL_9;
  }
LABEL_76:
  if ( v4 && *((_WORD *)v4 + 9) != 0xFFFF && (unsigned __int16)v4[4] != 0xFFFF )
  {
    v14 = (unsigned __int16 *)v56;
LABEL_130:
    if ( v14 )
    {
      v52 = v14[5];
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelPositionX,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_29;
      v52 = (unsigned __int16)*((_DWORD *)v56 + 3);
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelPositionY,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_29;
      v52 = *((unsigned __int16 *)v56 + 7);
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelPositionZ,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_29;
      v13 = (const wchar_t *)P;
    }
    else
    {
      v52 = *((unsigned __int16 *)v4 + 9);
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelPositionX,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_29;
      v52 = (unsigned __int16)v4[4];
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelPositionY,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_29;
      v13 = (const wchar_t *)P;
      if ( P )
        PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelPositionZ, 0, 0LL, 0, 0);
    }
    goto LABEL_97;
  }
  v13 = (const wchar_t *)P;
LABEL_9:
  v14 = (unsigned __int16 *)v56;
  if ( v56 )
    goto LABEL_130;
  if ( v13 )
  {
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelPositionX, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelPositionY, 0, 0LL, 0, 0);
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelPositionZ, 0, 0LL, 0, 0);
LABEL_97:
    v14 = (unsigned __int16 *)v56;
  }
  if ( v5 && v4 )
  {
    if ( v14 )
    {
      v52 = ((*(_DWORD *)v14 >> 5) & 0x1FFu) % 0x168;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelRotationX,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_98;
      v52 = ((*(_DWORD *)v56 >> 14) & 0x1FFu) % 0x168;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelRotationY,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_98;
      v52 = (*(_DWORD *)v56 >> 23) % 0x168u;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelRotationZ,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_98;
      v13 = (const wchar_t *)P;
    }
    else
    {
      v52 = 45 * ((v4[3] >> 19) & 0xFu) % 0x168;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  0LL,
                                  (__int64)DEVPKEY_Device_PanelRotationZ,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_98;
      v13 = (const wchar_t *)P;
      if ( P )
      {
        PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelRotationX, 0, 0LL, 0, 0);
        PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelRotationY, 0, 0LL, 0, 0);
      }
    }
  }
  else
  {
    if ( v13 )
    {
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelRotationX, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelRotationY, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelRotationZ, 0, 0LL, 0, 0);
    }
    if ( !v5 )
      goto LABEL_15;
  }
  if ( v4 && (*v4 & 0x80u) == 0 )
  {
    v52 = (unsigned __int8)BYTE1(*v4) | (((*((unsigned __int8 *)v4 + 3) << 8) | (unsigned __int8)BYTE2(*v4)) << 8) | 0xFF000000;
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelColor,
                                7,
                                (__int64)&v52,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_98;
    v13 = (const wchar_t *)P;
    goto LABEL_51;
  }
LABEL_15:
  if ( v13 )
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelColor, 0, 0LL, 0, 0);
  if ( !v5 )
  {
LABEL_18:
    if ( v13 )
      PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelShape, 0, 0LL, 0, 0);
    if ( !v5 )
      goto LABEL_21;
    goto LABEL_56;
  }
LABEL_51:
  if ( !v4 )
    goto LABEL_18;
  v19 = 0;
  v20 = (v4[2] >> 10) & 0xF;
  if ( (unsigned int)v20 < 9 )
    v19 = dword_140021390[v20];
  v52 = v19;
  ParentDeviceContainerId = PnpSetObjectProperty(
                              v3,
                              (_DWORD)a2,
                              1,
                              0LL,
                              (__int64)DEVPKEY_Device_PanelShape,
                              7,
                              (__int64)&v52,
                              4,
                              0);
  if ( ParentDeviceContainerId < 0 )
    goto LABEL_98;
  v13 = (const wchar_t *)P;
LABEL_56:
  if ( v4 )
  {
    v58[0] = -((v4[2] & 1) != 0);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)a2,
                                1,
                                0LL,
                                (__int64)DEVPKEY_Device_PanelVisible,
                                17,
                                (__int64)v58,
                                1,
                                0);
    if ( ParentDeviceContainerId >= 0 )
      goto LABEL_58;
LABEL_98:
    ExFreePoolWithTag(v5, 0);
    goto LABEL_30;
  }
LABEL_21:
  if ( v13 )
    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelVisible, 0, 0LL, 0, 0);
  if ( v5 )
  {
LABEL_58:
    if ( v53 )
    {
      v30 = CmAddPanelDevice(v3, v5, a2);
      ParentDeviceContainerId = v30;
      if ( v30 < 0 )
        goto LABEL_98;
    }
  }
  v15 = 0LL;
  v76 = 2;
  v75 = DEVPKEY_Device_PhysicalDeviceLocationPanel;
  v78 = 2;
  v77 = DEVPKEY_Device_PhysicalDeviceLocationJoint;
  while ( 1 )
  {
    v16 = CmQueryDevicePanelPldProperty(
            v3,
            (_DWORD)a2,
            1,
            a3,
            (__int64)&v75,
            (__int64)&v73,
            (__int64)&v69,
            (__int64)&v64,
            (__int64)&v68);
    v17 = 0LL;
    ParentDeviceContainerId = v16;
    if ( v16 == -1073741275 )
      break;
    if ( v16 < 0 )
      goto LABEL_27;
    if ( !v55 )
    {
      ParentDeviceContainerId = CmGetParentDeviceContainerId(v3, a2, &v74);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_27;
      v55 = 1;
    }
    v31 = CmGetDevicePanelGroup(v64, v17);
    DevicePanelGroup = v31;
    v33 = 0LL;
    v34 = (*(_DWORD *)(v32 + 8) >> 3) & 7;
    if ( (unsigned int)v34 < 7 )
      v33 = (unsigned int)dword_140021370[v34];
    v62 = v33;
    if ( !v5 )
    {
      v5 = (wchar_t *)ExAllocatePool2(256LL, 114LL, 1380994640LL);
      if ( !v5 )
        goto LABEL_173;
      v31 = DevicePanelGroup;
      v33 = v62;
    }
    ParentDeviceContainerId = CmBuildDevicePanelId(&v74, v31, v33, v5);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_27;
    DevicePanel = CmCreateDevicePanel(v3, (_DWORD)v5, v35, (unsigned int)&v72, (__int64)&v54);
    v6 = v72;
    ParentDeviceContainerId = DevicePanel;
    if ( DevicePanel < 0 )
      goto LABEL_27;
    v52 = (unsigned __int16)v64[1];
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_Width,
                                7,
                                (__int64)&v52,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_27;
    v52 = *((unsigned __int16 *)v64 + 3);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_Height,
                                7,
                                (__int64)&v52,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_27;
    if ( (*v64 & 0x80u) != 0 )
    {
      if ( !v54 )
        PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_Color, 0, 0LL, 0, 0);
    }
    else
    {
      v52 = (unsigned __int8)BYTE1(*v64) | (((*((unsigned __int8 *)v64 + 3) << 8) | (unsigned __int8)BYTE2(*v64)) << 8) | 0xFF000000;
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)v5,
                                  6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_Color,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_27;
    }
    v37 = v63;
    if ( !v15 )
      v37 = 16;
    v63 = v37;
    v71 = v15;
    if ( v15 )
      goto LABEL_169;
    while ( 1 )
    {
      v71 = (PVOID)ExAllocatePool2(256LL, v37, 1380994640LL);
      v15 = v71;
      if ( !v71 )
      {
LABEL_173:
        ParentDeviceContainerId = -1073741801;
        goto LABEL_27;
      }
      v37 = v63;
LABEL_169:
      v38 = PnpGetObjectProperty(
              v3,
              (_DWORD)a2,
              1,
              a3,
              0LL,
              (__int64)&v77,
              (__int64)&v60,
              (__int64)v15,
              v37,
              (__int64)&v57,
              0);
      ParentDeviceContainerId = v38;
      if ( v38 != -1073741789 )
        break;
      if ( v57 <= v63 )
      {
        ParentDeviceContainerId = -1073741823;
        goto LABEL_27;
      }
      ExFreePoolWithTag(v15, 0);
      v37 = v57;
      v63 = v57;
    }
    if ( v38 == -1073741275 )
    {
      *v15 &= 0xFFFFFFE0;
    }
    else
    {
      if ( v38 < 0 )
        goto LABEL_27;
      if ( v60 != 4099 || v57 < 0x10 )
        *v15 &= 0xFFFFFFE0;
    }
    if ( (*v15 & 0x1F) == 0 )
    {
      if ( v54 )
        goto LABEL_232;
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointType, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePanelEdge, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetPanelId, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetPanelEdge, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionX, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionY, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetPositionX, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetPositionY, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetPositionZ, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetRotationX, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetRotationY, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointTargetRotationZ, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointMovementOrientation, 0, 0LL, 0, 0);
LABEL_231:
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin, 0, 0LL, 0, 0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointMovementPositionMax, 0, 0LL, 0, 0);
      PnpSetObjectProperty(
        v3,
        (_DWORD)v5,
        6,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementPositionStart,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointMovementPosition, 0, 0LL, 0, 0);
      goto LABEL_232;
    }
    v39 = 0;
    v40 = (*v15 >> 5) & 0xF;
    if ( v40 < 5 )
      v39 = dword_14004CE78[v40];
    v52 = v39;
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointType,
                                7,
                                (__int64)&v52,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_27;
    v41 = 0;
    v42 = (*v15 >> 9) & 7;
    if ( (unsigned int)v42 < 5 )
      v41 = dword_14004CE98[v42];
    v52 = v41;
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointSourcePanelEdge,
                                7,
                                (__int64)&v52,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_27;
    v43 = v70;
    if ( !v70 )
    {
      v70 = (PVOID)ExAllocatePool2(256LL, 114LL, 1380994640LL);
      v43 = v70;
      if ( !v70 )
        goto LABEL_173;
    }
    v44 = 0LL;
    if ( ((*v15 >> 20) & 7) != 7 )
      v44 = (unsigned int)dword_140021370[(*v15 >> 20) & 7];
    v52 = v44;
    ParentDeviceContainerId = CmBuildDevicePanelId(&v74, (unsigned __int8)(*v15 >> 12), v44, v43);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_27;
    v45 = -1LL;
    do
      ++v45;
    while ( *((_WORD *)v70 + v45) );
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPanelId,
                                18,
                                (__int64)v70,
                                2 * (int)v45 + 2,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_27;
    v46 = 0;
    v47 = (*v15 >> 23) & 7;
    if ( (unsigned int)v47 < 5 )
      v46 = dword_14004CE98[v47];
    v52 = v46;
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPanelEdge,
                                7,
                                (__int64)&v52,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_27;
    if ( *((_WORD *)v64 + 9) == 0xFFFF || (unsigned __int16)v64[4] == 0xFFFF )
    {
      if ( !v54 )
      {
        PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionX, 0, 0LL, 0, 0);
        PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionY, 0, 0LL, 0, 0);
        PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ, 0, 0LL, 0, 0);
      }
    }
    else
    {
      v52 = *((unsigned __int16 *)v64 + 9);
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)v5,
                                  6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_27;
      v52 = (unsigned __int16)v64[4];
      ParentDeviceContainerId = PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)v5,
                                  6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
                                  7,
                                  (__int64)&v52,
                                  4,
                                  0);
      if ( ParentDeviceContainerId < 0 )
        goto LABEL_27;
      if ( !v54 )
        PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ, 0, 0LL, 0, 0);
    }
    v52 = (unsigned __int16)v15[2];
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPositionX,
                                7,
                                (__int64)&v52,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_27;
    v52 = *((unsigned __int16 *)v15 + 5);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPositionY,
                                7,
                                (__int64)&v52,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_27;
    v52 = (unsigned __int16)v15[3];
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetPositionZ,
                                7,
                                (__int64)&v52,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_27;
    v48 = (1813430637 * (unsigned __int64)(*((_WORD *)v15 + 7) & 0x1FF)) >> 32;
    v52 = (*((_WORD *)v15 + 7) & 0x1FF) - 360 * ((v48 + (((*((_WORD *)v15 + 7) & 0x1FFu) - v48) >> 1)) >> 8);
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointTargetRotationZ,
                                7,
                                (__int64)&v52,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_27;
    v52 = dword_14004CE90[(unsigned __int64)(unsigned int)*v15 >> 31];
    ParentDeviceContainerId = PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_JointMovementOrientation,
                                7,
                                (__int64)&v52,
                                4,
                                0);
    if ( ParentDeviceContainerId < 0 )
      goto LABEL_27;
    if ( ((*v15 >> 5) & 0xF) != 0
      && (((*v15 >> 5) & 0xF) == 1 || ((*v15 >> 5) & 0xF) == 2 || ((*v15 >> 5) & 0xFu) - 3 <= 1) )
    {
      v52 = 0;
      if ( (int)PnpSetObjectProperty(
                  v3,
                  (_DWORD)v5,
                  6,
                  0LL,
                  (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin,
                  7,
                  (__int64)&v52,
                  4,
                  0) >= 0 )
      {
        v49 = *((unsigned __int16 *)v15 + 3);
        v50 = (unsigned __int16)v15[1];
        if ( (*v15 & 0x1E0) != 0x20 )
        {
          v50 %= 0x168u;
          v49 %= 0x168u;
        }
        v65 = v49 + v50;
        if ( (int)PnpSetObjectProperty(
                    v3,
                    (_DWORD)v5,
                    6,
                    0LL,
                    (__int64)DEVPKEY_DevicePanel_JointMovementPositionMax,
                    7,
                    (__int64)&v65,
                    4,
                    0) >= 0 )
        {
          v51 = *((unsigned __int16 *)v15 + 3);
          if ( (*v15 & 0x1E0) != 0x20 )
            v51 %= 0x168u;
          v66 = v51;
          if ( (int)PnpSetObjectProperty(
                      v3,
                      (_DWORD)v5,
                      6,
                      0LL,
                      (__int64)DEVPKEY_DevicePanel_JointMovementPositionStart,
                      7,
                      (__int64)&v66,
                      4,
                      0) >= 0
            && ((int)PnpGetObjectProperty(
                       v3,
                       (_DWORD)v5,
                       6,
                       (_DWORD)v6,
                       0LL,
                       (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
                       (__int64)&v60,
                       (__int64)&v52,
                       4,
                       (__int64)&v57,
                       0) < 0
             || v60 != 7
             || v57 != 4
             || v52 > v65) )
          {
            PnpSetObjectProperty(
              v3,
              (_DWORD)v5,
              6,
              0LL,
              (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
              7,
              (__int64)&v66,
              4,
              0);
          }
        }
      }
    }
    else if ( !v54 )
    {
      goto LABEL_231;
    }
LABEL_232:
    ++v76;
    ++v78;
  }
  ParentDeviceContainerId = 0;
LABEL_27:
  if ( v6 )
    ZwClose(v6);
LABEL_29:
  if ( v5 )
    goto LABEL_98;
LABEL_30:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v70 )
    ExFreePoolWithTag(v70, 0);
  v4 = v56;
LABEL_35:
  if ( v73 )
    ExFreePoolWithTag(v73, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v71 )
    ExFreePoolWithTag(v71, 0);
  return (unsigned int)ParentDeviceContainerId;
}
