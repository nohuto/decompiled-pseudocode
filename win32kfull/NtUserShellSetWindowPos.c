__int64 __fastcall NtUserShellSetWindowPos(__int64 a1, __int64 a2, _OWORD *a3, unsigned int a4, int a5, int a6)
{
  __int64 v8; // r14
  char v10; // di
  int v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  int v16; // ebx
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // ax
  int v19; // ecx
  PDEVICE_OBJECT v20; // rcx
  char v21; // r8
  unsigned __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r13
  PDEVICE_OBJECT v26; // rcx
  char v27; // r8
  unsigned __int16 v28; // ax
  __int64 v29; // rax
  int v30; // r8d
  __int64 v31; // r9
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // rax
  unsigned __int8 v35; // r9
  int v36; // edx
  int v37; // r8d
  __int64 v38; // r9
  PDEVICE_OBJECT v39; // rcx
  char v40; // r8
  unsigned __int16 v41; // ax
  int v42; // r9d
  int v43; // edx
  PDEVICE_OBJECT v44; // rcx
  __int16 v45; // ax
  char v46; // al
  PDEVICE_OBJECT v47; // rcx
  __int16 v48; // ax
  int v49; // eax
  __int64 v50; // rcx
  int v52; // [rsp+40h] [rbp-78h]
  _BYTE v53[31]; // [rsp+61h] [rbp-57h] BYREF
  _OWORD v54[3]; // [rsp+80h] [rbp-38h] BYREF
  unsigned int v56; // [rsp+D8h] [rbp+20h]

  v56 = a4;
  v8 = a2;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v53);
  v54[0] = 0LL;
  LOBYTE(v11) = IAMThreadAccessGranted(gptiCurrent);
  v16 = 0;
  if ( v11 )
  {
    if ( (a5 & 0xFFFFFFC0) != 0 )
    {
      v20 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v22 = 35;
      v52 = a5;
      goto LABEL_20;
    }
    if ( a4 > 3 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          2u,
          0x16u,
          0x24u,
          (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
          a4);
      goto LABEL_21;
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v13) & 0xF) != 2 )
    {
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v18 = 37;
      goto LABEL_9;
    }
    v23 = ValidateHwndIAM(a1);
    v25 = v23;
    if ( !v23 )
    {
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v28 = 38;
      goto LABEL_46;
    }
    if ( !IsTopLevelWindow(v23) )
    {
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v28 = 39;
      goto LABEL_46;
    }
    if ( *(_QWORD *)(v25 + 16) == gptiCurrent )
    {
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v28 = 40;
LABEL_46:
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)v26->AttachedDevice,
        v10,
        v27,
        v24,
        2u,
        0x16u,
        v28,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
        a1);
      goto LABEL_21;
    }
    if ( v8 )
    {
      v29 = ValidateHwndIAM(v8);
      if ( !v29 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v10,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v31,
            2u,
            0x16u,
            0x29u,
            (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
            a2);
        goto LABEL_21;
      }
      v32 = *(_QWORD *)(v29 + 40);
      v33 = *(_DWORD *)(v32 + 236);
      v34 = *(_QWORD *)(v25 + 40);
      if ( *(_DWORD *)(v34 + 236) != v33 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v33) = v10;
          LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qdqd(WPP_GLOBAL_Control->AttachedDevice, v33, v30, (_DWORD)gFullLog);
        }
        goto LABEL_10;
      }
      v35 = *(_BYTE *)(v34 + 24);
      if ( ((v35 ^ *(_BYTE *)(v32 + 24)) & 8) != 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v36 = v35 & 8;
          LOBYTE(v36) = v10;
          LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qdqd(WPP_GLOBAL_Control->AttachedDevice, v36, v30, (_DWORD)gFullLog);
        }
        goto LABEL_21;
      }
    }
    if ( IsHungWindow((const struct tagTHREADINFO **)v25) )
    {
      v39 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_98;
      v41 = 44;
LABEL_97:
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)v39->AttachedDevice,
        v10,
        v40,
        v38,
        2u,
        0x16u,
        v41,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
        a1);
LABEL_98:
      v19 = 5023;
      goto LABEL_11;
    }
    if ( **(_WORD **)(*(_QWORD *)(v25 + 136) + 8LL) == *(_WORD *)(gpsi + 900LL) )
    {
      v39 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_98;
      v41 = 45;
      goto LABEL_97;
    }
    v42 = a5;
    v43 = a5 & 0x10;
    if ( (a5 & 0x10) != 0 && v8 )
    {
      v44 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v45 = 46;
      goto LABEL_116;
    }
    v46 = 0;
    if ( a3 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_OWORD *)MmUserProbeAddress;
      v54[0] = *a3;
      v46 = 1;
    }
    if ( v46 )
      goto LABEL_152;
    if ( (a5 & 0xC) != 0 )
    {
      v20 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v10 = 0;
      }
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v22 = 48;
      v52 = a5;
LABEL_20:
      WPP_RECORDER_AND_TRACE_SF_D(
        (__int64)v20->AttachedDevice,
        v10,
        v21,
        (__int64)gFullLog,
        2u,
        0x16u,
        v22,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
        v52);
LABEL_21:
      v19 = 87;
      goto LABEL_11;
    }
    if ( v56 != 3 )
    {
LABEL_152:
      v49 = ShellWindowPos::PositionWindowAsync(v25, v8, v54, v56, v42, a6) - 1;
      if ( !v49 )
      {
        v19 = 14;
        goto LABEL_11;
      }
      if ( v49 != 1 )
      {
        v16 = 1;
        goto LABEL_171;
      }
      goto LABEL_98;
    }
    if ( (a5 & 0x10) != 0 )
    {
      v47 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || (LOBYTE(v43) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v43) = 0;
      }
      LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v43 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_149;
      v48 = 49;
    }
    else
    {
      if ( !v8 )
      {
        v44 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_21;
        v45 = 51;
        goto LABEL_116;
      }
      v47 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || (LOBYTE(v43) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v43) = 0;
      }
      LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v43 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_149:
        if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 31LL) & 0x20) != 0 )
        {
          v56 = 0;
LABEL_151:
          v8 = a2;
          goto LABEL_152;
        }
        if ( IsSemiMaximized((const struct tagWND *)v25) )
          goto LABEL_151;
        v44 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_21;
        v45 = 52;
LABEL_116:
        LOBYTE(v43) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          v44->AttachedDevice,
          v43,
          v37,
          v42,
          2,
          22,
          v45,
          (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
        goto LABEL_21;
      }
      v48 = 50;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v47->AttachedDevice,
      v43,
      v37,
      a5,
      4,
      22,
      v48,
      (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
    v42 = a5;
    goto LABEL_149;
  }
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_10;
  v18 = 34;
LABEL_9:
  LOBYTE(v12) = v10;
  WPP_RECORDER_AND_TRACE_SF_(
    v17->AttachedDevice,
    v12,
    v14,
    v15,
    2,
    22,
    v18,
    (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
LABEL_10:
  v19 = 5;
LABEL_11:
  UserSetLastError(v19);
LABEL_171:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v53);
  UserSessionSwitchLeaveCrit(v50);
  return v16;
}
