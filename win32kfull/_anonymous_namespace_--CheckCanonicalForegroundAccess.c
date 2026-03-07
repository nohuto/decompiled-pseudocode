char __fastcall anonymous_namespace_::CheckCanonicalForegroundAccess(char a1)
{
  struct tagTHREADINFO *v2; // rax
  const struct tagPROCESSINFO **v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebp
  int v9; // edx
  int v10; // r8d
  bool v12; // di
  bool v13; // si
  char ThreadId; // al
  int v15; // r8d
  int v16; // edx
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // ax
  PDEVICE_OBJECT v19; // rcx
  bool v20; // bl
  __int16 v21; // ax

  v2 = PtiCurrentShared();
  v3 = (const struct tagPROCESSINFO **)((char *)v2 + 424);
  if ( !(unsigned int)IsForegroundLocked(v5, v4, v6, v2)
    || (v9 = gppiInputProvider, v10 = gppiInputProvider, *v3 == (const struct tagPROCESSINFO *)gppiInputProvider) )
  {
    v8 = *(_DWORD *)(v7 + 488) & 0x2C;
    if ( v8 )
    {
      v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v7);
        LOBYTE(v15) = v13;
        LOBYTE(v16) = v12;
        WPP_RECORDER_AND_TRACE_SF_DD(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v15,
          (_DWORD)gFullLog,
          4,
          2,
          22,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
          ThreadId,
          v8);
      }
      return 1;
    }
    if ( CanForceForeground(*v3) )
    {
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v10,
          (_DWORD)gFullLog,
          4,
          2,
          23,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
          *((_DWORD *)*v3 + 14));
      }
      return 1;
    }
    if ( gptiForeground
      && *(_DWORD *)(gptiForeground + 632LL) <= 0x400u
      && (*(_DWORD *)(gptiForeground + 648LL) & 0x40) != 0 )
    {
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v10,
          v7,
          4,
          2,
          104,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
      }
      v17 = WPP_GLOBAL_Control;
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 1;
      v18 = 24;
    }
    else
    {
      if ( (a1 & 4) == 0 )
      {
        v19 = WPP_GLOBAL_Control;
        v20 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0;
        v21 = 26;
        goto LABEL_34;
      }
      v17 = WPP_GLOBAL_Control;
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 1;
      v18 = 25;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v17->AttachedDevice,
      v9,
      v10,
      v7,
      4,
      2,
      v18,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
    return 1;
  }
  v19 = WPP_GLOBAL_Control;
  v20 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 0;
  v21 = 21;
LABEL_34:
  LOBYTE(v9) = v20;
  WPP_RECORDER_AND_TRACE_SF_(
    v19->AttachedDevice,
    v9,
    v10,
    v7,
    4,
    2,
    v21,
    (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
  return 0;
}
