/*
 * XREFs of PiDevCfgProcessDevice @ 0x140873308
 * Callers:
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PiConfigureDevice @ 0x140956344 (PiConfigureDevice.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x140202BAC (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1402B146C (PnpDiagnosticTraceObjectWithStatus.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PipSetDevNodeUserFlags @ 0x140680EF0 (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1406831A8 (PipClearDevNodeUserFlags.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406CD550 (_CmIsRootEnumeratedDevice.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     PiDevCfgFreeDeviceContext @ 0x14078AD4C (PiDevCfgFreeDeviceContext.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PipClearDevNodeProblem @ 0x14086666C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086AC20 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgSetObjectProperty @ 0x140874858 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140875198 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140875718 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgInitDeviceContext @ 0x140876144 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087867C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFreeDriverNode @ 0x14087DAA0 (PiDevCfgFreeDriverNode.c)
 *     PnpUpdateRebootRequiredReason @ 0x140955E50 (PnpUpdateRebootRequiredReason.c)
 *     PiDevCfgMigrateRootDevice @ 0x14095BC74 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14095CA98 (PiDevCfgRequestDriverConfigurations.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, void *a2, char a3)
{
  int v3; // r12d
  unsigned __int16 *v6; // r15
  int v7; // edi
  char v8; // r13
  bool v9; // r14
  int inited; // esi
  char v11; // al
  void *v12; // rsi
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rdx
  int v18; // eax
  int *v19; // r14
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  char v29; // r14
  int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // edx
  int v35; // [rsp+28h] [rbp-D8h]
  int v36; // [rsp+28h] [rbp-D8h]
  int v37; // [rsp+28h] [rbp-D8h]
  int v38; // [rsp+28h] [rbp-D8h]
  int v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+64h] [rbp-9Ch] BYREF
  int v41; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+6Ch] [rbp-94h] BYREF
  int v43; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v49[10]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v50[18]; // [rsp+100h] [rbp+0h] BYREF
  char v51; // [rsp+1A0h] [rbp+A0h]
  __int64 v53; // [rsp+1A8h] [rbp+A8h]

  v3 = 0;
  v6 = 0LL;
  memset(v49, 0, 0x48uLL);
  v42 = 1;
  v7 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v8 = 0;
  UnicodeString.Buffer = 0LL;
  v9 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  P = 0LL;
  v39 = 0;
  v43 = 0;
  v41 = 0;
  v45 = 0LL;
  v40 = 0;
  v47 = 0LL;
  v51 = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_51;
  }
  v6 = (unsigned __int16 *)(a1 + 40);
  PnpDiagnosticTraceObject(&KMPnPEvt_DeviceConfig_Start, (unsigned __int16 *)(a1 + 40));
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v49);
  if ( inited >= 0 )
  {
    v11 = v49[0];
    if ( (a3 & 1) != 0 )
    {
      v11 = LOBYTE(v49[0]) | 1;
      LODWORD(v49[0]) |= 1u;
    }
    v12 = a2;
    if ( !a2 )
      v12 = (void *)v49[2];
    v53 = (__int64)v12;
    if ( (v11 & 1) != 0 || PnpBootMode )
      goto LABEL_8;
    memset(v50, 0, 0x50uLL);
    HIDWORD(v50[3]) = 6;
    LODWORD(v50[1]) = 8210;
    v50[0] = DEVPKEY_Device_PendingConfigurationIds;
    LODWORD(v50[6]) = 8210;
    v27 = *(_QWORD *)(a1 + 48);
    v50[2] = &UnicodeString;
    v50[5] = DEVPKEY_Device_RequestConfigurationIds;
    v50[7] = &DestinationString;
    HIDWORD(v50[8]) = 6;
    inited = PiDevCfgQueryObjectProperties(6LL, v27, 1u, v12, (__int64)v50, 2u);
    if ( inited >= 0 )
    {
      if ( SLODWORD(v50[4]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v50[9]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( UnicodeString.Buffer && !*UnicodeString.Buffer )
      {
        v9 = 1;
        v3 = -1073740656;
        goto LABEL_13;
      }
LABEL_8:
      inited = PiDevCfgFindDeviceDriver(v49, UnicodeString.Buffer, &P);
      if ( inited >= 0 )
      {
        if ( DestinationString.Buffer )
        {
          inited = PiDevCfgRequestDriverConfigurations(v49, P, 0LL);
          goto LABEL_13;
        }
        v13 = PiDevCfgConfigureDevice(a1, (unsigned int)v49, (_DWORD)P, (unsigned int)&v39, (__int64)&v43);
        inited = v13;
        if ( v13 >= 0 )
        {
          v7 = v39;
          v8 = 1;
LABEL_12:
          v51 = 1;
          goto LABEL_13;
        }
        if ( v13 != -1073740653 && v13 != -1073740651 )
          goto LABEL_12;
      }
LABEL_13:
      if ( UnicodeString.Buffer && (P || v9) )
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          (unsigned int)v49,
          *(_QWORD *)(a1 + 48),
          1,
          v53,
          v35,
          (__int64)DEVPKEY_Device_PendingConfigurationIds,
          0,
          0LL,
          0,
          0);
      if ( DestinationString.Buffer )
        goto LABEL_45;
      if ( !UnicodeString.Buffer )
      {
        if ( v9 )
          goto LABEL_94;
        if ( P )
        {
          if ( *((int *)P + 107) >= 0 )
            goto LABEL_19;
          v3 = *((_DWORD *)P + 107);
LABEL_94:
          v30 = PiDevCfgConfigureDevice(a1, (unsigned int)v49, 0, (unsigned int)&v39, (__int64)&v43);
          inited = v30;
          if ( v30 < 0 )
          {
            if ( v30 == -1073740653 || v30 == -1073740651 )
              goto LABEL_19;
          }
          else
          {
            v7 = v39;
            v8 = 1;
            switch ( v3 )
            {
              case -1073740656:
                v41 = -536870360;
                break;
              case -1073740655:
                v41 = -536870320;
                break;
              case -1073740654:
                v41 = -536870319;
                break;
              case -1073740653:
                v41 = -536870318;
                break;
              case -1073740652:
                v41 = -536870375;
                break;
            }
          }
          v51 = 1;
LABEL_19:
          if ( v8 )
          {
            if ( PnpBootMode || (a3 & 2) != 0 )
              v7 |= 0x40000u;
            v14 = *(_DWORD *)(a1 + 704);
            if ( (v7 & 0x40) != 0 )
              v15 = v14 & 0xFFFFFFFE;
            else
              v15 = v14 | 1;
            *(_DWORD *)(a1 + 704) = v15;
          }
          v16 = v53;
          v17 = *(_QWORD *)(a1 + 48);
          v40 = 4;
          if ( (int)CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      v17,
                      v53,
                      11,
                      (__int64)&v42,
                      (__int64)&v39,
                      (__int64)&v40,
                      0) < 0
            || v42 != 4
            || v40 != 4 )
          {
            v39 = 0;
          }
          v18 = *(_DWORD *)(a1 + 396) & 0x2000;
          if ( inited < 0 )
          {
            if ( v18 )
            {
              v34 = *(_DWORD *)(a1 + 404);
              if ( v34 == 1 || v34 == 18 )
                PipSetDevNodeProblem(a1, v34, inited);
            }
          }
          else
          {
            v39 &= 0xFFF7FB9F;
            v7 &= ~0x20u;
            if ( v18 )
            {
              v19 = (int *)(a1 + 404);
              if ( *(_DWORD *)(a1 + 404) == 1
                || (v31 = *v19, v20 = (_DWORD *)(a1 + 404), *v19 == 28)
                || v31 == 18
                || v31 == 56 )
              {
                PipClearDevNodeProblem(a1);
                v20 = (_DWORD *)(a1 + 404);
              }
              v16 = v53;
            }
            else
            {
              v20 = (_DWORD *)(a1 + 404);
            }
            v21 = *(unsigned int *)(a1 + 300);
            if ( (((_DWORD)v21 - 771) & 0xFFFFFFEE) == 0 && (_DWORD)v21 != 787 )
            {
              v22 = *(_DWORD *)(a1 + 396);
              if ( (v22 & 0x6000) != 0 )
              {
                if ( (v22 & 0x2000) != 0 && *v20 == 14 && (v43 & 0x70) == 0 )
                {
                  PipClearDevNodeProblem(a1);
                  PipClearDevNodeUserFlags(a1, 4);
                }
              }
              else if ( (v43 & 0x70) == 0 || PnpBootMode )
              {
                if ( (v7 & 0x40) != 0 )
                  PipSetDevNodeProblem(a1, 28, v3);
              }
              else
              {
                v32 = 0LL;
                if ( (v43 & 0x10) != 0 )
                {
                  v32 = 128LL;
                  v33 = 128LL;
                  v45 = 128LL;
                }
                else
                {
                  v33 = v45;
                }
                if ( (v43 & 0x20) != 0 )
                {
                  v33 = v32 | 0x10;
                  v45 = v32 | 0x10;
                  v32 |= 0x10uLL;
                }
                if ( (v43 & 0x40) != 0 )
                {
                  v33 = v32 | 0x200;
                  v45 = v32 | 0x200;
                }
                PnpUpdateRebootRequiredReason(*(_QWORD *)(a1 + 48), v21, v33);
                PipSetDevNodeProblem(a1, 14, -1073741102);
                PipSetDevNodeUserFlags(a1, 4);
              }
            }
            if ( v41 && (v7 & 0x40) != 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                (unsigned int)v49,
                *(_QWORD *)(a1 + 48),
                1,
                v16,
                v36,
                (__int64)&DEVPKEY_Device_InstallError,
                23,
                (__int64)&v41,
                4,
                0);
            }
            else if ( (v49[0] & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                (unsigned int)v49,
                *(_QWORD *)(a1 + 48),
                1,
                v16,
                v36,
                (__int64)&DEVPKEY_Device_InstallError,
                0,
                0LL,
                0,
                0);
            }
          }
          if ( v8 || v7 )
          {
            v39 |= v7;
            PiDevCfgSetDeviceRegProp(4, (unsigned int)v49, 11, 4, (__int64)&v39, 4);
            if ( v8 )
            {
              v23 = *(_QWORD *)(a1 + 48);
              v47 = MEMORY[0xFFFFF78000000014];
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                (unsigned int)v49,
                v23,
                1,
                v16,
                v37,
                (__int64)&DEVPKEY_Device_InstallDate,
                16,
                (__int64)&v47,
                8,
                0);
              if ( (unsigned int)PnpGetObjectProperty(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   *(_QWORD *)(a1 + 48),
                                   1LL,
                                   v16,
                                   0LL,
                                   (__int64)&DEVPKEY_Device_FirstInstallDate,
                                   (__int64)&v42,
                                   0LL,
                                   0,
                                   (__int64)&v40,
                                   0) != -1073741789
                || v40 != 8 )
              {
                PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  (unsigned int)v49,
                  *(_QWORD *)(a1 + 48),
                  1,
                  v16,
                  v38,
                  (__int64)&DEVPKEY_Device_FirstInstallDate,
                  16,
                  (__int64)&v47,
                  8,
                  0);
              }
            }
          }
LABEL_45:
          if ( v51 )
          {
            v24 = *(_QWORD *)(a1 + 48);
            v40 = 8;
            if ( (int)PnpGetObjectProperty(
                        *(__int64 *)&PiPnpRtlCtx,
                        v24,
                        1LL,
                        v53,
                        0LL,
                        (__int64)DEVPKEY_Device_RebootRequiredReason,
                        (__int64)&v42,
                        (__int64)&v45,
                        8,
                        (__int64)&v40,
                        0) >= 0
              && v42 == 9
              && v40 == 8 )
            {
              v25 = v45;
            }
            else
            {
              v25 = 0LL;
              v45 = 0LL;
            }
            PiDevCfgLogDeviceConfigured(a1, (unsigned int)v49, (_DWORD)P, v43, inited, v25, (__int64)&v47);
          }
          goto LABEL_49;
        }
        if ( inited != -1073740656 || (PiDevCfgMode & 2) == 0 )
          goto LABEL_19;
        if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
        {
          if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
          {
            v28 = *(_QWORD *)(a1 + 48);
            v40 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v28,
                        v53,
                        11,
                        (__int64)&v42,
                        (__int64)&v39,
                        (__int64)&v40,
                        0) >= 0
              && v42 == 4
              && v40 == 4 )
            {
              v29 = v39;
            }
            else
            {
              v29 = 0;
              v39 = 0;
            }
            v9 = (v29 & 0x20) != 0;
          }
          else
          {
            v9 = 1;
          }
        }
        else
        {
          v7 = 32;
        }
        if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
        {
          if ( (int)PiDevCfgMigrateRootDevice(a1, v49, &v39) >= 0 )
          {
            v7 |= v39;
            if ( (v39 & 1) != 0 )
            {
              v9 = 0;
              v7 &= ~0x20u;
            }
          }
        }
        v3 = -1073740656;
      }
      if ( !v9 )
        goto LABEL_19;
      goto LABEL_94;
    }
  }
LABEL_49:
  if ( P )
    PiDevCfgFreeDriverNode(P);
LABEL_51:
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&DestinationString);
  PiDevCfgFreeDeviceContext((__int64)v49);
  if ( v6 )
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DeviceConfig_Stop, v6, inited);
  return (unsigned int)inited;
}
