__int64 __fastcall rimObsUpdateInputObserverRegistration(
        char *Handle,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        KPROCESSOR_MODE PreviousMode)
{
  __int64 v5; // r15
  unsigned int v6; // r14d
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _DWORD *v15; // rdi
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // eax
  unsigned int v19; // r13d
  unsigned int v20; // ecx
  int v21; // r9d
  int v22; // ebp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF

  v5 = a3;
  v6 = a2;
  v8 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qD(WPP_GLOBAL_Control->AttachedDevice, a2, a3, a4);
  }
  Object = 0LL;
  v11 = RawInputManagerInputObserverObjectResolveHandle(Handle, a2, PreviousMode, &Object);
  if ( v11 >= 0 )
  {
    v14 = SGDGetUserSessionState(v10, v9, v12, v13);
    RIMLockExclusive(v14 + 256);
    v15 = Object;
    RIMLockExclusive((__int64)Object + 176);
    v18 = v15[28];
    v19 = v15[27];
    v20 = v15[29];
    LODWORD(Object) = v18;
    if ( a4 >= 0x30 )
    {
      v15[27] = 3;
      v15[28] = 0;
      if ( rimObsCheckForRegistrationConflicts(v6, v19, v18, v20) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v8 = 0;
        }
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = (int)Object;
        }
        else
        {
          v22 = (int)Object;
          LOBYTE(v16) = v8;
          LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dddq(WPP_GLOBAL_Control->AttachedDevice, v16, v17, v21);
        }
        v15[27] = v19;
        v15[28] = v22;
        v15[30] = v6;
        if ( v5 )
        {
          *((_QWORD *)v15 + 12) = v5;
          v15[26] = a4;
        }
        goto LABEL_40;
      }
      v11 = -1073741823;
    }
    else
    {
      LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          23,
          40,
          (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
          a4);
      }
      v11 = -1073741789;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = v8;
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        23,
        42,
        (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
        (char)Handle);
    }
    ObCloseHandle(Handle, PreviousMode);
LABEL_40:
    *((_QWORD *)v15 + 23) = 0LL;
    ExReleasePushLockExclusiveEx(v15 + 44, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v15);
    v27 = SGDGetUserSessionState(v24, v23, v25, v26);
    *(_QWORD *)(v27 + 264) = 0LL;
    ExReleasePushLockExclusiveEx(v27 + 256, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v11;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = v8;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v12,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      23,
      43,
      (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
      (char)Handle);
  }
  return (unsigned int)v11;
}
