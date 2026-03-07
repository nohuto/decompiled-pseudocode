PDEVICE_OBJECT *__fastcall anonymous_namespace_::xxxMigrateWindowPosition(
        struct tagRECT *retstr,
        __int64 a2,
        CMonitorTopology *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rax
  struct tagRECT v9; // xmm0
  char v10; // si
  PDEVICE_OBJECT *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // r9d
  PDEVICE_OBJECT *v15; // r14
  int v16; // esi
  int v17; // r15d
  char v18; // bl
  struct tagWND *v19; // rax
  char v20; // si
  PDEVICE_OBJECT v21; // rsi
  char v22; // r14
  char v23; // r15
  unsigned int WindowState; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  const char *v28; // rax
  _DWORD *v29; // rcx
  unsigned __int64 v30; // r8
  __int16 v31; // ax
  char v32; // al
  LONG right; // r8d
  const char *StateString; // rax
  __int64 v35; // r10
  char v36; // dl
  char v37; // r8
  struct tagRECT *Prop; // rax
  int v39; // edx
  char v40; // si
  unsigned __int64 v41; // r8
  CMonitorTopology::MonitorData *v42; // rax
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v43; // r8
  struct tagRECT v44; // xmm0
  __int64 v45; // r8
  int v46; // r8d
  int v47; // [rsp+20h] [rbp-E0h]
  __int64 v48; // [rsp+48h] [rbp-B8h]
  __int64 v49; // [rsp+50h] [rbp-B0h]
  __int64 v50; // [rsp+58h] [rbp-A8h]
  __int64 v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h]
  char v53; // [rsp+80h] [rbp-80h]
  unsigned int v54; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v55; // [rsp+88h] [rbp-78h]
  struct tagRECT v56; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v57; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v58; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v60[24]; // [rsp+C8h] [rbp-38h]
  __int128 v61; // [rsp+E0h] [rbp-20h]
  struct tagRECT v62; // [rsp+F0h] [rbp-10h] BYREF

  v5 = *(_QWORD *)&retstr[2].right;
  v55 = a2;
  v9 = *(struct tagRECT *)(v5 + 88);
  v57 = v9;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v10 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a2) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a2) = 0;
  }
  if ( v10 || (_BYTE)a2 )
  {
    v30 = HIDWORD(*(_QWORD *)&v57.left);
    LOBYTE(v30) = a2;
    LOBYTE(a2) = v10;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      v30,
      (_DWORD)gFullLog,
      5,
      25,
      40,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      v57.left,
      v57.top,
      v57.right,
      v57.bottom,
      LOBYTE(v57.right) - LOBYTE(v57.left),
      LOBYTE(v57.bottom) - LOBYTE(v57.top));
    v9 = v57;
  }
  v58 = v9;
  result = (PDEVICE_OBJECT *)CMonitorTopology::MonitorDataFromRect(a3, (const struct tagWND *)retstr, &v58);
  v14 = 0;
  v15 = result;
  if ( result )
  {
    LOBYTE(v16) = 1;
    v53 = 0;
    v17 = 524308;
    v18 = 0;
    if ( (dword_1C035C1FC & 1) != 0 && IsSemiMaximized((const struct tagWND *)retstr) )
    {
      v54 = v14;
      v53 = 1;
      v58 = 0LL;
      CMonitorTopology::MonitorData::LogicalWorkArea(
        (CMonitorTopology::MonitorData *)v15,
        &v62,
        (const struct tagWND *)retstr);
      v31 = *((_WORD *)v15 + 20);
      v56 = v57;
      LOWORD(v47) = v31;
      v32 = CallShell::xxxMigrateWindowHandler(
              retstr,
              ((a4 >> 1) & 1) == 0,
              v15 + 3,
              &v62,
              v47,
              &v56,
              v55,
              &v58,
              &v54,
              &a5);
      v14 = 0;
      if ( v32 )
      {
        if ( v54 != 3 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
            || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v12) = 0;
          }
          if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            StateString = (const char *)AdvancedWindowPos::GetStateString(v54, v12, v13, 0LL);
            WPP_RECORDER_AND_TRACE_SF_s(
              *(_QWORD *)(v35 + 24),
              v36,
              v37,
              (__int64)gFullLog,
              4u,
              0x19u,
              0x2Au,
              (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
              StateString);
          }
          Prop = (struct tagRECT *)GetProp(
                                     (__int64)retstr,
                                     *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1),
                                     1u);
          if ( Prop )
          {
            v57 = *Prop;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
              || (v40 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
            {
              v40 = 0;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              || (LOBYTE(v39) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
            {
              LOBYTE(v39) = 0;
            }
            if ( v40 || (_BYTE)v39 )
            {
              v41 = HIDWORD(*(_QWORD *)&v57.left);
              LOBYTE(v41) = v39;
              LOBYTE(v39) = v40;
              WPP_RECORDER_AND_TRACE_SF_dddddd(
                WPP_GLOBAL_Control->AttachedDevice,
                v39,
                v41,
                (_DWORD)gFullLog,
                5,
                25,
                43,
                (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
                v57.left,
                v57.top,
                v57.right,
                v57.bottom,
                LOBYTE(v57.right) - LOBYTE(v57.left),
                LOBYTE(v57.bottom) - LOBYTE(v57.top));
            }
          }
          v56 = v57;
          v42 = CMonitorTopology::MonitorDataFromRect(a3, (const struct tagWND *)retstr, &v56);
          if ( v42 )
          {
            v44 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                                       (struct tagWND *)&v56,
                                       retstr,
                                       &v57.left,
                                       v55,
                                       v42,
                                       1);
            v57 = v44;
          }
          else
          {
            v44 = v57;
          }
          *(_DWORD *)v60 = v54;
          LODWORD(v61) = a5;
          v59 = 0LL;
          *(_DWORD *)&v60[4] = 95;
          *(struct tagRECT *)&v60[8] = v44;
          AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)retstr, (struct tagWND *)&v59, v43);
          v45 = 2LL;
          return (PDEVICE_OBJECT *)NotifyShell::ArrangementCompleted(retstr, a5, v45);
        }
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
          || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v12) = 0;
        }
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          right = v58.right;
          LOBYTE(right) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            right,
            (_DWORD)gFullLog,
            4,
            25,
            41,
            (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
            v58.left,
            v58.top,
            v58.right,
            v58.bottom,
            LOBYTE(v58.right) - LOBYTE(v58.left),
            LOBYTE(v58.bottom) - LOBYTE(v58.top));
          v14 = 0;
        }
        v17 = 13107220;
        v57 = v58;
        v18 = 1;
      }
      else
      {
        v16 = anonymous_namespace_::GetArrangedOptions(
                (struct tagWND *)&v57,
                (struct tagWND *)retstr,
                (CMonitorTopology::MonitorData *)v15) | 1;
        v14 = 0;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)&retstr[2].right + 31LL) & 1) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v12) = v14;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v13) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v14) )
      {
        LOBYTE(v13) = v14;
      }
      if ( (_BYTE)v12 || (_BYTE)v13 )
      {
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          25,
          44,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
        v14 = 0;
      }
      *(_DWORD *)&v60[16] = v14;
      v60[20] = v14;
      v59 = v55;
      *(_OWORD *)v60 = 0LL;
      v61 = 0LL;
      anonymous_namespace_::xxxAwpMinMaximizeEx(retstr, 3LL, 86LL, &v59);
    }
    else
    {
      if ( !v18 )
      {
        v19 = anonymous_namespace_::xxxNormalizeRect(
                (struct tagWND *)&v62,
                retstr,
                &v57.left,
                v55,
                (CMonitorTopology::MonitorData *)v15,
                v16);
        LOWORD(v14) = 0;
        v57 = *(struct tagRECT *)v19;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v20 = v14;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v12) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v14) )
      {
        LOBYTE(v12) = v14;
      }
      if ( v20 || (_BYTE)v12 )
      {
        v46 = v57.bottom - v57.top;
        LOBYTE(v46) = v12;
        LOBYTE(v12) = v20;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v46,
          (_DWORD)gFullLog,
          5,
          25,
          45,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v57.left,
          v57.top,
          v57.right,
          v57.bottom,
          LOBYTE(v57.right) - LOBYTE(v57.left),
          LOBYTE(v57.bottom) - LOBYTE(v57.top));
      }
      xxxSetWindowPos(
        (struct tagWND *)retstr,
        0LL,
        (unsigned int)v57.left,
        (unsigned int)v57.top,
        v57.right - v57.left,
        v57.bottom - v57.top,
        v17);
    }
    v21 = WPP_GLOBAL_Control;
    result = &WPP_GLOBAL_Control;
    v22 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WindowState = AdvancedWindowPos::GetWindowState(retstr);
      v28 = (const char *)AdvancedWindowPos::GetStateString(WindowState, v25, v26, v27);
      v29 = *(_DWORD **)&retstr[2].right;
      LODWORD(v52) = v29[24] - v29[22];
      LODWORD(v51) = v29[25];
      LODWORD(v50) = v29[24];
      LODWORD(v49) = v29[23];
      LODWORD(v48) = v29[22];
      result = (PDEVICE_OBJECT *)WPP_RECORDER_AND_TRACE_SF_sdddddd(
                                   (__int64)v21->AttachedDevice,
                                   v22,
                                   v23,
                                   (__int64)gFullLog,
                                   4u,
                                   0x19u,
                                   0x2Eu,
                                   (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
                                   v28,
                                   v48,
                                   v49,
                                   v50,
                                   v51,
                                   v52,
                                   (int)v51 - (int)v49);
    }
    if ( !v53 )
      return result;
    v45 = 1LL;
    return (PDEVICE_OBJECT *)NotifyShell::ArrangementCompleted(retstr, a5, v45);
  }
  return result;
}
