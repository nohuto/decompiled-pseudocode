void __fastcall AdvancedWindowPos::xxxApplyWindowPos(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        const struct AdvancedWindowPos::WINDOWPOSANDSTATE *a3)
{
  char v4; // r9
  char v6; // si
  char v7; // dl
  const char *StateString; // rax
  __int64 v9; // r10
  char v10; // dl
  char v11; // r8
  __int64 v12; // r11
  int v13; // edx
  int v14; // ebx
  const struct tagRECT *v15; // rcx
  char v16; // r15
  int v17; // r14d
  int WindowState; // eax
  int v19; // r8d
  struct tagWND *v20; // r9
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // edi
  int v24; // edx
  int v25; // edx
  int v26; // r12d
  char v27; // dl
  char v28; // r8
  struct tagWND *v29; // rbx
  unsigned int v30; // r8d
  char v31; // dl
  _DWORD *v32; // rax
  struct tagRECT *v33; // r15
  int v34; // edx
  struct tagMONITOR *v35; // r8
  __int64 v36; // rdx
  unsigned int v37; // edi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct tagMONITOR *v41; // r8
  _OWORD *Prop; // r14
  char v43; // dl
  int v44; // r12d
  const struct tagRECT *v45; // rcx
  char v46; // dl
  char v47; // r8
  int v48; // edx
  struct tagMONITOR *v49; // r8
  int v50; // r9d
  struct _DEVICE_OBJECT *v51; // r10
  char v52; // dl
  char v53; // r8
  const char *v54; // rax
  __int64 v55; // r10
  char v56; // dl
  char v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rbx
  PDEVICE_OBJECT v61; // r14
  int v62; // eax
  const char *v63; // rax
  _DWORD *v64; // rcx
  char v65; // r8
  __int64 v66; // [rsp+40h] [rbp-C0h]
  __int64 v67; // [rsp+48h] [rbp-B8h]
  __int64 v68; // [rsp+50h] [rbp-B0h]
  __int64 v69; // [rsp+58h] [rbp-A8h]
  __int64 v70; // [rsp+60h] [rbp-A0h]
  __int64 v71; // [rsp+68h] [rbp-98h]
  __int64 v72; // [rsp+70h] [rbp-90h]
  char v73; // [rsp+80h] [rbp-80h]
  unsigned __int8 v74; // [rsp+81h] [rbp-7Fh]
  char v75; // [rsp+82h] [rbp-7Eh]
  char v76; // [rsp+83h] [rbp-7Dh]
  int v77; // [rsp+84h] [rbp-7Ch]
  int v78; // [rsp+88h] [rbp-78h]
  int v79; // [rsp+90h] [rbp-70h]
  struct tagRECT *v80; // [rsp+98h] [rbp-68h]
  struct tagWND *v81; // [rsp+A0h] [rbp-60h]
  struct tagRECT v82; // [rsp+A0h] [rbp-60h]
  int v83; // [rsp+B0h] [rbp-50h]
  __int128 v85; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v86; // [rsp+D0h] [rbp-30h]
  __int128 v87; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v88; // [rsp+E8h] [rbp-18h]
  _QWORD v89[3]; // [rsp+F0h] [rbp-10h] BYREF
  int v90; // [rsp+108h] [rbp+8h]
  char v91; // [rsp+10Ch] [rbp+Ch]
  __int128 v92; // [rsp+110h] [rbp+10h]

  v4 = 0;
  if ( *((_QWORD *)this + 2) != gptiCurrent )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
    v4 = 0;
  }
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v7 = 0;
  }
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    StateString = AdvancedWindowPos::GetStateString(*((_DWORD *)a2 + 2));
    WPP_RECORDER_AND_TRACE_SF_qs(
      *(_QWORD *)(v9 + 24),
      v10,
      v11,
      (__int64)gFullLog,
      4u,
      0x19u,
      0x3Au,
      v12,
      *(_QWORD *)this,
      StateString);
    v4 = 0;
  }
  v13 = *((_DWORD *)a2 + 3);
  v74 = v13 & 1;
  v14 = v13 & 0x20;
  v83 = v13 & 0x10;
  v79 = v13 & 2;
  v78 = v13 & 8;
  if ( (v13 & 4) != 0 || (v73 = 0, (*((_DWORD *)a2 + 3) & 8) != 0) )
    v73 = 1;
  v15 = (const struct tagRECT *)((char *)a2 + 16);
  v80 = (struct tagRECT *)((char *)a2 + 16);
  if ( (v13 & 0x40) != 0 || (v16 = 1, IsRectEmptyInl(v15)) )
    v16 = v4;
  v75 = v16;
  if ( (v13 & 0x100) != 0 || (v76 = 1, IsRectEmptyInl(v15)) )
    v76 = v4;
  v17 = *((_DWORD *)a2 + 2);
  if ( v17 == 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1322);
  WindowState = AdvancedWindowPos::GetWindowState(this);
  v21 = *((_DWORD *)a2 + 3);
  v77 = WindowState;
  v22 = (v21 & 0x200) << 7;
  v23 = v22 | 0x20;
  v24 = v21 & 0x80;
  if ( !v24 )
    v23 = v22;
  v25 = -v24;
  v26 = v25 != 0 ? 1048640 : 64;
  if ( v74 != (_BYTE)v20 )
  {
    v23 |= 0x10u;
    v26 |= 0x10u;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v25) = (_BYTE)v20;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v19) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v20) )
    {
      LOBYTE(v19) = (_BYTE)v20;
    }
    if ( (_BYTE)v25 || (_BYTE)v19 )
    {
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v25,
        v19,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        25,
        59,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
      v20 = 0LL;
    }
    if ( v79 != (_DWORD)v20 )
    {
      v23 |= 0x40u;
      v26 |= 4u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v25) = (_BYTE)v20;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v19) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v20) )
      {
        LOBYTE(v19) = (_BYTE)v20;
      }
      if ( (_BYTE)v25 || (_BYTE)v19 )
      {
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v25,
          v19,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          25,
          60,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
        v20 = 0LL;
      }
    }
  }
  if ( v14 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (v27 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v27 = (char)v20;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v28 = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v20) )
    {
      v28 = (char)v20;
    }
    if ( v27 || v28 )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v27,
        v28,
        61LL,
        5u,
        0x19u,
        0x3Du,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        *(_QWORD *)this);
    xxxSetForegroundWindowWithOptions((__int64)this, 0x1Fu, 0, 0);
    v20 = 0LL;
  }
  v29 = v20;
  v81 = v20;
  if ( v73 != (_BYTE)v20 )
  {
    v30 = v16 ? 18 : *(_DWORD *)(*((_QWORD *)this + 5) + 288LL);
    v29 = (struct tagWND *)MonitorFromRect((__int64)v80, 2u, v30);
    v81 = v29;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v20 = 0LL;
      v31 = 0;
    }
    else
    {
      v31 = 1;
      v20 = 0LL;
    }
    if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = (_DWORD *)*((_QWORD *)v29 + 5);
      LODWORD(v67) = v32[8];
      LODWORD(v66) = v32[7];
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v31,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        0x19u,
        0x3Eu,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v66,
        v67,
        v32[9],
        v32[10],
        v32[9] - v66,
        v32[10] - v67);
      v20 = 0LL;
    }
  }
  v33 = (struct tagRECT *)v20;
  if ( v78 != (_DWORD)v20 )
  {
    v33 = v80;
    v23 |= 8u;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v25) = (_BYTE)v20;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v19) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v20) )
    {
      LOBYTE(v19) = (_BYTE)v20;
    }
    if ( (_BYTE)v25 || (_BYTE)v19 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v25,
        v19,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        25,
        63,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
  }
  v85 = 0LL;
  v86 = 0LL;
  ThreadLock(v29, &v85);
  v89[0] = v29;
  v89[1] = v33;
  v91 = 0;
  v89[2] = *(_QWORD *)a2;
  v90 = *((_DWORD *)a2 + 8);
  v92 = 0LL;
  if ( v17 == 2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v34) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v35) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v35) = 0;
    }
    if ( (_BYTE)v34 || (_BYTE)v35 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v34,
        (_DWORD)v35,
        0,
        5,
        25,
        64,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    if ( v79 )
      v23 |= 0x40u;
    v36 = (unsigned int)v74 + 6;
LABEL_197:
    anonymous_namespace_::xxxAwpMinMaximizeEx(this, v36, v23, v89);
    goto LABEL_215;
  }
  if ( v17 == 1 )
  {
    v37 = v23 | 2;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v34) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v35) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v35) = 0;
    }
    if ( (_BYTE)v34 || (_BYTE)v35 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v34,
        (_DWORD)v35,
        0,
        5,
        25,
        65,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    if ( v73 )
    {
      v37 |= 4u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v34) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v35) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v35) = 0;
      }
      if ( (_BYTE)v34 || (_BYTE)v35 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v34,
          (_DWORD)v35,
          0,
          5,
          25,
          66,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
      if ( !v78 )
        AdvancedWindowPos::MigrateCheckpoint(this, v29, v35);
    }
    anonymous_namespace_::xxxAwpMinMaximizeEx(this, 3LL, v37, v89);
    if ( v78 )
    {
      Prop = (_OWORD *)GetProp((__int64)this, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
      if ( Prop )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || (v43 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v43 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v41) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v41) = 0;
        }
        if ( v43 || (_BYTE)v41 )
        {
          LODWORD(v71) = v33->right - v33->left;
          LODWORD(v70) = v33->bottom;
          LODWORD(v69) = v33->right;
          LODWORD(v68) = v33->top;
          LODWORD(v67) = v33->left;
          WPP_RECORDER_AND_TRACE_SF_sdddddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v43,
            (char)v41,
            (__int64)gFullLog,
            5u,
            0x19u,
            0x43u,
            (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
            "explicit",
            v67,
            v68,
            v69,
            v70,
            v71,
            v70 - v68);
          v29 = v81;
        }
        *Prop = *v33;
      }
      AdvancedWindowPos::MigrateCheckpoint(this, v29, v41);
    }
  }
  else
  {
    v44 = v26 | 0x80000;
    v23 |= 0x80u;
    if ( v75 )
    {
      v44 |= 0x800000u;
      v23 |= 0x200u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v34) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v35) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v35) = 0;
      }
      if ( (_BYTE)v34 || (_BYTE)v35 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v34,
          (_DWORD)v35,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          25,
          68,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    }
    if ( v76 )
    {
      v44 |= 0x400000u;
      v23 |= 0x100u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v34) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v35) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v35) = 0;
      }
      if ( (_BYTE)v34 || (_BYTE)v35 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v34,
          (_DWORD)v35,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          25,
          69,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    }
    v45 = v80;
    v82 = *v80;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || (v46 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v46 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v47 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v47 = 0;
    }
    if ( v46 || v47 )
    {
      LODWORD(v71) = v82.bottom - v82.top;
      LODWORD(v70) = v82.right - v82.left;
      LODWORD(v69) = HIDWORD(*(unsigned __int128 *)v80);
      LODWORD(v68) = *(_QWORD *)&v80->right;
      LODWORD(v67) = HIDWORD(*(_QWORD *)&v80->left);
      LODWORD(v66) = *v80;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v46,
        v47,
        (__int64)gFullLog,
        5u,
        0x19u,
        0x46u,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      v45 = v80;
    }
    if ( v77 )
    {
      if ( IsSemiMaximized(this) )
      {
        v23 |= 4u;
        if ( WPP_GLOBAL_Control == v51
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || (LOBYTE(v48) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v48) = v50;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v49) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v50) )
        {
          LOBYTE(v49) = v50;
        }
        if ( (_BYTE)v48 || (_BYTE)v49 )
        {
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v48,
            (_DWORD)v49,
            (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
            5,
            25,
            71,
            (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
          v50 = 0;
          v51 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
        }
      }
      if ( v29 && v78 == v50 )
      {
        if ( WPP_GLOBAL_Control == v51
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || (LOBYTE(v48) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v48) = v50;
        }
        LOBYTE(v49) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v48,
            (_DWORD)v49,
            (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
            4,
            25,
            72,
            (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
        AdvancedWindowPos::MigrateCheckpoint(this, v29, v49);
        LOWORD(v50) = 0;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (v52 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v52 = v50;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v53 = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v50) )
      {
        v53 = v50;
      }
      if ( v52 || v53 )
      {
        v54 = AdvancedWindowPos::GetStateString(v77);
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(v55 + 24),
          v56,
          v57,
          (__int64)gFullLog,
          5u,
          0x19u,
          0x49u,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v54);
      }
      v36 = 9LL;
      goto LABEL_197;
    }
    if ( !IsRectEmptyInl(v45) )
    {
      v88 = 0LL;
      v87 = 0LL;
      if ( *(_QWORD *)a2 )
      {
        v59 = HMValidateHandleNoSecure(*(_QWORD *)a2, 1);
        LOWORD(v58) = 0;
        v60 = v59;
        if ( v59 )
        {
          ThreadLockAlways(v59, &v87);
          LOWORD(v58) = 0;
        }
      }
      else
      {
        v60 = v58;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (LOBYTE(v38) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v38) = v58;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v40) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v58) )
      {
        LOBYTE(v40) = v58;
      }
      if ( (_BYTE)v38 || (_BYTE)v40 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v38,
          v40,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          25,
          74,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
      xxxSetWindowPos(
        this,
        v60,
        (unsigned int)v82.left,
        (unsigned int)v82.top,
        v82.right - v82.left,
        v82.bottom - v82.top,
        v44);
      if ( v60 )
        ThreadUnlock1(v39, v38, v40);
    }
  }
LABEL_215:
  ThreadUnlock1(v39, v38, v40);
  v61 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v62 = AdvancedWindowPos::GetWindowState(this);
    v63 = AdvancedWindowPos::GetStateString(v62);
    v64 = (_DWORD *)*((_QWORD *)this + 5);
    LODWORD(v72) = v64[25] - v64[23];
    LODWORD(v71) = v64[24] - v64[22];
    LODWORD(v70) = v64[25];
    LODWORD(v69) = v64[24];
    LODWORD(v68) = v64[23];
    LODWORD(v67) = v64[22];
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      (__int64)v61->AttachedDevice,
      v6,
      v65,
      (__int64)gFullLog,
      4u,
      0x19u,
      0x4Bu,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      v63,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  if ( v83 )
    ShellWindowPos::NotifyPosAndStateApplied(this, v77, v80, v90);
}
