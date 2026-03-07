__int64 __fastcall xxxProcessHidInput(struct DEVICEINFO *a1, void *a2, unsigned int a3)
{
  __int64 v4; // r13
  int v5; // r12d
  __int64 v7; // r15
  char v8; // dl
  char v9; // r8
  __int64 result; // rax
  int v11; // edx
  int v12; // r8d
  char v13; // dl
  char v14; // r8
  PDEVICE_OBJECT v15; // rcx
  struct tagPROCESS_HID_REQUEST *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  struct tagWND *v19; // rbx
  struct tagQ *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  PDEVICE_OBJECT v23; // rbx
  char v24; // dl
  char v25; // r8
  __int64 v26; // rax
  int v27; // edx
  int v28; // r8d
  __int64 v29; // rcx
  struct tagPROCESS_HID_TABLE *i; // r14
  struct tagPROCESS_HID_REQUEST *v31; // rax
  struct tagWND *v32; // rbp
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int16 v37; // dx
  bool v38; // zf
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rcx
  char v45; // dl
  char v46; // r8
  int v47; // [rsp+20h] [rbp-78h]
  int v48; // [rsp+28h] [rbp-70h]
  int v49; // [rsp+30h] [rbp-68h]
  int v50; // [rsp+38h] [rbp-60h]
  char v53; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0;
  v7 = 1LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v8 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v9 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v9 = 0;
  }
  if ( v8 || v9 )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      (__int64)&WPP_e7299fcd49913fcca089fbf2339849b9_Traceguids,
      5u,
      4u,
      0xFu,
      (__int64)&WPP_e7299fcd49913fcca089fbf2339849b9_Traceguids);
  result = (unsigned int)*gpsi;
  if ( (result & 0x2000) == 0 )
  {
    if ( (result & 0x4000) == 0
      || (result = *((unsigned int *)a1 + 50), (result & 0x80u) != 0LL)
      && (result = *((_QWORD *)a1 + 57), *(_WORD *)(result + 42) == 13)
      && *(_WORD *)(result + 40) == 5 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v53);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v13 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v14 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v14 = 0;
      }
      if ( v13 || v14 )
        WPP_RECORDER_AND_TRACE_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v14,
          (__int64)gFullLog,
          5u,
          4u,
          0x10u,
          (__int64)&WPP_e7299fcd49913fcca089fbf2339849b9_Traceguids);
      if ( gpqForeground )
      {
        v4 = *(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424);
        v16 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v4 + 824));
        if ( v16 )
        {
          v15 = (PDEVICE_OBJECT)gpqForeground;
          v19 = (struct tagWND *)*((_QWORD *)v16 + 4);
          v20 = (struct tagQ *)gpqForeground;
          if ( !v19
            || (v20 = *(struct tagQ **)(*((_QWORD *)v19 + 2) + 432LL), *(char *)(*((_QWORD *)v19 + 5) + 20LL) >= 0) )
          {
            if ( (*((_DWORD *)a1 + 46) & 0x20) == 0
              || (v21 = *(unsigned int *)(*((_QWORD *)a1 + 59) + 360LL), (v21 & 0x10) != 0)
              || (!(unsigned __int8)IsInputThread(v21, v17, v18)
                ? (v22 = *(_QWORD *)(gptiCurrent + 424LL) + 864LL)
                : (v22 = *((_QWORD *)a1 + 59) + 944LL),
                  (unsigned __int8)CheckAccess(v22, (char *)v20 + 432)) )
            {
              v7 = 1LL;
              if ( (unsigned int)PostHidInput(a1, a2, a3, v20, v19, 0LL) )
              {
                v5 = 1;
                v7 = 0LL;
              }
            }
          }
        }
        else
        {
          v23 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
            || (v24 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v24 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v25 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v25 = 0;
          }
          if ( v24 || v25 )
          {
            v26 = PtiKbdFromQ(gpqForeground);
            WPP_RECORDER_AND_TRACE_SF_DDq(
              v23->AttachedDevice,
              v27,
              v28,
              (_DWORD)gFullLog,
              v47,
              v48,
              v49,
              v50,
              *(_WORD *)(*((_QWORD *)a1 + 57) + 42LL),
              *(_WORD *)(*((_QWORD *)a1 + 57) + 40LL),
              *(_QWORD *)(v26 + 424));
          }
        }
      }
      else
      {
        v15 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v12) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v12) = 0;
        }
        if ( (_BYTE)v11 || (_BYTE)v12 )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            v12,
            (unsigned int)&WPP_e7299fcd49913fcca089fbf2339849b9_Traceguids,
            5,
            4,
            17,
            (__int64)&WPP_e7299fcd49913fcca089fbf2339849b9_Traceguids);
      }
      for ( i = *(struct tagPROCESS_HID_TABLE **)(SGDGetUserSessionState(v15) + 408);
            ;
            i = *(struct tagPROCESS_HID_TABLE **)i )
      {
        result = SGDGetUserSessionState(v29) + 408;
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
          if ( !v53 )
            return UserSessionSwitchLeaveCrit(v29);
          return result;
        }
        if ( *((int *)i + 20) > 0 )
        {
          v31 = HidIsRequestedByThisProcess(a1, i);
          if ( v31 )
          {
            v29 = *((unsigned int *)v31 + 5);
            if ( (v29 & 1) != 0 && ((v29 & 2) == 0 || v7) )
            {
              if ( *((_QWORD *)v31 + 5) )
              {
                (*((void (__fastcall **)(struct DEVICEINFO *))v31 + 5))(a1);
                continue;
              }
              v32 = (struct tagWND *)*((_QWORD *)v31 + 4);
              v33 = *((_QWORD *)v32 + 2);
              if ( *(_QWORD *)(v33 + 424) != v4 )
              {
                v29 = grpdeskRitInput;
                if ( *((_QWORD *)v32 + 3) == grpdeskRitInput )
                {
                  v34 = *((_QWORD *)v32 + 5);
                  if ( *(char *)(v34 + 20) >= 0 && *(char *)(v34 + 19) >= 0 )
                    break;
                }
              }
            }
          }
        }
LABEL_81:
        ;
      }
      v35 = *((_QWORD *)a1 + 58);
      v36 = *(unsigned __int16 *)(v35 + 16);
      v37 = *(_WORD *)(v35 + 18);
      if ( (_WORD)v36 == 12 )
      {
        v38 = v37 == 1;
      }
      else
      {
        if ( (_WORD)v36 != 1 )
        {
          if ( (unsigned __int16)v36 >= 0xFF00u )
            goto LABEL_99;
          goto LABEL_77;
        }
        v38 = v37 == 9;
      }
      if ( v38 )
      {
LABEL_99:
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
          || (v45 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v45 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v46 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v46 = 0;
        }
        if ( v45 || v46 )
          WPP_RECORDER_AND_TRACE_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v45,
            v46,
            (__int64)gFullLog,
            5u,
            4u,
            0x13u,
            (__int64)&WPP_e7299fcd49913fcca089fbf2339849b9_Traceguids,
            v32,
            *(_QWORD *)(*((_QWORD *)v32 + 2) + 432LL));
        result = PostHidInput(a1, a2, a3, *(struct tagQ **)(*((_QWORD *)v32 + 2) + 432LL), v32, 1uLL);
        if ( !(_DWORD)result )
          goto LABEL_83;
        v5 = 1;
        goto LABEL_81;
      }
LABEL_77:
      if ( gpqForeground )
      {
        if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(v33 + 432) + 432LL, gpqForeground + 432LL) )
        {
          v36 = *((_QWORD *)v32 + 2);
          if ( *(int *)(*(_QWORD *)(v36 + 424) + 12LL) >= 0 )
          {
            EtwTraceUIPIInputError(v36, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 432LL), 5);
            goto LABEL_81;
          }
        }
      }
      v39 = SGDGetUserSessionState(v36) + 240;
      RIMLockShared(v39);
      if ( (*((_DWORD *)a1 + 46) & 0x2000) != 0 )
      {
        v42 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 88LL);
        if ( !v42
          || *(int *)(v42 + 12) >= 0
          && ((v43 = *(_QWORD *)(*((_QWORD *)v32 + 2) + 432LL), !(unsigned __int8)IsInputThread(v42, v40, v41))
           || (*((_DWORD *)a1 + 50) & 0x80u) == 0
            ? (v44 = *(_QWORD *)(gptiCurrent + 424LL) + 864LL)
            : (v44 = *((_QWORD *)a1 + 59) + 944LL),
              !(unsigned __int8)CheckAccess(v44, v43 + 432)) )
        {
          RIMUnlockShared(v39);
          goto LABEL_81;
        }
      }
      RIMUnlockShared(v39);
      goto LABEL_99;
    }
  }
  return result;
}
