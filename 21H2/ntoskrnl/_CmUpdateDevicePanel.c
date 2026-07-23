/*
 * XREFs of _CmUpdateDevicePanel @ 0x140747868
 * Callers:
 *     PiUpdateDevicePanel @ 0x140748454 (PiUpdateDevicePanel.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _CmIsRootDevice @ 0x14060FAF4 (_CmIsRootDevice.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1407482E0 (_CmQueryDevicePanelPldProperty.c)
 *     _CmGetParentDeviceContainerId @ 0x1407D09F4 (_CmGetParentDeviceContainerId.c)
 *     _CmBuildDevicePanelId @ 0x1407D2CA4 (_CmBuildDevicePanelId.c)
 *     _CmGetDevicePanelGroup @ 0x1407D425C (_CmGetDevicePanelGroup.c)
 *     _CmAddPanelDevice @ 0x14097792C (_CmAddPanelDevice.c)
 *     _CmCreateDevicePanel @ 0x140977C24 (_CmCreateDevicePanel.c)
 *     _CmRemovePanelDevice @ 0x140978C78 (_CmRemovePanelDevice.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmUpdateDevicePanel(__int64 a1, const WCHAR *a2, __int64 a3)
{
  __int64 v3; // rdi
  _DWORD *v4; // r12
  _WORD *v5; // r14
  void *v6; // r13
  int DevicePanelPldProperty; // eax
  int ParentDeviceContainerId; // ebx
  PVOID v11; // rax
  int ObjectProperty; // eax
  const wchar_t *v13; // rbx
  unsigned __int16 *v14; // rax
  _DWORD *v15; // r12
  int v16; // eax
  __int64 v17; // rdx
  char v19; // al
  __int64 v20; // rax
  int v21; // ecx
  _WORD *PoolWithTag; // rax
  int v23; // ebx
  SIZE_T i; // rdx
  PVOID v25; // rax
  PVOID v26; // rcx
  __int64 *v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned int v34; // ecx
  int v35; // r8d
  int DevicePanel; // eax
  unsigned int v37; // ebx
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // ecx
  __int64 v41; // rax
  PVOID v42; // r9
  __int64 v43; // r8
  __int64 v44; // rax
  int v45; // ecx
  __int64 v46; // rax
  unsigned int v47; // ecx
  unsigned int v48; // r8d
  unsigned int v49; // ecx
  unsigned int v50; // [rsp+60h] [rbp-A0h] BYREF
  char v51; // [rsp+64h] [rbp-9Ch] BYREF
  char v52; // [rsp+65h] [rbp-9Bh]
  char v53; // [rsp+66h] [rbp-9Ah]
  PVOID v54; // [rsp+68h] [rbp-98h]
  char v55[4]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v56; // [rsp+74h] [rbp-8Ch] BYREF
  int v57; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h]
  unsigned int DevicePanelGroup; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v60; // [rsp+8Ch] [rbp-74h] BYREF
  _DWORD *v61; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v62; // [rsp+98h] [rbp-68h]
  unsigned int v63; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v64; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v65; // [rsp+A4h] [rbp-5Ch]
  int v66; // [rsp+A8h] [rbp-58h] BYREF
  int v67; // [rsp+ACh] [rbp-54h] BYREF
  PVOID v68; // [rsp+B0h] [rbp-50h]
  PVOID v69; // [rsp+B8h] [rbp-48h]
  void *v70; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v71; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v72; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v73; // [rsp+E0h] [rbp-20h] BYREF
  int v74; // [rsp+F0h] [rbp-10h]
  __int128 v75; // [rsp+F8h] [rbp-8h] BYREF
  int v76; // [rsp+108h] [rbp+8h]

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  v71 = 0LL;
  v67 = 0;
  v61 = 0LL;
  v66 = 0;
  v69 = 0LL;
  v4 = 0LL;
  v62 = 0;
  v5 = 0LL;
  v54 = 0LL;
  v6 = 0LL;
  v72 = 0LL;
  v53 = 0;
  DevicePanelGroup = 0;
  v60 = 0;
  P = 0LL;
  v68 = 0LL;
  v52 = 0;
  v73 = 0LL;
  v74 = 0;
  v75 = 0LL;
  v76 = 0;
  v70 = 0LL;
  v51 = 0;
  v50 = 0;
  v63 = 0;
  v64 = 0;
  v55[0] = 0;
  v56 = 0;
  v57 = 1;
  if ( CmIsRootDevice(a2) )
    return (unsigned int)-1073741637;
  DevicePanelPldProperty = CmQueryDevicePanelPldProperty(
                             v3,
                             (_DWORD)a2,
                             1,
                             a3,
                             (__int64)&DEVPKEY_Device_PhysicalDeviceLocation,
                             (__int64)&v71,
                             (__int64)&v67,
                             (__int64)&v61,
                             (__int64)&v66);
  ParentDeviceContainerId = DevicePanelPldProperty;
  if ( DevicePanelPldProperty == -1073741275 )
  {
    v61 = 0LL;
    goto LABEL_4;
  }
  if ( DevicePanelPldProperty >= 0 )
  {
    v4 = v61;
    if ( !v61 )
      goto LABEL_4;
    ParentDeviceContainerId = CmGetParentDeviceContainerId(v3, a2, &v72);
    if ( ParentDeviceContainerId >= 0 )
    {
      v53 = 1;
      DevicePanelGroup = CmGetDevicePanelGroup(v4, 0LL);
      v21 = 0;
      if ( ((v4[2] >> 3) & 7) != 7 )
        v21 = dword_140020660[(v4[2] >> 3) & 7];
      v60 = v21;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x72uLL, 0x52504E50u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        ParentDeviceContainerId = CmBuildDevicePanelId(&v72, DevicePanelGroup, v60, PoolWithTag);
        if ( ParentDeviceContainerId < 0 )
          goto LABEL_28;
        v23 = 16;
        for ( i = 16LL; ; i = v56 )
        {
          v65 = v23;
          v25 = ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
          v54 = v25;
          if ( !v25 )
            goto LABEL_115;
          ParentDeviceContainerId = PnpGetObjectProperty(
                                      v3,
                                      (__int64)a2,
                                      1LL,
                                      a3,
                                      0LL,
                                      (__int64)DEVPKEY_Device_PhysicalDeviceLocationSpatial,
                                      (__int64)&v57,
                                      (__int64)v25,
                                      v23,
                                      (__int64)&v56,
                                      0);
          if ( ParentDeviceContainerId != -1073741789 )
            goto LABEL_75;
          if ( v56 <= v65 )
            break;
          ExFreePoolWithTag(v54, 0);
          v23 = v56;
        }
        ParentDeviceContainerId = -1073741823;
LABEL_75:
        if ( ParentDeviceContainerId == -1073741275 )
        {
          v26 = v54;
        }
        else
        {
          if ( ParentDeviceContainerId < 0 )
            goto LABEL_28;
          v26 = v54;
          if ( v57 == 4099 && v56 >= 0x10 && (*(_BYTE *)v54 & 0x1F) != 0 )
            goto LABEL_4;
        }
        ExFreePoolWithTag(v26, 0);
        v54 = 0LL;
LABEL_4:
        v11 = ExAllocatePoolWithTag(PagedPool, 0x72uLL, 0x52504E50u);
        P = v11;
        if ( !v11 )
        {
LABEL_115:
          ParentDeviceContainerId = -1073741801;
          goto LABEL_28;
        }
        ObjectProperty = PnpGetObjectProperty(
                           v3,
                           (__int64)a2,
                           1LL,
                           a3,
                           0LL,
                           (__int64)&DEVPKEY_Device_PanelId,
                           (__int64)&v57,
                           (__int64)v11,
                           114,
                           (__int64)&v56,
                           0);
        ParentDeviceContainerId = ObjectProperty;
        if ( ObjectProperty == -1073741275 )
          goto LABEL_6;
        if ( ObjectProperty < 0 )
          goto LABEL_28;
        if ( v57 != 18 || v56 < 2 )
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
          if ( v13 && !wcsicmp(v13, v5) )
          {
            v19 = 0;
LABEL_45:
            if ( v13 && v19 )
            {
              ParentDeviceContainerId = CmRemovePanelDevice(v3, v13, a2);
              if ( ParentDeviceContainerId < 0 )
                goto LABEL_28;
              v13 = (const wchar_t *)P;
            }
            if ( v5 )
            {
              v20 = -1LL;
              do
                ++v20;
              while ( v5[v20] );
              ParentDeviceContainerId = PnpSetObjectProperty(
                                          v3,
                                          (__int64)a2,
                                          1u,
                                          a3,
                                          0LL,
                                          (__int64)&DEVPKEY_Device_PanelId,
                                          18,
                                          (__int64)v5,
                                          2 * (int)v20 + 2,
                                          0);
              if ( ParentDeviceContainerId < 0 )
                goto LABEL_28;
              ParentDeviceContainerId = PnpSetObjectProperty(
                                          v3,
                                          (__int64)a2,
                                          1u,
                                          a3,
                                          0LL,
                                          (__int64)DEVPKEY_Device_PanelGroup,
                                          7,
                                          (__int64)&DevicePanelGroup,
                                          4u,
                                          0);
              if ( ParentDeviceContainerId < 0 )
                goto LABEL_28;
              ParentDeviceContainerId = PnpSetObjectProperty(
                                          v3,
                                          (__int64)a2,
                                          1u,
                                          a3,
                                          0LL,
                                          (__int64)DEVPKEY_Device_PanelSide,
                                          7,
                                          (__int64)&v60,
                                          4u,
                                          0);
              if ( ParentDeviceContainerId < 0 )
                goto LABEL_28;
              v13 = (const wchar_t *)P;
            }
            else
            {
              if ( !v13 )
                goto LABEL_9;
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)DEVPKEY_Device_PanelGroup, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)DEVPKEY_Device_PanelSide, 0, 0LL, 0, 0);
            }
            if ( v5 && v4 )
            {
              if ( v54 )
              {
                v50 = (unsigned __int16)*((_DWORD *)v54 + 1);
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (__int64)a2,
                                            1u,
                                            a3,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelWidth,
                                            7,
                                            (__int64)&v50,
                                            4u,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_28;
                v50 = *((unsigned __int16 *)v54 + 3);
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (__int64)a2,
                                            1u,
                                            a3,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelHeight,
                                            7,
                                            (__int64)&v50,
                                            4u,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_28;
                v50 = (unsigned __int16)*((_DWORD *)v54 + 2);
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (__int64)a2,
                                            1u,
                                            a3,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelLength,
                                            7,
                                            (__int64)&v50,
                                            4u,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_28;
                v13 = (const wchar_t *)P;
              }
              else
              {
                v50 = (unsigned __int16)v4[1];
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (__int64)a2,
                                            1u,
                                            a3,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelWidth,
                                            7,
                                            (__int64)&v50,
                                            4u,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_28;
                v50 = *((unsigned __int16 *)v4 + 3);
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (__int64)a2,
                                            1u,
                                            a3,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelHeight,
                                            7,
                                            (__int64)&v50,
                                            4u,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_28;
                v13 = (const wchar_t *)P;
                if ( P )
                  PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
              }
            }
            else if ( v13 )
            {
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)DEVPKEY_Device_PanelWidth, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)DEVPKEY_Device_PanelHeight, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
            }
            if ( v5 && v4 && *((_WORD *)v4 + 9) != 0xFFFF && (unsigned __int16)v4[4] != 0xFFFF )
            {
              v14 = (unsigned __int16 *)v54;
              goto LABEL_129;
            }
LABEL_9:
            v14 = (unsigned __int16 *)v54;
            if ( !v54 )
            {
              if ( !v13 )
              {
LABEL_11:
                if ( v5 && v4 )
                {
                  if ( v14 )
                  {
                    v50 = ((*(_DWORD *)v14 >> 5) & 0x1FFu) % 0x168;
                    ParentDeviceContainerId = PnpSetObjectProperty(
                                                v3,
                                                (__int64)a2,
                                                1u,
                                                a3,
                                                0LL,
                                                (__int64)DEVPKEY_Device_PanelRotationX,
                                                7,
                                                (__int64)&v50,
                                                4u,
                                                0);
                    if ( ParentDeviceContainerId < 0 )
                      goto LABEL_28;
                    v50 = ((*(_DWORD *)v54 >> 14) & 0x1FFu) % 0x168;
                    ParentDeviceContainerId = PnpSetObjectProperty(
                                                v3,
                                                (__int64)a2,
                                                1u,
                                                a3,
                                                0LL,
                                                (__int64)DEVPKEY_Device_PanelRotationY,
                                                7,
                                                (__int64)&v50,
                                                4u,
                                                0);
                    if ( ParentDeviceContainerId < 0 )
                      goto LABEL_28;
                    v50 = (*(_DWORD *)v54 >> 23) % 0x168u;
                    ParentDeviceContainerId = PnpSetObjectProperty(
                                                v3,
                                                (__int64)a2,
                                                1u,
                                                a3,
                                                0LL,
                                                (__int64)DEVPKEY_Device_PanelRotationZ,
                                                7,
                                                (__int64)&v50,
                                                4u,
                                                0);
                    if ( ParentDeviceContainerId < 0 )
                      goto LABEL_28;
                    v13 = (const wchar_t *)P;
                    goto LABEL_13;
                  }
                  v50 = 45 * ((v4[3] >> 19) & 0xFu) % 0x168;
                  ParentDeviceContainerId = PnpSetObjectProperty(
                                              v3,
                                              (__int64)a2,
                                              1u,
                                              a3,
                                              0LL,
                                              (__int64)DEVPKEY_Device_PanelRotationZ,
                                              7,
                                              (__int64)&v50,
                                              4u,
                                              0);
                  if ( ParentDeviceContainerId < 0 )
                    goto LABEL_28;
                  v13 = (const wchar_t *)P;
                  if ( !P )
                    goto LABEL_13;
                  PnpSetObjectProperty(
                    v3,
                    (__int64)a2,
                    1u,
                    a3,
                    0LL,
                    (__int64)DEVPKEY_Device_PanelRotationX,
                    0,
                    0LL,
                    0,
                    0);
                  v27 = DEVPKEY_Device_PanelRotationY;
                }
                else
                {
                  if ( !v13 )
                    goto LABEL_13;
                  PnpSetObjectProperty(
                    v3,
                    (__int64)a2,
                    1u,
                    a3,
                    0LL,
                    (__int64)DEVPKEY_Device_PanelRotationX,
                    0,
                    0LL,
                    0,
                    0);
                  PnpSetObjectProperty(
                    v3,
                    (__int64)a2,
                    1u,
                    a3,
                    0LL,
                    (__int64)DEVPKEY_Device_PanelRotationY,
                    0,
                    0LL,
                    0,
                    0);
                  v27 = DEVPKEY_Device_PanelRotationZ;
                }
                PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)v27, 0, 0LL, 0, 0);
LABEL_13:
                if ( !v5 || !v4 || (*v4 & 0x80u) != 0 )
                {
                  if ( v13 )
                    PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)DEVPKEY_Device_PanelColor, 0, 0LL, 0, 0);
LABEL_16:
                  if ( v5 && v4 )
                  {
                    v28 = 0;
                    v29 = (v4[2] >> 10) & 0xF;
                    if ( (unsigned int)v29 < 9 )
                      v28 = dword_140020680[v29];
                    v50 = v28;
                    ParentDeviceContainerId = PnpSetObjectProperty(
                                                v3,
                                                (__int64)a2,
                                                1u,
                                                a3,
                                                0LL,
                                                (__int64)DEVPKEY_Device_PanelShape,
                                                7,
                                                (__int64)&v50,
                                                4u,
                                                0);
                    if ( ParentDeviceContainerId < 0 )
                      goto LABEL_28;
                    v13 = (const wchar_t *)P;
                  }
                  else if ( v13 )
                  {
                    PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)DEVPKEY_Device_PanelShape, 0, 0LL, 0, 0);
                  }
                  if ( v5 && v4 )
                  {
                    v55[0] = -((v4[2] & 1) != 0);
                    ParentDeviceContainerId = PnpSetObjectProperty(
                                                v3,
                                                (__int64)a2,
                                                1u,
                                                a3,
                                                0LL,
                                                (__int64)DEVPKEY_Device_PanelVisible,
                                                17,
                                                (__int64)v55,
                                                1u,
                                                0);
                    if ( ParentDeviceContainerId < 0 )
                      goto LABEL_28;
                  }
                  else if ( v13 )
                  {
                    PnpSetObjectProperty(
                      v3,
                      (__int64)a2,
                      1u,
                      a3,
                      0LL,
                      (__int64)DEVPKEY_Device_PanelVisible,
                      0,
                      0LL,
                      0,
                      0);
                  }
                  if ( v5 )
                  {
                    if ( v52 )
                    {
                      v30 = CmAddPanelDevice(v3, v5, a2);
                      ParentDeviceContainerId = v30;
                      if ( v30 < 0 )
                        goto LABEL_28;
                    }
                  }
                  v15 = 0LL;
                  v74 = 2;
                  v73 = DEVPKEY_Device_PhysicalDeviceLocationPanel;
                  v76 = 2;
                  v75 = DEVPKEY_Device_PhysicalDeviceLocationJoint;
                  while ( 2 )
                  {
                    v16 = CmQueryDevicePanelPldProperty(
                            v3,
                            (_DWORD)a2,
                            1,
                            a3,
                            (__int64)&v73,
                            (__int64)&v71,
                            (__int64)&v67,
                            (__int64)&v61,
                            (__int64)&v66);
                    v17 = 0LL;
                    ParentDeviceContainerId = v16;
                    if ( v16 == -1073741275 )
                    {
                      ParentDeviceContainerId = 0;
                      goto LABEL_26;
                    }
                    if ( v16 < 0 )
                      goto LABEL_26;
                    if ( !v53 )
                    {
                      ParentDeviceContainerId = CmGetParentDeviceContainerId(v3, a2, &v72);
                      if ( ParentDeviceContainerId < 0 )
                        goto LABEL_26;
                      v53 = 1;
                    }
                    DevicePanelGroup = CmGetDevicePanelGroup(v61, v17);
                    v32 = DevicePanelGroup;
                    v33 = 0LL;
                    v34 = (*(_DWORD *)(v31 + 8) >> 3) & 7;
                    if ( v34 < 7 )
                      v33 = (unsigned int)dword_140020660[v34];
                    v60 = v33;
                    if ( !v5 )
                    {
                      v5 = ExAllocatePoolWithTag(PagedPool, 0x72uLL, 0x52504E50u);
                      if ( !v5 )
                        break;
                      v32 = DevicePanelGroup;
                      v33 = v60;
                    }
                    ParentDeviceContainerId = CmBuildDevicePanelId(&v72, v32, v33, v5);
                    if ( ParentDeviceContainerId < 0 )
                      goto LABEL_26;
                    DevicePanel = CmCreateDevicePanel(v3, (_DWORD)v5, v35, (unsigned int)&v70, (__int64)&v51);
                    v6 = v70;
                    ParentDeviceContainerId = DevicePanel;
                    if ( DevicePanel < 0 )
                      goto LABEL_26;
                    v50 = (unsigned __int16)v61[1];
                    ParentDeviceContainerId = PnpSetObjectProperty(
                                                v3,
                                                (__int64)v5,
                                                6u,
                                                (__int64)v70,
                                                0LL,
                                                (__int64)DEVPKEY_DevicePanel_Width,
                                                7,
                                                (__int64)&v50,
                                                4u,
                                                0);
                    if ( ParentDeviceContainerId < 0 )
                      goto LABEL_26;
                    v50 = *((unsigned __int16 *)v61 + 3);
                    ParentDeviceContainerId = PnpSetObjectProperty(
                                                v3,
                                                (__int64)v5,
                                                6u,
                                                (__int64)v6,
                                                0LL,
                                                (__int64)DEVPKEY_DevicePanel_Height,
                                                7,
                                                (__int64)&v50,
                                                4u,
                                                0);
                    if ( ParentDeviceContainerId < 0 )
                      goto LABEL_26;
                    if ( (*v61 & 0x80u) != 0 )
                    {
                      if ( !v51 )
                        PnpSetObjectProperty(
                          v3,
                          (__int64)v5,
                          6u,
                          (__int64)v6,
                          0LL,
                          (__int64)DEVPKEY_DevicePanel_Color,
                          0,
                          0LL,
                          0,
                          0);
                    }
                    else
                    {
                      v50 = (unsigned __int8)BYTE1(*v61) | (((*((unsigned __int8 *)v61 + 3) << 8) | (unsigned __int8)BYTE2(*v61)) << 8) | 0xFF000000;
                      ParentDeviceContainerId = PnpSetObjectProperty(
                                                  v3,
                                                  (__int64)v5,
                                                  6u,
                                                  (__int64)v6,
                                                  0LL,
                                                  (__int64)DEVPKEY_DevicePanel_Color,
                                                  7,
                                                  (__int64)&v50,
                                                  4u,
                                                  0);
                      if ( ParentDeviceContainerId < 0 )
                        goto LABEL_26;
                    }
                    v37 = v62;
                    if ( !v15 )
                      v37 = 16;
                    while ( 1 )
                    {
                      v62 = v37;
                      if ( !v15 )
                      {
                        v69 = ExAllocatePoolWithTag(PagedPool, v37, 0x52504E50u);
                        v15 = v69;
                        if ( !v69 )
                          goto LABEL_229;
                      }
                      ParentDeviceContainerId = PnpGetObjectProperty(
                                                  v3,
                                                  (__int64)a2,
                                                  1LL,
                                                  a3,
                                                  0LL,
                                                  (__int64)&v75,
                                                  (__int64)&v57,
                                                  (__int64)v15,
                                                  v37,
                                                  (__int64)&v56,
                                                  0);
                      if ( ParentDeviceContainerId != -1073741789 )
                        goto LABEL_172;
                      if ( v56 <= v62 )
                        break;
                      ExFreePoolWithTag(v15, 0);
                      v37 = v56;
                      v15 = 0LL;
                      v69 = 0LL;
                    }
                    ParentDeviceContainerId = -1073741823;
LABEL_172:
                    if ( ParentDeviceContainerId == -1073741275 )
                    {
                      *v15 &= 0xFFFFFFE0;
                    }
                    else
                    {
                      if ( ParentDeviceContainerId < 0 )
                        goto LABEL_26;
                      if ( v57 != 4099 || v56 < 0x10 )
                        *v15 &= 0xFFFFFFE0;
                    }
                    if ( (*v15 & 0x1F) == 0 )
                    {
                      if ( v51 )
                        goto LABEL_228;
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointType,
                        0,
                        0LL,
                        0,
                        0);
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointSourcePanelEdge,
                        0,
                        0LL,
                        0,
                        0);
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointTargetPanelId,
                        0,
                        0LL,
                        0,
                        0);
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointTargetPanelEdge,
                        0,
                        0LL,
                        0,
                        0);
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
                        0,
                        0LL,
                        0,
                        0);
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
                        0,
                        0LL,
                        0,
                        0);
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ,
                        0,
                        0LL,
                        0,
                        0);
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointTargetPositionX,
                        0,
                        0LL,
                        0,
                        0);
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointTargetPositionY,
                        0,
                        0LL,
                        0,
                        0);
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointTargetPositionZ,
                        0,
                        0LL,
                        0,
                        0);
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointTargetRotationX,
                        0,
                        0LL,
                        0,
                        0);
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointTargetRotationY,
                        0,
                        0LL,
                        0,
                        0);
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointTargetRotationZ,
                        0,
                        0LL,
                        0,
                        0);
                      PnpSetObjectProperty(
                        v3,
                        (__int64)v5,
                        6u,
                        (__int64)v6,
                        0LL,
                        (__int64)DEVPKEY_DevicePanel_JointMovementOrientation,
                        0,
                        0LL,
                        0,
                        0);
                      goto LABEL_227;
                    }
                    v38 = 0;
                    v39 = (*v15 >> 5) & 0xF;
                    if ( v39 < 5 )
                      v38 = dword_140040CF8[v39];
                    v50 = v38;
                    ParentDeviceContainerId = PnpSetObjectProperty(
                                                v3,
                                                (__int64)v5,
                                                6u,
                                                (__int64)v6,
                                                0LL,
                                                (__int64)DEVPKEY_DevicePanel_JointType,
                                                7,
                                                (__int64)&v50,
                                                4u,
                                                0);
                    if ( ParentDeviceContainerId < 0 )
                      goto LABEL_26;
                    v40 = 0;
                    v41 = (*v15 >> 9) & 7;
                    if ( (unsigned int)v41 < 5 )
                      v40 = dword_140040CD8[v41];
                    v50 = v40;
                    ParentDeviceContainerId = PnpSetObjectProperty(
                                                v3,
                                                (__int64)v5,
                                                6u,
                                                (__int64)v6,
                                                0LL,
                                                (__int64)DEVPKEY_DevicePanel_JointSourcePanelEdge,
                                                7,
                                                (__int64)&v50,
                                                4u,
                                                0);
                    if ( ParentDeviceContainerId < 0 )
                      goto LABEL_26;
                    v42 = v68;
                    if ( v68 || (v68 = ExAllocatePoolWithTag(PagedPool, 0x72uLL, 0x52504E50u), (v42 = v68) != 0LL) )
                    {
                      v43 = 0LL;
                      if ( ((*v15 >> 20) & 7) != 7 )
                        v43 = (unsigned int)dword_140020660[(*v15 >> 20) & 7];
                      v50 = v43;
                      ParentDeviceContainerId = CmBuildDevicePanelId(&v72, (unsigned __int8)(*v15 >> 12), v43, v42);
                      if ( ParentDeviceContainerId < 0 )
                        goto LABEL_26;
                      v44 = -1LL;
                      do
                        ++v44;
                      while ( *((_WORD *)v68 + v44) );
                      ParentDeviceContainerId = PnpSetObjectProperty(
                                                  v3,
                                                  (__int64)v5,
                                                  6u,
                                                  (__int64)v6,
                                                  0LL,
                                                  (__int64)DEVPKEY_DevicePanel_JointTargetPanelId,
                                                  18,
                                                  (__int64)v68,
                                                  2 * (int)v44 + 2,
                                                  0);
                      if ( ParentDeviceContainerId < 0 )
                        goto LABEL_26;
                      v45 = 0;
                      v46 = (*v15 >> 23) & 7;
                      if ( (unsigned int)v46 < 5 )
                        v45 = dword_140040CD8[v46];
                      v50 = v45;
                      ParentDeviceContainerId = PnpSetObjectProperty(
                                                  v3,
                                                  (__int64)v5,
                                                  6u,
                                                  (__int64)v6,
                                                  0LL,
                                                  (__int64)DEVPKEY_DevicePanel_JointTargetPanelEdge,
                                                  7,
                                                  (__int64)&v50,
                                                  4u,
                                                  0);
                      if ( ParentDeviceContainerId < 0 )
                        goto LABEL_26;
                      if ( *((_WORD *)v61 + 9) == 0xFFFF || (unsigned __int16)v61[4] == 0xFFFF )
                      {
                        if ( !v51 )
                        {
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ,
                            0,
                            0LL,
                            0,
                            0);
                        }
                      }
                      else
                      {
                        v50 = *((unsigned __int16 *)v61 + 9);
                        ParentDeviceContainerId = PnpSetObjectProperty(
                                                    v3,
                                                    (__int64)v5,
                                                    6u,
                                                    (__int64)v6,
                                                    0LL,
                                                    (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
                                                    7,
                                                    (__int64)&v50,
                                                    4u,
                                                    0);
                        if ( ParentDeviceContainerId < 0 )
                          goto LABEL_26;
                        v50 = (unsigned __int16)v61[4];
                        ParentDeviceContainerId = PnpSetObjectProperty(
                                                    v3,
                                                    (__int64)v5,
                                                    6u,
                                                    (__int64)v6,
                                                    0LL,
                                                    (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
                                                    7,
                                                    (__int64)&v50,
                                                    4u,
                                                    0);
                        if ( ParentDeviceContainerId < 0 )
                          goto LABEL_26;
                        if ( !v51 )
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ,
                            0,
                            0LL,
                            0,
                            0);
                      }
                      v50 = (unsigned __int16)v15[2];
                      ParentDeviceContainerId = PnpSetObjectProperty(
                                                  v3,
                                                  (__int64)v5,
                                                  6u,
                                                  (__int64)v6,
                                                  0LL,
                                                  (__int64)DEVPKEY_DevicePanel_JointTargetPositionX,
                                                  7,
                                                  (__int64)&v50,
                                                  4u,
                                                  0);
                      if ( ParentDeviceContainerId >= 0 )
                      {
                        v50 = *((unsigned __int16 *)v15 + 5);
                        ParentDeviceContainerId = PnpSetObjectProperty(
                                                    v3,
                                                    (__int64)v5,
                                                    6u,
                                                    (__int64)v6,
                                                    0LL,
                                                    (__int64)DEVPKEY_DevicePanel_JointTargetPositionY,
                                                    7,
                                                    (__int64)&v50,
                                                    4u,
                                                    0);
                        if ( ParentDeviceContainerId >= 0 )
                        {
                          v50 = (unsigned __int16)v15[3];
                          ParentDeviceContainerId = PnpSetObjectProperty(
                                                      v3,
                                                      (__int64)v5,
                                                      6u,
                                                      (__int64)v6,
                                                      0LL,
                                                      (__int64)DEVPKEY_DevicePanel_JointTargetPositionZ,
                                                      7,
                                                      (__int64)&v50,
                                                      4u,
                                                      0);
                          if ( ParentDeviceContainerId >= 0 )
                          {
                            v50 = (*((_WORD *)v15 + 7) & 0x1FFu) % 0x168;
                            ParentDeviceContainerId = PnpSetObjectProperty(
                                                        v3,
                                                        (__int64)v5,
                                                        6u,
                                                        (__int64)v6,
                                                        0LL,
                                                        (__int64)DEVPKEY_DevicePanel_JointTargetRotationZ,
                                                        7,
                                                        (__int64)&v50,
                                                        4u,
                                                        0);
                            if ( ParentDeviceContainerId >= 0 )
                            {
                              v50 = dword_140040CF0[(unsigned __int64)(unsigned int)*v15 >> 31];
                              ParentDeviceContainerId = PnpSetObjectProperty(
                                                          v3,
                                                          (__int64)v5,
                                                          6u,
                                                          (__int64)v6,
                                                          0LL,
                                                          (__int64)DEVPKEY_DevicePanel_JointMovementOrientation,
                                                          7,
                                                          (__int64)&v50,
                                                          4u,
                                                          0);
                              if ( ParentDeviceContainerId >= 0 )
                              {
                                if ( (*v15 & 0x1E0) != 0 && (*v15 & 0x1E0u) <= 0x80 )
                                {
                                  v50 = 0;
                                  if ( (int)PnpSetObjectProperty(
                                              v3,
                                              (__int64)v5,
                                              6u,
                                              (__int64)v6,
                                              0LL,
                                              (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin,
                                              7,
                                              (__int64)&v50,
                                              4u,
                                              0) >= 0 )
                                  {
                                    v47 = *((unsigned __int16 *)v15 + 3);
                                    v48 = (unsigned __int16)v15[1];
                                    if ( (*v15 & 0x1E0) != 0x20 )
                                    {
                                      v47 %= 0x168u;
                                      v48 %= 0x168u;
                                    }
                                    v63 = v48 + v47;
                                    if ( (int)PnpSetObjectProperty(
                                                v3,
                                                (__int64)v5,
                                                6u,
                                                (__int64)v6,
                                                0LL,
                                                (__int64)DEVPKEY_DevicePanel_JointMovementPositionMax,
                                                7,
                                                (__int64)&v63,
                                                4u,
                                                0) >= 0 )
                                    {
                                      v49 = *((unsigned __int16 *)v15 + 3);
                                      if ( (*v15 & 0x1E0) != 0x20 )
                                        v49 %= 0x168u;
                                      v64 = v49;
                                      if ( (int)PnpSetObjectProperty(
                                                  v3,
                                                  (__int64)v5,
                                                  6u,
                                                  (__int64)v6,
                                                  0LL,
                                                  (__int64)DEVPKEY_DevicePanel_JointMovementPositionStart,
                                                  7,
                                                  (__int64)&v64,
                                                  4u,
                                                  0) >= 0
                                        && ((int)PnpGetObjectProperty(
                                                   v3,
                                                   (__int64)v5,
                                                   6LL,
                                                   (__int64)v6,
                                                   0LL,
                                                   (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
                                                   (__int64)&v57,
                                                   (__int64)&v50,
                                                   4,
                                                   (__int64)&v56,
                                                   0) < 0
                                         || v57 != 7
                                         || v56 != 4
                                         || v50 > v63) )
                                      {
                                        PnpSetObjectProperty(
                                          v3,
                                          (__int64)v5,
                                          6u,
                                          (__int64)v6,
                                          0LL,
                                          (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
                                          7,
                                          (__int64)&v64,
                                          4u,
                                          0);
                                      }
                                    }
                                  }
                                  goto LABEL_228;
                                }
                                if ( v51 )
                                {
LABEL_228:
                                  ++v74;
                                  ++v76;
                                  continue;
                                }
LABEL_227:
                                PnpSetObjectProperty(
                                  v3,
                                  (__int64)v5,
                                  6u,
                                  (__int64)v6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin,
                                  0,
                                  0LL,
                                  0,
                                  0);
                                PnpSetObjectProperty(
                                  v3,
                                  (__int64)v5,
                                  6u,
                                  (__int64)v6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointMovementPositionMax,
                                  0,
                                  0LL,
                                  0,
                                  0);
                                PnpSetObjectProperty(
                                  v3,
                                  (__int64)v5,
                                  6u,
                                  (__int64)v6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointMovementPositionStart,
                                  0,
                                  0LL,
                                  0,
                                  0);
                                PnpSetObjectProperty(
                                  v3,
                                  (__int64)v5,
                                  6u,
                                  (__int64)v6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
                                  0,
                                  0LL,
                                  0,
                                  0);
                                goto LABEL_228;
                              }
                            }
                          }
                        }
                      }
LABEL_26:
                      if ( v6 )
                        ZwClose(v6);
                      goto LABEL_28;
                    }
                    break;
                  }
LABEL_229:
                  ParentDeviceContainerId = -1073741801;
                  goto LABEL_26;
                }
                v50 = (unsigned __int8)BYTE1(*v4) | (((*((unsigned __int8 *)v4 + 3) << 8) | (unsigned __int8)BYTE2(*v4)) << 8) | 0xFF000000;
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (__int64)a2,
                                            1u,
                                            a3,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelColor,
                                            7,
                                            (__int64)&v50,
                                            4u,
                                            0);
                if ( ParentDeviceContainerId >= 0 )
                {
                  v13 = (const wchar_t *)P;
                  goto LABEL_16;
                }
LABEL_28:
                if ( v5 )
                  ExFreePoolWithTag(v5, 0);
                if ( P )
                  ExFreePoolWithTag(P, 0);
                if ( v68 )
                  ExFreePoolWithTag(v68, 0);
                v4 = v54;
                goto LABEL_35;
              }
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)DEVPKEY_Device_PanelPositionX, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)DEVPKEY_Device_PanelPositionY, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)DEVPKEY_Device_PanelPositionZ, 0, 0LL, 0, 0);
LABEL_83:
              v14 = (unsigned __int16 *)v54;
              goto LABEL_11;
            }
LABEL_129:
            if ( v14 )
            {
              v50 = v14[5];
              ParentDeviceContainerId = PnpSetObjectProperty(
                                          v3,
                                          (__int64)a2,
                                          1u,
                                          a3,
                                          0LL,
                                          (__int64)DEVPKEY_Device_PanelPositionX,
                                          7,
                                          (__int64)&v50,
                                          4u,
                                          0);
              if ( ParentDeviceContainerId < 0 )
                goto LABEL_28;
              v50 = (unsigned __int16)*((_DWORD *)v54 + 3);
              ParentDeviceContainerId = PnpSetObjectProperty(
                                          v3,
                                          (__int64)a2,
                                          1u,
                                          a3,
                                          0LL,
                                          (__int64)DEVPKEY_Device_PanelPositionY,
                                          7,
                                          (__int64)&v50,
                                          4u,
                                          0);
              if ( ParentDeviceContainerId < 0 )
                goto LABEL_28;
              v50 = *((unsigned __int16 *)v54 + 7);
              ParentDeviceContainerId = PnpSetObjectProperty(
                                          v3,
                                          (__int64)a2,
                                          1u,
                                          a3,
                                          0LL,
                                          (__int64)DEVPKEY_Device_PanelPositionZ,
                                          7,
                                          (__int64)&v50,
                                          4u,
                                          0);
              if ( ParentDeviceContainerId < 0 )
                goto LABEL_28;
              v13 = (const wchar_t *)P;
            }
            else
            {
              v50 = *((unsigned __int16 *)v4 + 9);
              ParentDeviceContainerId = PnpSetObjectProperty(
                                          v3,
                                          (__int64)a2,
                                          1u,
                                          a3,
                                          0LL,
                                          (__int64)DEVPKEY_Device_PanelPositionX,
                                          7,
                                          (__int64)&v50,
                                          4u,
                                          0);
              if ( ParentDeviceContainerId < 0 )
                goto LABEL_28;
              v50 = (unsigned __int16)v4[4];
              ParentDeviceContainerId = PnpSetObjectProperty(
                                          v3,
                                          (__int64)a2,
                                          1u,
                                          a3,
                                          0LL,
                                          (__int64)DEVPKEY_Device_PanelPositionY,
                                          7,
                                          (__int64)&v50,
                                          4u,
                                          0);
              if ( ParentDeviceContainerId < 0 )
                goto LABEL_28;
              v13 = (const wchar_t *)P;
              if ( P )
                PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)DEVPKEY_Device_PanelPositionZ, 0, 0LL, 0, 0);
            }
            goto LABEL_83;
          }
        }
        else if ( !v13 )
        {
          goto LABEL_9;
        }
        v19 = 1;
        v52 = 1;
        goto LABEL_45;
      }
      ParentDeviceContainerId = -1073741801;
    }
    v4 = 0LL;
  }
LABEL_35:
  if ( v71 )
    ExFreePoolWithTag(v71, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v69 )
    ExFreePoolWithTag(v69, 0);
  return (unsigned int)ParentDeviceContainerId;
}
