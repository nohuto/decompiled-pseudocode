/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C001845C
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C0017D10 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0015C58 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C0015C84 (-TrackFullscreenMode@@YAXH@Z.c)
 *     IszzzUpdateCursorImageSupported @ 0x1C0015CA0 (IszzzUpdateCursorImageSupported.c)
 *     DrvQueryMDEVPowerState @ 0x1C0018400 (DrvQueryMDEVPowerState.c)
 *     DrvChangeDisplaySettings @ 0x1C00189C0 (DrvChangeDisplaySettings.c)
 *     LogDiagCDS @ 0x1C0018DD4 (LogDiagCDS.c)
 *     DrvSetDisplayConfig @ 0x1C0019050 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C001A714 (DrvChangeDisplaySettingsPreValidate.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     xxxResetDisplayDevice @ 0x1C0075F20 (xxxResetDisplayDevice.c)
 *     PowerDimUndimResend @ 0x1C0077A40 (PowerDimUndimResend.c)
 *     SafeEnableMDEV @ 0x1C00C4D90 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00C4E10 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C0115ED8 (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0124580 (McTemplateK0_EtwWriteTransfer.c)
 *     DrvSetPruneFlag @ 0x1C0147BD0 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C0147D10 (DrvSetVideoParameters.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        const UNICODE_STRING *String1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  const UNICODE_STRING *v9; // r12
  int v10; // r13d
  int v11; // edi
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // r14d
  int v16; // r12d
  _DWORD *v17; // rax
  char v18; // dl
  enum _MODE v19; // r15d
  int v20; // edi
  int v21; // eax
  int v22; // r8d
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // rsi
  int v24; // edx
  _QWORD *v25; // rcx
  const UNICODE_STRING *v26; // rsi
  __int64 v27; // rdx
  const UNICODE_STRING *v28; // rcx
  int v29; // eax
  ULONG TimeIncrement; // eax
  unsigned int v31; // r8d
  __int64 v32; // rbx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // [rsp+28h] [rbp-A1h]
  char v36[4]; // [rsp+88h] [rbp-41h] BYREF
  int v37; // [rsp+8Ch] [rbp-3Dh]
  int v38; // [rsp+90h] [rbp-39h]
  int v39; // [rsp+94h] [rbp-35h] BYREF
  unsigned int v40; // [rsp+98h] [rbp-31h]
  int v41; // [rsp+9Ch] [rbp-2Dh]
  __int64 v42; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-21h]
  __int64 v44; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v45; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-1h]
  PCUNICODE_STRING String1a; // [rsp+118h] [rbp+4Fh]
  struct _devicemodeW *v48; // [rsp+120h] [rbp+57h]
  __int64 v49; // [rsp+130h] [rbp+67h] BYREF

  v48 = a2;
  String1a = String1;
  v42 = 0LL;
  LOBYTE(v49) = 0;
  v46 = 0LL;
  v9 = String1;
  v45 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(String1, &ChangeDisplayModeStart, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 12, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 13, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
    }
  }
  v37 = a4 & 1;
  if ( (a4 & 1) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 14, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
  }
  if ( (a4 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 15, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
  }
  v38 = a4 & 4;
  if ( (a4 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 16, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
  }
  if ( (a4 & 8) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 17, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
  }
  if ( (a4 & 0x10) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 18, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
  }
  LODWORD(v43) = a4 & 0x40000000;
  if ( (a4 & 0x40000000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 19, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
  }
  v40 = a4 & 0x20000000;
  if ( (a4 & 0x20000000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 20, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
  }
  if ( (a4 & 0x10000000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 21, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
  }
  v10 = a4 & 0x20;
  if ( (a4 & 0x20) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 22, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
  }
  if ( (a4 & 0x100) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 23, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
  }
  if ( (a4 & 0x200) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 14, 24, (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids);
  }
  if ( (a4 & 0x7FFF800) != 0 )
    goto LABEL_25;
  if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16)) )
  {
    if ( gbMDEVDisabled )
    {
      if ( (a4 & 0x20) == 0 )
        goto LABEL_139;
      v35 = 1;
    }
    else
    {
      LOBYTE(String1) = (a4 & 0x10000008) != 0;
      if ( ((unsigned __int8)String1 & ((a4 & 1) == 0)) != 0
        || (String1 = (const UNICODE_STRING *)(a4 & 0x60000000), (a4 & 0x10000000) != 0) && (_DWORD)String1
        || (v13 = 2147483652LL, (a4 & 0x80000004) == 0x80000004) && (_DWORD)String1
        || (_DWORD)String1 == 1610612736
        || (a4 & 0x100) != 0 && a4 != 256
        || (a4 & 0x200) != 0 && a4 != 512 )
      {
LABEL_25:
        v11 = -4;
        goto LABEL_26;
      }
      if ( (gdwPUDFlags & 0x20000000) != 0 )
      {
        if ( (PVOID)PsGetCurrentProcess(String1, 2147483652LL) != gpepCSRSS )
          goto LABEL_139;
        v29 = (int)qword_1C0258050;
        if ( qword_1C0258050 )
          v29 = qword_1C0258050();
        if ( !v29 )
          goto LABEL_139;
      }
      if ( !a3 || (*((_DWORD *)a3 + 12) & 8) != 0 )
        a3 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 57);
      if ( (PVOID)PsGetCurrentProcess(String1, v13) == gpepCSRSS )
      {
        if ( !a3 )
          a3 = grpdeskRitInput;
LABEL_38:
        if ( (a4 & 0x100) != 0 )
        {
          v14 = 0LL;
        }
        else
        {
          if ( (a4 & 0x200) == 0 )
          {
            v15 = a4 & 0x10000002;
            v16 = a4 & 0x80;
            v41 = (a4 & 0x10000002) == 0;
            v17 = DispBroker::DispBrokerClient::s_pSessionBroker;
            v18 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
            String1 = (const UNICODE_STRING *)((char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4);
            if ( !v18 )
              String1 = (const UNICODE_STRING *)DispBroker::DispBrokerClient::s_pSessionBroker;
            v19 = a6;
            if ( *(_DWORD *)&String1->Length == 3 )
            {
              v44 = 0LL;
              v39 = 1;
              v11 = DrvChangeDisplaySettingsPreValidate(String1a, v37, (__int64)&v44, (__int64)&v39);
              if ( v11 )
                goto LABEL_26;
              if ( v39 )
              {
                v43 = MEMORY[0xFFFFF78000000320];
                TimeIncrement = KeQueryTimeIncrement();
                v31 = a4;
                v26 = String1a;
                v32 = v43 * TimeIncrement;
                v11 = xxxDispBrokerChangeDisplaySettings(String1a, v48, v31, v19 == UserMode);
                LogDiagCDS(String1a, v48, v44, (unsigned int)v19, v37, v41, v16, v40, v32, v11, v11, 11, 0, 0LL);
LABEL_79:
                if ( v11 >= 0 && v10 )
                  v11 = DrvSetVideoParameters(v26, 0);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v24) = 4;
                  WPP_RECORDER_SF_d(
                    (_DWORD)gBaseLog,
                    v24,
                    14,
                    25,
                    (__int64)&WPP_6c8a7949f294354c3e3996abc6998fe2_Traceguids,
                    v11);
                }
                goto LABEL_26;
              }
              goto LABEL_46;
            }
            if ( v18 )
              v17 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
            if ( *v17 != 2 )
            {
LABEL_46:
              v20 = -1073741637;
              if ( v15 )
                goto LABEL_55;
              if ( CreateCachedMonitor() )
              {
                if ( qword_1C02575D8 )
                  qword_1C02575D8(0LL);
                if ( qword_1C0257BD8 )
                  v21 = qword_1C0257BD8();
                else
                  v21 = -1073741637;
                if ( v21 >= 0 && qword_1C0257BE0 )
                  qword_1C0257BE0();
LABEL_55:
                if ( qword_1C0252420 )
                {
                  v33 = qword_1C0257BE8 ? qword_1C0257BE8() : -1073741637;
                  if ( v33 >= 0 && qword_1C0257BF0 )
                    qword_1C0257BF0();
                }
                if ( qword_1C0256A90 )
                  v20 = qword_1C0256A90();
                if ( v20 >= 0 && qword_1C0256A98 )
                  qword_1C0256A98(*(_QWORD *)(gpDispInfo + 40), 0LL, 0LL, 0LL);
                v22 = -((a4 & 0x40) == 0);
                v23 = a7;
                v11 = DrvChangeDisplaySettings(
                        String1a,
                        v19,
                        v37,
                        v41,
                        *(_QWORD *)(gpDispInfo + 16),
                        (__int64)&v42,
                        v22,
                        v16,
                        v40,
                        v38,
                        (__int64)&v49,
                        (__int64)a7);
                if ( qword_1C0256FC0 )
                  qword_1C0256FC0(a3, &v45, CompositionObject::Release);
                if ( a3 )
                  ObfReferenceObject(a3);
                if ( v15 )
                  goto LABEL_76;
                if ( v11 == 2 )
                {
                  TrackFullscreenMode(v38);
                  if ( (_DWORD)v43 )
                  {
                    if ( (unsigned int)SafeDisableMDEV(1LL) )
                      SafeEnableMDEV(1LL);
                    if ( qword_1C0257638 )
                      qword_1C0257638();
                  }
                  v11 = 0;
                }
                else
                {
                  if ( v11 )
                  {
                    if ( v11 >= 0 )
                      goto LABEL_69;
                    if ( qword_1C0257638 )
                      qword_1C0257638();
                    if ( !(_BYTE)v49 )
                      goto LABEL_69;
                    v36[0] = 0;
                    v34 = a3 ? ***((_QWORD ***)a3 + 1) : 0LL;
                    if ( (int)DrvSetDisplayConfig(
                                0,
                                0,
                                2447,
                                2,
                                v34,
                                0,
                                0LL,
                                0LL,
                                *(struct _MDEV **)(gpDispInfo + 16),
                                (__int64)&v42,
                                0LL,
                                0LL,
                                (__int64)v36,
                                0LL,
                                (__int64)v23) < 0 )
                      goto LABEL_69;
                    TrackFullscreenMode(0);
                    if ( v36[0] )
                      goto LABEL_69;
                    v27 = 0LL;
                    *(_QWORD *)(gpDispInfo + 16) = v42;
                  }
                  else
                  {
                    TrackFullscreenMode(v38);
                    *(_QWORD *)(gpDispInfo + 16) = v42;
                    PowerDimUndimResend();
                    v27 = (unsigned int)v38;
                  }
                  xxxResetDisplayDevice(a3, v27, 0LL);
                }
LABEL_69:
                if ( a3 )
                {
                  v25 = (_QWORD *)*((_QWORD *)a3 + 1);
                  if ( (*(_DWORD *)(*v25 + 64LL) & 1) == 0 )
                  {
                    if ( qword_1C0257AE0 )
                      qword_1C0257AE0(v25[3], 1LL, 66693LL);
                  }
                }
                if ( qword_1C02575D8 )
                  qword_1C02575D8(1LL);
                if ( (int)IszzzUpdateCursorImageSupported() >= 0 && qword_1C0257C00 )
                  qword_1C0257C00();
LABEL_76:
                if ( qword_1C02570D8 )
                  qword_1C02570D8(&v45);
                v26 = String1a;
                goto LABEL_79;
              }
LABEL_139:
              v11 = -1;
              goto LABEL_26;
            }
            if ( (a4 & 0x20) == 0 )
              goto LABEL_139;
            v35 = 0;
            v28 = String1a;
LABEL_138:
            v11 = DrvSetVideoParameters(v28, v35);
            if ( v11 >= 0 )
              goto LABEL_26;
            goto LABEL_139;
          }
          LOBYTE(v14) = 1;
        }
        v11 = DrvSetPruneFlag(v9, v14, (unsigned int)a6);
        goto LABEL_26;
      }
      if ( a3 == grpdeskRitInput )
        goto LABEL_38;
      if ( (a4 & 0x20) == 0 )
        goto LABEL_139;
      v35 = 0;
    }
    v28 = v9;
    goto LABEL_138;
  }
  if ( (a4 & 0x20) == 0 || (v11 = DrvSetVideoParameters(v9, 1), v11 < 0) )
    v11 = -5;
LABEL_26:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(String1, &ChangeDisplayModeEnd, 0LL);
  return (unsigned int)v11;
}
