/*
 * XREFs of xxxProcessHidInput @ 0x1C014EB10
 * Callers:
 *     ProcessHidRawInput @ 0x1C014EAA0 (ProcessHidRawInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C004C704 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     PtiKbdFromQ @ 0x1C0060CFC (PtiKbdFromQ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00E2FC0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00E4DF4 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1C014EA20 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01A9724 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x1C01AA140 (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 */

__int64 __fastcall xxxProcessHidInput(struct DEVICEINFO *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r13
  int v5; // r12d
  __int64 v7; // r15
  void *v8; // r9
  __int64 result; // rax
  int v10; // edx
  int v11; // r8d
  char v12; // dl
  char v13; // r8
  PDEVICE_OBJECT v14; // rcx
  struct tagPROCESS_HID_REQUEST *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  struct tagWND *v18; // rbx
  struct tagQ *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  PDEVICE_OBJECT v22; // rbx
  char v23; // dl
  char v24; // r8
  __int64 v25; // rax
  int v26; // edx
  int v27; // r8d
  __int64 v28; // rcx
  struct tagPROCESS_HID_TABLE *i; // r14
  struct tagPROCESS_HID_REQUEST *v30; // rax
  struct tagWND *v31; // rbp
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int16 v36; // dx
  bool v37; // zf
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rcx
  char v47; // dl
  char v48; // r8
  int v49; // [rsp+20h] [rbp-78h]
  int v50; // [rsp+28h] [rbp-70h]
  int v51; // [rsp+30h] [rbp-68h]
  int v52; // [rsp+38h] [rbp-60h]
  void *v53; // [rsp+A8h] [rbp+10h]
  unsigned int v54; // [rsp+B0h] [rbp+18h]
  char v55; // [rsp+B8h] [rbp+20h] BYREF

  v54 = a3;
  v53 = (void *)a2;
  v3 = a3;
  v4 = 0LL;
  v5 = 0;
  v7 = 1LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v8 = &WPP_6caaa8c7a3813d7cd4d4ccb56d28098b_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (__int64)&WPP_6caaa8c7a3813d7cd4d4ccb56d28098b_Traceguids,
      5u,
      0x14u,
      0xFu,
      (__int64)&WPP_6caaa8c7a3813d7cd4d4ccb56d28098b_Traceguids);
  result = (unsigned int)*gpsi;
  if ( (result & 0x2000) == 0 )
  {
    if ( (result & 0x4000) == 0
      || (result = *((unsigned int *)a1 + 50), (result & 0x80u) != 0LL)
      && (result = *((_QWORD *)a1 + 57), *(_WORD *)(result + 42) == 13)
      && *(_WORD *)(result + 40) == 5 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v55, a2, a3, (__int64)v8);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v12 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v13 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v13 = 0;
      }
      if ( v12 || v13 )
        WPP_RECORDER_AND_TRACE_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          (__int64)gFullLog,
          5u,
          0x14u,
          0x10u,
          (__int64)&WPP_6caaa8c7a3813d7cd4d4ccb56d28098b_Traceguids);
      if ( gpqForeground )
      {
        v4 = *(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424);
        v15 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v4 + 848));
        if ( v15 )
        {
          v14 = (PDEVICE_OBJECT)gpqForeground;
          v18 = (struct tagWND *)*((_QWORD *)v15 + 4);
          v19 = (struct tagQ *)gpqForeground;
          if ( !v18
            || (v19 = *(struct tagQ **)(*((_QWORD *)v18 + 2) + 432LL), *(char *)(*((_QWORD *)v18 + 5) + 20LL) >= 0) )
          {
            if ( (*((_DWORD *)a1 + 46) & 0x20) == 0
              || (v20 = *(unsigned int *)(*((_QWORD *)a1 + 59) + 360LL), (v20 & 0x10) != 0)
              || (!(unsigned __int8)IsInputThread(v20, v16, v17)
                ? (v21 = *(_QWORD *)(gptiCurrent + 424LL) + 888LL)
                : (v21 = *((_QWORD *)a1 + 59) + 944LL),
                  (unsigned __int8)CheckAccess(v21, (char *)v19 + 432)) )
            {
              v7 = 1LL;
              if ( (unsigned int)PostHidInput(a1, v53, v3, v19, v18, 0LL) )
              {
                v5 = 1;
                v7 = 0LL;
              }
            }
          }
        }
        else
        {
          v22 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
            || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v23 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v24 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v24 = 0;
          }
          if ( v23 || v24 )
          {
            v25 = PtiKbdFromQ(gpqForeground);
            WPP_RECORDER_AND_TRACE_SF_DDq(
              v22->AttachedDevice,
              v26,
              v27,
              (_DWORD)gFullLog,
              v49,
              v50,
              v51,
              v52,
              *(_WORD *)(*((_QWORD *)a1 + 57) + 42LL),
              *(_WORD *)(*((_QWORD *)a1 + 57) + 40LL),
              *(_QWORD *)(v25 + 424));
          }
        }
      }
      else
      {
        v14 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v10) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v10 || (_BYTE)v11 )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v10,
            v11,
            (unsigned int)&WPP_6caaa8c7a3813d7cd4d4ccb56d28098b_Traceguids,
            5,
            20,
            17,
            (__int64)&WPP_6caaa8c7a3813d7cd4d4ccb56d28098b_Traceguids);
      }
      for ( i = *(struct tagPROCESS_HID_TABLE **)(SGDGetUserSessionState(v14) + 408);
            ;
            i = *(struct tagPROCESS_HID_TABLE **)i )
      {
        result = SGDGetUserSessionState(v28) + 408;
        if ( i == (struct tagPROCESS_HID_TABLE *)result )
        {
LABEL_83:
          if ( v5 )
          {
            result = *((unsigned int *)a1 + 50);
            if ( (result & 0x40) == 0 )
              result = CInputGlobals::UpdateInputGlobals(
                         gpInputGlobals,
                         (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                         4LL);
          }
          if ( !v55 )
            return UserSessionSwitchLeaveCrit(v28, v38, v39, v40);
          return result;
        }
        if ( *((int *)i + 20) > 0 )
        {
          v30 = HidIsRequestedByThisProcess(a1, i);
          if ( v30 )
          {
            v28 = *((unsigned int *)v30 + 5);
            if ( (v28 & 1) != 0 && ((v28 & 2) == 0 || v7) )
            {
              if ( *((_QWORD *)v30 + 5) )
              {
                (*((void (__fastcall **)(struct DEVICEINFO *))v30 + 5))(a1);
                continue;
              }
              v31 = (struct tagWND *)*((_QWORD *)v30 + 4);
              v32 = *((_QWORD *)v31 + 2);
              if ( *(_QWORD *)(v32 + 424) != v4 )
              {
                v28 = grpdeskRitInput;
                if ( *((_QWORD *)v31 + 3) == grpdeskRitInput )
                {
                  v33 = *((_QWORD *)v31 + 5);
                  if ( *(char *)(v33 + 20) >= 0 && *(char *)(v33 + 19) >= 0 )
                    break;
                }
              }
            }
          }
        }
LABEL_81:
        ;
      }
      v34 = *((_QWORD *)a1 + 58);
      v35 = *(unsigned __int16 *)(v34 + 16);
      v36 = *(_WORD *)(v34 + 18);
      if ( (_WORD)v35 == 12 )
      {
        v37 = v36 == 1;
      }
      else
      {
        if ( (_WORD)v35 != 1 )
        {
          if ( (unsigned __int16)v35 >= 0xFF00u )
            goto LABEL_99;
          goto LABEL_77;
        }
        v37 = v36 == 9;
      }
      if ( v37 )
      {
LABEL_99:
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || (v47 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v47 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v48 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v48 = 0;
        }
        if ( v47 || v48 )
          WPP_RECORDER_AND_TRACE_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v47,
            v48,
            (__int64)gFullLog,
            5u,
            0x14u,
            0x13u,
            (__int64)&WPP_6caaa8c7a3813d7cd4d4ccb56d28098b_Traceguids,
            v31,
            *(_QWORD *)(*((_QWORD *)v31 + 2) + 432LL));
        result = PostHidInput(a1, v53, v54, *(struct tagQ **)(*((_QWORD *)v31 + 2) + 432LL), v31, 1uLL);
        if ( !(_DWORD)result )
          goto LABEL_83;
        v5 = 1;
        goto LABEL_81;
      }
LABEL_77:
      if ( gpqForeground )
      {
        if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(v32 + 432) + 432LL, gpqForeground + 432LL) )
        {
          v35 = *((_QWORD *)v31 + 2);
          if ( *(int *)(*(_QWORD *)(v35 + 424) + 12LL) >= 0 )
          {
            EtwTraceUIPIInputError(v35, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 432LL));
            goto LABEL_81;
          }
        }
      }
      v41 = SGDGetUserSessionState(v35) + 240;
      RIMLockShared(v41);
      if ( (*((_DWORD *)a1 + 46) & 0x2000) != 0 )
      {
        v44 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 88LL);
        if ( !v44
          || *(int *)(v44 + 12) >= 0
          && ((v45 = *(_QWORD *)(*((_QWORD *)v31 + 2) + 432LL), !(unsigned __int8)IsInputThread(v44, v42, v43))
           || (*((_DWORD *)a1 + 50) & 0x80u) == 0
            ? (v46 = *(_QWORD *)(gptiCurrent + 424LL) + 888LL)
            : (v46 = *((_QWORD *)a1 + 59) + 944LL),
              !(unsigned __int8)CheckAccess(v46, v45 + 432)) )
        {
          RIMUnlockShared(v41);
          goto LABEL_81;
        }
      }
      RIMUnlockShared(v41);
      goto LABEL_99;
    }
  }
  return result;
}
