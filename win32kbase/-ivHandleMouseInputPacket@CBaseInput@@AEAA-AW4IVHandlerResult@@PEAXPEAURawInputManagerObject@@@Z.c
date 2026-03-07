__int64 __fastcall CBaseInput::ivHandleMouseInputPacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rsi
  PDEVICE_OBJECT v5; // rcx
  unsigned int v6; // edi
  unsigned int v7; // ebp
  void *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r14d
  __int64 v15; // rbx
  int v16; // r12d
  __int64 v17; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 MouseProcessor; // rax
  __int64 v24; // rbx
  void *v25; // r14
  int v26; // r15d
  PDEVICE_OBJECT v27; // rcx
  void *v28; // rdx
  __int64 RimDevByName; // rax
  int v30; // r8d
  void **v31; // rax
  void *v32; // rdx
  __int64 v34; // [rsp+60h] [rbp-48h]
  __int64 v35; // [rsp+B8h] [rbp+10h]
  __int64 v36; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = WPP_GLOBAL_Control;
  v6 = 0;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v8 = &WPP_6faef5775b8438fac85e142323c35be9_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      38,
      (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
  if ( (*(_DWORD *)(v4 + 16) & 4) != 0 )
    *(_QWORD *)(v4 + 8) = v4 + (*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  v9 = *(_QWORD *)(v4 + 24);
  if ( v9 )
    *(_QWORD *)(v4 + 24) = v4 + (v9 & 0xFFFFFFFFFFFFFFFEuLL);
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(v5, a2, a3, v8);
  v14 = 0;
  if ( *(_DWORD *)(v4 + 32) )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(v4 + 24) + 48LL * v14;
      v16 = *(_DWORD *)(v15 + 20);
      HIDWORD(v34) = *(_DWORD *)(v15 + 24);
      v36 = 0LL;
      v17 = *(_QWORD *)(v15 + 32);
      LODWORD(v34) = v16;
      if ( !qword_1C02D7FC0 || (int)qword_1C02D7FC0() < 0 )
        break;
      if ( !(qword_1C02D7FC8 ? qword_1C02D7FC8(v17, v34, &v36) : 0) )
        break;
      *(_QWORD *)(v15 + 20) = v36;
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v10) = 0;
      }
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_dddd(WPP_GLOBAL_Control->AttachedDevice, v10, v12, 40);
      if ( ++v14 >= *(_DWORD *)(v4 + 32) )
        goto LABEL_27;
    }
    v27 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      LOBYTE(v7) = 0;
    }
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = &WPP_6faef5775b8438fac85e142323c35be9_Traceguids;
      LOBYTE(v28) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v28,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        39,
        (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
    }
    UserSessionSwitchLeaveCrit((__int64)v27, v10, v12, v13);
  }
  else
  {
LABEL_27:
    UserSessionSwitchLeaveCrit((__int64)v11, v10, v12, v13);
    if ( (*(_DWORD *)(v4 + 16) & 1) != 0 )
    {
      v35 = *(_QWORD *)(v4 + 36);
      MouseProcessor = anonymous_namespace_::GetMouseProcessor(v20, v19, v21, v22);
      if ( MouseProcessor )
      {
        v24 = MouseProcessor + 3872;
        CPushLock::AcquireLockExclusive((CPushLock *)(MouseProcessor + 3872));
        *(_QWORD *)(v24 + 16) = v35;
        *(_BYTE *)(v24 + 24) = 1;
        CPushLock::ReleaseLock((CPushLock *)v24);
      }
    }
    v25 = 0LL;
    v26 = *(_DWORD *)(v4 + 16) & 2;
    if ( (*(_DWORD *)(v4 + 16) & 4) != 0 )
    {
      RIMLockExclusive(v3 + 104);
      if ( (unsigned __int8)IsRimObjectUnregistered(v3) )
      {
        *(_QWORD *)(v3 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
        KeLeaveCriticalRegion();
        return 2;
      }
      RimDevByName = FindRimDevByName((PCUNICODE_STRING)v4);
      if ( RimDevByName )
      {
        if ( v26 )
        {
          v31 = (void **)(*(_QWORD *)(RimDevByName + 32) + 72LL);
          if ( v31 )
            v25 = *v31;
        }
        else
        {
          DeliverMouseInputToRIM(
            (const struct _IVMouseInputPacket *)v4,
            (struct RawInputManagerObject *)v3,
            (struct RIMDEV *)RimDevByName);
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          LOBYTE(v7) = 0;
        }
        if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v32 = &WPP_6faef5775b8438fac85e142323c35be9_Traceguids;
          LOBYTE(v32) = v7;
          LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v32,
            v30,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            12,
            41,
            (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
        }
        v7 = 0;
      }
      *(_QWORD *)(v3 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v26 )
      DeliverSynthesizedMouseInput((const struct _IVMouseInputPacket *)v4, v25);
    return v7;
  }
  return v6;
}
