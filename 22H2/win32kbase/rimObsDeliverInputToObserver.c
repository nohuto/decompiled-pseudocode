/*
 * XREFs of rimObsDeliverInputToObserver @ 0x1C017E118
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C017EEF8 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0008140 (WPP_RECORDER_SF_qq.c)
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013732C (WPP_RECORDER_SF_Dd.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C017CFF0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C017DD18 (rimObsCheckForExistingDeviceHandle.c)
 *     rimObsCopyMessage @ 0x1C017DF88 (rimObsCopyMessage.c)
 *     rimObsPushInputMessage @ 0x1C017EBD0 (rimObsPushInputMessage.c)
 */

__int64 __fastcall rimObsDeliverInputToObserver(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  int v9; // edx
  _QWORD *v10; // r14
  __int64 v11; // r15
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rax
  void **v15; // r12
  int v16; // edx
  unsigned int v17; // r9d
  int v18; // edx
  int v19; // edx
  void *v20; // rcx
  int v21; // edx
  char v22; // al
  int v23; // r9d
  int v24; // edx
  KPROCESSOR_MODE AccessMode[8]; // [rsp+28h] [rbp-51h]
  PHANDLE Handle; // [rsp+30h] [rbp-49h]
  char Handlea; // [rsp+30h] [rbp-49h]
  int v29[2]; // [rsp+40h] [rbp-39h] BYREF
  HANDLE v30; // [rsp+48h] [rbp-31h]
  int v31; // [rsp+50h] [rbp-29h]
  int v32; // [rsp+54h] [rbp-25h]
  __int64 v33; // [rsp+58h] [rbp-21h]
  int v34; // [rsp+60h] [rbp-19h]
  int v35; // [rsp+64h] [rbp-15h]
  __int64 v36; // [rsp+68h] [rbp-11h]
  __int64 v37; // [rsp+70h] [rbp-9h] BYREF
  int v38; // [rsp+78h] [rbp-1h]
  int v39; // [rsp+7Ch] [rbp+3h]
  __int128 v40; // [rsp+80h] [rbp+7h]
  __int128 v41; // [rsp+90h] [rbp+17h]
  __int64 v42; // [rsp+E0h] [rbp+67h] BYREF
  HANDLE v43; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v44; // [rsp+F0h] [rbp+77h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Handlea = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      20,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      a1,
      Handlea);
  }
  if ( (unsigned int)dword_1C024AA90 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 256LL) )
  {
    v42 = v2;
    v44 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C024AA90,
      byte_1C021CB2C,
      v4,
      v5,
      (__int64)&v44,
      (__int64)&v42);
  }
  v6 = 0;
  RIMLockExclusive(v2 + 176);
  v43 = rimObsCheckForExistingDeviceHandle(v2, *(PVOID *)(a1 + 32));
  if ( v43 == (HANDLE)-1LL )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)v7,
        23,
        21,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    v6 = ObOpenObjectByPointer(*(PVOID *)(a1 + 32), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &v43);
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          (_DWORD)v7,
          23,
          24,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
      }
    }
    else
    {
      v8 = Win32AllocPoolZInit(0x18uLL, 1701334866LL);
      v10 = v8;
      if ( !v8 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            23,
            22,
            (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
        v6 = -1073741670;
        ObCloseHandle(v43, *(_BYTE *)(v2 + 72));
        goto LABEL_67;
      }
      v8[2] = v43;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_q(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v9,
          23,
          23,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
          v43);
      }
      v7 = *(_QWORD **)(v2 + 136);
      if ( *v7 != v2 + 128 )
        __fastfail(3u);
      *v10 = v2 + 128;
      v10[1] = v7;
      *v7 = v10;
      *(_QWORD *)(v2 + 136) = v10;
    }
    if ( v6 < 0 )
      goto LABEL_67;
  }
  v29[1] = 0;
  v32 = 0;
  v35 = 0;
  LODWORD(v11) = 48;
  if ( *(_DWORD *)(v2 + 104) < 0x30u )
  {
    LODWORD(v42) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 514);
  }
  if ( *(int *)(a1 + 256) < 0 )
  {
    v6 = *(_DWORD *)(a1 + 256);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)AccessMode = *(_DWORD *)(a1 + 256);
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)v7,
        23,
        26,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        *(_QWORD *)AccessMode);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 264) > 0xFFFFFFCFuLL )
    {
      v6 = -1073741675;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)v7,
        23,
        25,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    if ( v6 < 0 )
      goto LABEL_67;
    v11 = *(_QWORD *)(a1 + 264) + 48LL;
  }
  if ( v6 < 0 )
    goto LABEL_67;
  v12 = *(_DWORD *)(a1 + 256);
  v13 = *(unsigned __int8 *)(a1 + 48);
  v33 = *(_QWORD *)(a1 + 264);
  v30 = v43;
  v29[0] = 0;
  v31 = v12;
  v34 = v13;
  v36 = 0LL;
  if ( v12 >= 0 )
  {
    if ( v13 )
    {
      if ( --v13 )
      {
        if ( v13 == 1 )
        {
          v36 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 24LL);
        }
        else
        {
          LODWORD(v42) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 562);
        }
        goto LABEL_42;
      }
      v14 = a1 + 504;
    }
    else
    {
      v14 = a1 + 476;
    }
    v36 = v14;
  }
LABEL_42:
  if ( *(_DWORD *)(v2 + 88) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v13,
        23,
        27,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    v15 = *(void ***)(v2 + 96);
    v6 = rimObsCopyMessage(v29, *(_DWORD *)(v2 + 72), v15, *(_DWORD *)(v2 + 104));
    if ( v6 == -1073741789 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(Handle) = v11;
        *(_DWORD *)AccessMode = *(_DWORD *)(v2 + 104);
        WPP_RECORDER_SF_Dd(
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          3u,
          0x17u,
          0x1Cu,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
          *(_QWORD *)AccessMode,
          Handle);
      }
      v17 = *(_DWORD *)(v2 + 104);
      v18 = *(_DWORD *)(v2 + 72);
      v38 = 0;
      v37 = 1LL;
      v39 = v11;
      v40 = 0LL;
      v41 = 0LL;
      rimObsCopyMessage((int *)&v37, v18, v15, v17);
      v6 = rimObsPushInputMessage(v2, v29);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_53:
        v20 = *(void **)(v2 + 80);
        *(_DWORD *)(v2 + 88) = 0;
        ZwSetEvent(v20, 0LL);
        goto LABEL_58;
      }
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v16,
        23,
        29,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v19,
        23,
        30,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    goto LABEL_53;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v13,
      23,
      31,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
  }
  v6 = rimObsPushInputMessage(v2, v29);
  if ( v6 == -1073741756 )
    v6 = 0;
LABEL_58:
  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 && (*(_DWORD *)(v2 + 120) & 2) != 0 )
  {
    v22 = *(_BYTE *)(a1 + 48);
    if ( v22 )
    {
      if ( v22 != 1 )
        goto LABEL_67;
      *(_DWORD *)(a1 + 696) = 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      v23 = 33;
    }
    else
    {
      *(_DWORD *)(a1 + 920) = 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      v23 = 32;
    }
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v21,
      23,
      v23,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
  }
LABEL_67:
  *(_QWORD *)(v2 + 184) = 0LL;
  ExReleasePushLockExclusiveEx(v2 + 176, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)AccessMode = v6;
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v24,
      23,
      34,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      *(_QWORD *)AccessMode);
  }
  return (unsigned int)v6;
}
