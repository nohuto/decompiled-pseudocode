void __fastcall Interrupter_DeferredWorkProcessor(__int64 a1, char a2, char a3)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r15
  void *v8; // rdx
  char v9; // r12
  unsigned __int8 v10; // di
  __int64 v11; // rsi
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  struct _KEVENT *v15; // rsi
  int v16; // eax
  __int64 v17; // rsi
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r14d
  ULONG v25; // r12d
  __int64 v26; // rsi
  ULONG v27; // r13d
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // r10d
  __int64 v38; // rcx
  __int64 v39; // r8
  char v40; // cl
  __int64 v41; // r9
  __int64 v42; // rdi
  char v43; // r14
  __int64 v44; // rdi
  int v45; // edx
  int v46; // r8d
  int v47; // r9d
  __int128 *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // r9d
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r10
  __int64 v58; // rsi
  unsigned __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rax
  bool v62; // zf
  __int64 v63; // rdi
  int v64; // edx
  int v65; // r8d
  int v66; // r9d
  unsigned __int8 v67; // al
  unsigned __int8 v68; // di
  struct _IO_WORKITEM *v69; // rcx
  unsigned __int8 v70; // al
  signed __int32 v71[8]; // [rsp+0h] [rbp-99h] BYREF
  void *v72; // [rsp+20h] [rbp-79h]
  const char *v73; // [rsp+28h] [rbp-71h]
  __int64 v74; // [rsp+30h] [rbp-69h]
  const char *v75; // [rsp+38h] [rbp-61h]
  char v76; // [rsp+70h] [rbp-29h]
  __int128 v77; // [rsp+78h] [rbp-21h] BYREF
  __int64 v78; // [rsp+88h] [rbp-11h] BYREF
  __int64 v79; // [rsp+90h] [rbp-9h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+98h] [rbp-1h] BYREF

  v76 = a3;
  v4 = a1;
  v79 = a1;
  v77 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063310);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v6 + 136);
  v8 = &WPP_89e87cee83d7332425398286600bed19_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(v6 + 72),
      (_DWORD)v8,
      9,
      41,
      (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
      v4,
      a2);
  }
  ++*(_DWORD *)(v5 + 44);
  v9 = 0;
  if ( *(_DWORD *)(v5 + 32) )
    v78 = 0LL;
  else
    v78 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v4,
            off_1C0063180);
  v10 = 0;
  if ( *(_BYTE *)(v5 + 216) && KeGetCurrentIrql() == 2 )
  {
    Controller_LowerAndTrackIrql(*(_QWORD **)(v5 + 8));
    v10 = 1;
  }
  v11 = *(_QWORD *)(v5 + 208);
  if ( *(_DWORD *)v11 == 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v75 = "Code Path Requires Passive Level";
        LODWORD(v74) = 88;
        v73 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c";
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(v11 + 8),
      0LL);
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2528))(
      WdfDriverGlobals,
      *(_QWORD *)(v11 + 8));
  }
  v15 = (struct _KEVENT *)(v5 + 176);
  if ( v76 )
    KeClearEvent((PRKEVENT)(v5 + 176));
  v16 = *(_DWORD *)(v5 + 96);
  if ( (v16 & 8) != 0 )
  {
    Interrupter_ReleaseEventRingLock(v5, v10);
    ++*(_DWORD *)(v5 + 68);
    goto LABEL_171;
  }
  if ( (v16 & 0x10) != 0 )
  {
    Interrupter_ReleaseEventRingLock(v5, v10);
    ++*(_DWORD *)(v5 + 72);
    goto LABEL_171;
  }
  v17 = *(_QWORD *)(v5 + 208);
  *(_DWORD *)(v5 + 96) = v16 | 8;
  if ( *(_DWORD *)v17 == 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v75 = "Code Path Requires Passive Level";
        LODWORD(v74) = 107;
        v73 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c";
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v18, v19, v20);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(v17 + 8));
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2536))(
      WdfDriverGlobals,
      *(_QWORD *)(v17 + 8));
  }
  if ( v10 )
    Controller_RaiseAndTrackIrql(*(_QWORD *)(v5 + 8));
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &USBXHCI_ETW_EVENT_DEFERRED_WORK_START_V1, v23, *(unsigned int *)(v5 + 32));
  v24 = 0;
  v25 = 0;
  v26 = *(_QWORD *)(v5 + 136) + 16LL * *(unsigned int *)(v5 + 124);
  v27 = 0;
  if ( (*(_DWORD *)(v26 + 12) & 1) != *(_DWORD *)(v5 + 120) )
  {
LABEL_92:
    v43 = 0;
    if ( *(_BYTE *)(v5 + 216) && KeGetCurrentIrql() == 2 )
    {
      Controller_LowerAndTrackIrql(*(_QWORD **)(v5 + 8));
      v43 = 1;
    }
    v44 = *(_QWORD *)(v5 + 208);
    if ( *(_DWORD *)v44 == 1 )
    {
      if ( KeGetCurrentIrql() )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v75 = "Code Path Requires Passive Level";
          LODWORD(v74) = 88;
          v73 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c";
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v45, v46, v47);
        }
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(v44 + 8),
        0LL);
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2528))(
        WdfDriverGlobals,
        *(_QWORD *)(v44 + 8));
    }
    *(_DWORD *)(v5 + 96) &= ~8u;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0q_EtwWriteTransfer(v55, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v56, *(unsigned int *)(v5 + 32));
    v57 = *(_QWORD *)(v5 + 8);
    v58 = *(_QWORD *)(v57 + 88);
    v59 = *(_DWORD *)(v5 + 128) & 7 | (16LL * *(unsigned int *)(v5 + 124) + *(_QWORD *)(*(_QWORD *)(v5 + 144) + 24LL)) & 0xFFFFFFFFFFFFFFF8uLL | 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v54) = 5;
      WPP_RECORDER_SF_i(
        *(_QWORD *)(v57 + 72),
        v54,
        9,
        31,
        (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
        v59);
    }
    v60 = *(_QWORD *)(v5 + 24);
    v61 = *(_QWORD *)(v58 + 8);
    if ( *(_BYTE *)(v58 + 137) || (v62 = *(_BYTE *)(v61 + 601) == 0, v78 = v59, v62) )
    {
      if ( (*(_QWORD *)(v61 + 336) & 1) != 0 )
      {
        *(_DWORD *)(v60 + 24) = v59;
        _InterlockedOr(v71, 0);
        *(_DWORD *)(v60 + 28) = HIDWORD(v59);
      }
      else
      {
        *(_QWORD *)(v60 + 24) = v59;
      }
      _InterlockedOr(v71, 0);
    }
    else
    {
      Register_WriteSecureMmio(v58, v60 + 24, 3LL, &v78);
    }
    v63 = *(_QWORD *)(v5 + 208);
    if ( *(_DWORD *)v63 == 1 )
    {
      if ( KeGetCurrentIrql() )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v75 = "Code Path Requires Passive Level";
          LODWORD(v74) = 107;
          v73 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c";
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v64, v65, v66);
        }
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2512))(
        WdfDriverGlobals,
        *(_QWORD *)(v63 + 8));
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2536))(
        WdfDriverGlobals,
        *(_QWORD *)(v63 + 8));
    }
    if ( v43 )
      Controller_RaiseAndTrackIrql(*(_QWORD *)(v5 + 8));
    v9 = 0;
    goto LABEL_170;
  }
  while ( 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v21) = 5;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
        v21,
        9,
        42,
        (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
        v26,
        *(_DWORD *)(v5 + 124));
    }
    if ( (v24 & 0x3F) != 0 )
      goto LABEL_49;
    memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
    if ( KeGetCurrentIrql() < 2u || KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      goto LABEL_49;
    if ( !v25 )
    {
      v29 = 95 * WatchdogInformation.DpcTimeLimit;
      v28 = (1374389535 * (unsigned __int64)(unsigned int)v29) >> 32;
      v25 = (unsigned int)v29 / 0x64;
    }
    if ( !v27 )
    {
      v29 = 25 * WatchdogInformation.DpcWatchdogLimit;
      v28 = (1374389535 * (unsigned __int64)(unsigned int)v29) >> 32;
      v27 = (unsigned int)v29 / 0x64;
    }
    if ( WatchdogInformation.DpcTimeCount < v25 )
      break;
    if ( WatchdogInformation.DpcWatchdogCount < v27 )
    {
      ++*(_DWORD *)(v5 + 84);
      goto LABEL_139;
    }
LABEL_49:
    v77 = *(_OWORD *)v26;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddddidLL(
        *(_QWORD *)(v5 + 16),
        (HIDWORD(v77) >> 2) & 1,
        DWORD2(v77) & 0xFFFFFF,
        WORD6(v77) >> 10,
        (_DWORD)v72,
        *(_DWORD *)(v5 + 124),
        SHIBYTE(v77),
        BYTE14(v77) & 0x1F,
        (BYTE12(v77) & 4) != 0,
        v77,
        SBYTE8(v77),
        SBYTE11(v77),
        WORD6(v77) >> 10);
    v31 = *(_DWORD *)(v5 + 124);
    ++*(_DWORD *)(v5 + 48);
    LODWORD(v21) = v31 + 1;
    *(_DWORD *)(v5 + 124) = v21;
    if ( (_DWORD)v21 == *(_DWORD *)(v5 + 116) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v32 = *(_QWORD *)(v5 + 8);
        LODWORD(v75) = *(_DWORD *)(v5 + 120);
        LODWORD(v74) = *(_DWORD *)(v5 + 128);
        v33 = *(_QWORD *)(v32 + 72);
        LOBYTE(v73) = v21;
        LOBYTE(v21) = 5;
        WPP_RECORDER_SF_ddd(
          v33,
          v21,
          9,
          45,
          (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
          (char)v73,
          v74,
          (char)v75);
      }
      v34 = *(_DWORD *)(v5 + 128) + 1;
      *(_DWORD *)(v5 + 124) = 0;
      *(_DWORD *)(v5 + 128) = v34;
      if ( v34 == *(_DWORD *)(v5 + 108) )
      {
        LODWORD(v21) = *(_DWORD *)(v5 + 120) != 1;
        *(_DWORD *)(v5 + 120) = v21;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v35 = *(_QWORD *)(v5 + 8);
          LODWORD(v74) = v21;
          LOBYTE(v21) = 5;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v35 + 72),
            v21,
            9,
            46,
            (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
            v34,
            v74);
        }
        v36 = *(_QWORD *)(v5 + 160);
        *(_DWORD *)(v5 + 128) = 0;
      }
      else
      {
        v36 = **(_QWORD **)(v5 + 144);
      }
      *(_QWORD *)(v5 + 144) = v36;
      *(_QWORD *)(v5 + 136) = *(_QWORD *)(v36 + 16);
    }
    v37 = DWORD2(v77);
    if ( HIBYTE(DWORD2(v77)) == 199 )
    {
      v38 = *(_QWORD *)(v5 + 8);
      if ( (*(_QWORD *)(v38 + 336) & 0x2000LL) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = 3;
          WPP_RECORDER_SF_qLL(
            *(_QWORD *)(v38 + 72),
            v21,
            9,
            47,
            (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
            v26,
            SBYTE11(v77),
            WORD6(v77) >> 10);
        }
        goto LABEL_87;
      }
    }
    v39 = HIDWORD(v77);
    LODWORD(v21) = WORD6(v77) >> 10;
    if ( (_DWORD)v21 == 32 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v21) = 5;
        WPP_RECORDER_SF_LL(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
          v21,
          9,
          48,
          (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
          WORD6(v77) >> 10,
          SBYTE11(v77));
        v39 = HIDWORD(v77);
        v37 = DWORD2(v77);
      }
      if ( (v39 & 4) != 0
        && _bittest64((const signed __int64 *)(*(_QWORD *)(v5 + 8) + 336LL), 0x35u)
        && HIBYTE(v37) - 14 <= 1u )
      {
        v39 = (unsigned int)v39 & 0xFFFFFFFB;
        HIDWORD(v77) = v39;
      }
      v40 = v77;
      if ( (v39 & 4) == 0 || (v77 & 3) == 1 || _bittest64((const signed __int64 *)(*(_QWORD *)(v5 + 8) + 336LL), 0x25u) )
      {
        if ( *(_BYTE *)(v7 + 80) )
          v21 = *(_QWORD *)(v7 + 24);
        else
          v21 = *(_QWORD *)(v7 + 72);
        v41 = (unsigned int)v39;
        v42 = *(_QWORD *)(v21 + 8 * ((unsigned __int64)(unsigned int)v39 >> 24));
        if ( v42 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_ddqq(
              *(_QWORD *)(*(_QWORD *)(v42 + 8) + 72LL),
              WORD1(v39) & 0x1F,
              BYTE3(v39),
              WORD1(v39) & 0x1F,
              (_DWORD)v72,
              SBYTE3(v39),
              BYTE2(v39) & 0x1F,
              (char)&v77,
              *(_QWORD *)(v42 + 8 * (((unsigned __int64)(unsigned int)v39 >> 16) & 0x1F) + 168));
            v39 = HIDWORD(v77);
            v40 = v77;
          }
          v21 = *(_QWORD *)(v42 + 8LL * (WORD1(v39) & 0x1F) + 168);
          if ( v21 )
          {
            Endpoint_TransferEventHandler(&v77, v21, v39, v41);
          }
          else if ( (v40 & 3) != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v48 = &v77;
            LOBYTE(v48) = 3;
            WPP_RECORDER_SF_ddq(
              *(_QWORD *)(*(_QWORD *)(v42 + 8) + 72LL),
              (_DWORD)v48,
              12,
              67,
              (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
              SBYTE3(v39),
              BYTE2(v39) & 0x1F,
              (char)&v77);
          }
        }
        else if ( (v77 & 3) != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = 3;
          WPP_RECORDER_SF_qdd(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
            v21,
            9,
            49,
            (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
            v26,
            SBYTE3(v39),
            BYTE2(v39) & 0x1F);
        }
      }
      else
      {
        TR_TransferEventHandler(&v77, 0LL);
      }
      goto LABEL_87;
    }
    if ( (_DWORD)v21 == 37 && HIBYTE(DWORD2(v77)) == 21 )
    {
      ++*(_DWORD *)(v5 + 76);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 3;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
          v21,
          9,
          50,
          (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids);
      }
      v49 = *(_QWORD *)(v5 + 8);
      if ( (*(_QWORD *)(v49 + 336) & 0x10000000LL) != 0 )
        Controller_ReportFatalErrorEx(v49, 2, 4113, 0, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_87;
    }
    if ( *(_DWORD *)(v5 + 32) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_87;
      v50 = *(_QWORD *)(v5 + 8);
      LODWORD(v73) = WORD6(v77) >> 10;
      v51 = 51;
      v72 = &WPP_89e87cee83d7332425398286600bed19_Traceguids;
LABEL_127:
      LOBYTE(v21) = 3;
      WPP_RECORDER_SF_L(*(_QWORD *)(v50 + 72), v21, 9, v51, (__int64)v72, (char)v73);
      goto LABEL_87;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v21) = 5;
      WPP_RECORDER_SF_LL(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
        v21,
        9,
        52,
        (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
        WORD6(v77) >> 10,
        SBYTE11(v77));
      LODWORD(v39) = HIDWORD(v77);
      HIBYTE(v37) = BYTE11(v77);
    }
    LODWORD(v21) = (unsigned __int16)v39 >> 10;
    switch ( (_DWORD)v21 )
    {
      case '!':
        goto LABEL_136;
      case '"':
        RootHub_HandlePortStatusChangeEvent(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 152LL), &v77);
        goto LABEL_87;
      case '%':
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = 3;
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(*(_QWORD *)(v78 + 8) + 72LL),
            v21,
            9,
            53,
            (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
            37,
            SHIBYTE(v37));
        }
        goto LABEL_87;
      case '&':
        if ( *(_BYTE *)(v7 + 80) )
          v52 = *(_QWORD *)(v7 + 24);
        else
          v52 = *(_QWORD *)(v7 + 72);
        v53 = *(_QWORD *)(v52 + 8 * ((unsigned __int64)(unsigned int)v39 >> 24));
        if ( v53 )
          UsbDevice_DeviceNotificationEventHandler(v53, &v77);
        goto LABEL_87;
    }
    if ( (_DWORD)v21 != 39 )
    {
      if ( (_DWORD)v21 != 48 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_87;
        v51 = 54;
        LODWORD(v73) = (unsigned __int16)v39 >> 10;
        v72 = &WPP_89e87cee83d7332425398286600bed19_Traceguids;
        v50 = *(_QWORD *)(v78 + 8);
        goto LABEL_127;
      }
LABEL_136:
      Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 144LL), &v77);
    }
LABEL_87:
    v26 = *(_QWORD *)(v5 + 136) + 16LL * *(unsigned int *)(v5 + 124);
    if ( v24 && (v24 & 0x7F) == 0 && (*(_DWORD *)(v26 + 12) & 1) == *(_DWORD *)(v5 + 120) )
      Interrupter_UpdateERDP(v5, 0LL);
    ++v24;
    if ( (*(_DWORD *)(v26 + 12) & 1) != *(_DWORD *)(v5 + 120) )
      goto LABEL_92;
  }
  ++*(_DWORD *)(v5 + 80);
LABEL_139:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v28) = 5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
      v28,
      9,
      43,
      (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
      v24);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v30, *(unsigned int *)(v5 + 32));
  Interrupter_UpdateERDP(v5, 0LL);
  v9 = 1;
LABEL_170:
  v4 = v79;
  v15 = (struct _KEVENT *)(v5 + 176);
LABEL_171:
  if ( v76 )
    KeSetEvent(v15, 0, 0);
  if ( v9 )
  {
    ++*(_DWORD *)(v5 + 56);
    v67 = Interrupter_AcquireEventRingLock(v5);
    v68 = v67;
    if ( (*(_DWORD *)(v5 + 96) & 0x12) != 0 )
    {
      Interrupter_ReleaseEventRingLock(v5, v67);
    }
    else
    {
      KeClearEvent(v15);
      Interrupter_ReleaseEventRingLock(v5, v68);
      v69 = *(struct _IO_WORKITEM **)(v5 + 200);
      if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 384LL) )
      {
        if ( !v69
          || !((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, IO_WORKITEM_ROUTINE_EX *, _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(
                v69,
                Interrupter_IoWorkItemRequeueDpc,
                0LL,
                v5) )
        {
          v70 = Interrupter_AcquireEventRingLock(v5);
          *(_DWORD *)(v5 + 96) &= ~8u;
          Interrupter_ReleaseEventRingLock(v5, v70);
          KeSetEvent(v15, 0, 0);
          ++*(_DWORD *)(v5 + 64);
          Interrupter_DeferToDpcOrWorkItem(v4);
          return;
        }
      }
      else
      {
        IoQueueWorkItemEx(v69, Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v5);
      }
      ++*(_DWORD *)(v5 + 60);
    }
  }
}
