/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x1C01DF6D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C00132A8 (UserSetLastStatus.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C008E52C (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x1C008E76C (xxxNotifyMonitorChanged.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00B4624 (IsTopLevelOrLayeredChildWindow.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     GetNewMonitor @ 0x1C010B39C (GetNewMonitor.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01BA7E4 (xxxAppAdjustDpiCandidateRect.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BD720 (zzzUpdateLayeredWindow.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        HDC a2,
        ULONG64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        ULONG64 a8,
        unsigned int a9,
        ULONG64 a10)
{
  _DWORD *v12; // r12
  __int128 *v13; // r15
  const struct tagPOINT *v14; // r14
  struct tagRECT *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagWND *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ebx
  _QWORD *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  ULONG64 *v26; // rdx
  __int64 *v27; // r13
  __int64 v28; // rbx
  __int64 v29; // r15
  NTSTATUS updated; // eax
  __int64 NewMonitor; // rax
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int16 v35; // r14
  __int64 v36; // rdx
  ULONG64 v38; // [rsp+50h] [rbp-118h] BYREF
  _DWORD v39[4]; // [rsp+58h] [rbp-110h] BYREF
  int v40; // [rsp+68h] [rbp-100h]
  __int64 v41; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+78h] [rbp-F0h] BYREF
  ULONG64 v43; // [rsp+80h] [rbp-E8h] BYREF
  __int64 *v44; // [rsp+88h] [rbp-E0h]
  __int64 v45; // [rsp+90h] [rbp-D8h]
  struct tagSIZE *v46; // [rsp+98h] [rbp-D0h]
  HDC v47[3]; // [rsp+A0h] [rbp-C8h] BYREF
  ULONG64 *v48; // [rsp+B8h] [rbp-B0h]
  __int128 *v49; // [rsp+C0h] [rbp-A8h]
  __int64 v50; // [rsp+C8h] [rbp-A0h]
  __int128 v51; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-88h]
  __int128 v53; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v54; // [rsp+100h] [rbp-68h]
  __int128 v55; // [rsp+108h] [rbp-60h] BYREF
  __int128 v56; // [rsp+118h] [rbp-50h] BYREF

  v38 = a3;
  v47[0] = a2;
  v50 = a5;
  *(_QWORD *)&v55 = a6;
  v12 = (_DWORD *)a8;
  v13 = (__int128 *)a10;
  v42 = 0LL;
  v45 = 0LL;
  v41 = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  v14 = 0LL;
  v48 = 0LL;
  v39[0] = 0;
  v44 = 0LL;
  v56 = 0LL;
  v15 = 0LL;
  v49 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  EnterCrit(0LL, 0LL);
  v18 = (struct tagWND *)ValidateHwnd(a1);
  if ( v18 )
  {
    *(_QWORD *)&v51 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v51;
    *((_QWORD *)&v51 + 1) = v18;
    HMLockObject(v18);
    v22 = (_QWORD *)v55;
    if ( (_QWORD)v55 )
    {
      if ( (unsigned __int64)v55 >= MmUserProbeAddress )
        v22 = (_QWORD *)MmUserProbeAddress;
      *(_QWORD *)&v55 = *v22;
      v42 = v55;
      v45 = (__int64)&v42;
    }
    if ( !a4 )
      goto LABEL_13;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int64 *)MmUserProbeAddress;
    v41 = *a4;
    v46 = (struct tagSIZE *)&v41;
    if ( (int)v41 < 0 || v41 < 0 )
    {
      v21 = 0;
      v40 = 0;
      UserSetLastError(87);
    }
    else
    {
LABEL_13:
      v26 = (ULONG64 *)v38;
      if ( v38 )
      {
        if ( v38 >= MmUserProbeAddress )
          v26 = (ULONG64 *)MmUserProbeAddress;
        v38 = *v26;
        v43 = v38;
        v14 = (const struct tagPOINT *)&v43;
        v48 = &v43;
      }
      if ( a8 )
      {
        if ( a8 >= MmUserProbeAddress )
          v12 = (_DWORD *)MmUserProbeAddress;
        v39[0] = *v12;
        v27 = (__int64 *)v39;
        v44 = (__int64 *)v39;
      }
      else
      {
        v27 = v44;
      }
      if ( a10 )
      {
        if ( a10 >= MmUserProbeAddress )
          v13 = (__int128 *)MmUserProbeAddress;
        v56 = *v13;
        v15 = (struct tagRECT *)&v56;
        v49 = &v56;
      }
      if ( (a9 & 0xFFFFFFD0) != 0 )
      {
        UserSetLastError(87);
        v21 = 0;
      }
      else if ( v15 && (v15->left < 0 || v15->top < 0) )
      {
        UserSetLastError(87);
        v21 = 0;
        UserSetLastError(87);
      }
      else
      {
        v38 = 0LL;
        if ( v14 )
        {
          v28 = *((_QWORD *)v18 + 13);
          if ( v28 )
          {
            if ( (unsigned int)IsTopLevelOrLayeredChildWindow((__int64)v18) && !IsTopLevelWindow((__int64)v18) )
            {
              LODWORD(v38) = v14->x + *(_DWORD *)(*(_QWORD *)(v28 + 40) + 104LL);
              HIDWORD(v38) = v14->y + *(_DWORD *)(*(_QWORD *)(v28 + 40) + 108LL);
              v14 = (const struct tagPOINT *)&v38;
            }
          }
        }
        v29 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v18 + 5) + 256LL));
        v55 = *(_OWORD *)(*((_QWORD *)v18 + 5) + 88LL);
        updated = zzzUpdateLayeredWindow(
                    v18,
                    v47[0],
                    v14,
                    v46,
                    (HDC)v50,
                    (struct tagPOINT *)v45,
                    a7,
                    (struct _BLENDFUNCTION *)v27,
                    a9,
                    v15);
        if ( updated < 0 )
        {
          v21 = 0;
          UserSetLastStatus(updated, 1);
        }
        else
        {
          v21 = 1;
          v23 = *((_QWORD *)v18 + 5);
          v24 = v55 - *(_QWORD *)(v23 + 88);
          if ( (_QWORD)v55 == *(_QWORD *)(v23 + 88) )
            v24 = *((_QWORD *)&v55 + 1) - *(_QWORD *)(v23 + 96);
          if ( v24 )
          {
            *(_OWORD *)v47 = 0LL;
            NewMonitor = GetNewMonitor(v18, 0LL, v47);
            v32 = NewMonitor;
            if ( NewMonitor )
            {
              if ( NewMonitor != v29 )
              {
                v53 = 0LL;
                v54 = 0LL;
                ThreadLockAlways(NewMonitor, &v53);
                *(_QWORD *)&v55 = 0LL;
                if ( v29 )
                  v35 = *(_WORD *)(*(_QWORD *)(v29 + 40) + 60LL);
                else
                  v35 = 0;
                v36 = *(unsigned __int16 *)(*(_QWORD *)(v32 + 40) + 60LL);
                if ( (_WORD)v36 != v35 )
                  xxxAppAdjustDpiCandidateRect(v18, v36, (_DWORD *)(*((_QWORD *)v18 + 5) + 88LL), v47);
                if ( ThreadUnlock1(v33, v36, v34)
                  && (unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND **)v18, v32, (__int64 *)&v55, 0) )
                {
                  xxxNotifyMonitorChanged(v18, (struct tagRECT *)v47, (struct tagBWL *)v55, v35);
                }
              }
            }
          }
        }
      }
    }
    ThreadUnlock1(v24, v23, v25);
  }
  else
  {
    v21 = 0;
  }
  UserSessionSwitchLeaveCrit(v17, v16, v19, v20);
  return v21;
}
