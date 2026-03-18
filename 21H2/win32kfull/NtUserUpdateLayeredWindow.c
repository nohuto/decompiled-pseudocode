/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x1C008FA50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C006A424 (UpdateMonitorForWindowAndChildren.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     GetNewMonitor @ 0x1C006F304 (GetNewMonitor.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxNotifyMonitorChanged @ 0x1C007563C (xxxNotifyMonitorChanged.c)
 *     zzzUpdateLayeredWindow @ 0x1C008FE60 (zzzUpdateLayeredWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00903C4 (IsTopLevelOrLayeredChildWindow.c)
 *     UserSetLastStatus @ 0x1C011A880 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E0A3C (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        ULONG64 a6,
        int a7,
        ULONG64 a8,
        int a9,
        ULONG64 a10)
{
  _QWORD *v12; // r13
  _DWORD *v13; // r15
  __int128 *v14; // r14
  __int64 *v15; // rsi
  int *v16; // rdi
  __int64 v17; // rcx
  struct tagWND *v18; // rbx
  __int64 v19; // rdx
  _QWORD *v20; // rdx
  _DWORD *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r14
  NTSTATUS updated; // eax
  __int64 NewMonitor; // rax
  __int64 v28; // rdi
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int16 v35; // si
  __int64 v36; // rdx
  int v37; // [rsp+50h] [rbp-118h]
  _DWORD v38[5]; // [rsp+54h] [rbp-114h] BYREF
  __int64 v39; // [rsp+68h] [rbp-100h] BYREF
  __int64 v40; // [rsp+70h] [rbp-F8h] BYREF
  __int64 *v41; // [rsp+78h] [rbp-F0h]
  __int64 v42; // [rsp+80h] [rbp-E8h] BYREF
  _DWORD *v43; // [rsp+88h] [rbp-E0h]
  __int64 v44; // [rsp+90h] [rbp-D8h]
  struct tagRECT v45; // [rsp+98h] [rbp-D0h] BYREF
  __int64 *v46; // [rsp+B0h] [rbp-B8h]
  __int128 *v47; // [rsp+B8h] [rbp-B0h]
  __int64 v48; // [rsp+C0h] [rbp-A8h]
  __int128 v49; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+D8h] [rbp-90h]
  _QWORD v51[4]; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v52; // [rsp+100h] [rbp-68h] BYREF
  __int128 v53; // [rsp+110h] [rbp-58h] BYREF

  *(_QWORD *)&v52 = a3;
  *(_QWORD *)&v45.left = a2;
  v48 = a5;
  v12 = (_QWORD *)a6;
  v13 = (_DWORD *)a8;
  v14 = (__int128 *)a10;
  v40 = 0LL;
  v44 = 0LL;
  v39 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v15 = 0LL;
  v46 = 0LL;
  v38[0] = 0;
  v43 = 0LL;
  v53 = 0LL;
  v16 = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  EnterCrit(0LL, 0LL);
  v18 = (struct tagWND *)ValidateHwnd(a1);
  if ( v18 )
  {
    *(_QWORD *)&v49 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v49;
    *((_QWORD *)&v49 + 1) = v18;
    HMLockObject(v18);
    if ( a6 )
    {
      if ( a6 >= MmUserProbeAddress )
        v12 = (_QWORD *)MmUserProbeAddress;
      *(_QWORD *)&v38[1] = *v12;
      v40 = *(_QWORD *)&v38[1];
      v44 = (__int64)&v40;
    }
    if ( !a4 )
      goto LABEL_11;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int64 *)MmUserProbeAddress;
    v39 = *a4;
    v41 = &v39;
    if ( (int)v39 < 0 || v39 < 0 )
    {
      v37 = 0;
      UserSetLastError(87LL, v19);
    }
    else
    {
LABEL_11:
      v20 = (_QWORD *)v52;
      if ( (_QWORD)v52 )
      {
        if ( (unsigned __int64)v52 >= MmUserProbeAddress )
          v20 = (_QWORD *)MmUserProbeAddress;
        *(_QWORD *)&v52 = *v20;
        v42 = v52;
        v15 = &v42;
        v46 = &v42;
      }
      if ( a8 )
      {
        if ( a8 >= MmUserProbeAddress )
          v13 = (_DWORD *)MmUserProbeAddress;
        v38[0] = *v13;
        v21 = v38;
        v43 = v38;
      }
      else
      {
        v21 = v43;
      }
      if ( a10 )
      {
        if ( a10 >= MmUserProbeAddress )
          v14 = (__int128 *)MmUserProbeAddress;
        v53 = *v14;
        v16 = (int *)&v53;
        v47 = &v53;
      }
      if ( (a9 & 0xFFFFFFD0) != 0 )
      {
        UserSetLastError(87LL, (__int64)v20);
        v37 = 0;
      }
      else if ( v16 && (*v16 < 0 || v16[1] < 0) )
      {
        UserSetLastError(87LL, (__int64)v20);
        v37 = 0;
        UserSetLastError(87LL, v31);
      }
      else
      {
        *(_QWORD *)&v38[1] = 0LL;
        if ( v15 )
        {
          v30 = *((_QWORD *)v18 + 13);
          if ( v30 )
          {
            if ( (unsigned int)IsTopLevelOrLayeredChildWindow(v18) && !IsTopLevelWindow((__int64)v18) )
            {
              v38[1] = *(_DWORD *)v15 + *(_DWORD *)(*(_QWORD *)(v30 + 40) + 104LL);
              v38[2] = *((_DWORD *)v15 + 1) + *(_DWORD *)(*(_QWORD *)(v30 + 40) + 108LL);
            }
          }
        }
        v25 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v18 + 5) + 256LL));
        v52 = *(_OWORD *)(*((_QWORD *)v18 + 5) + 88LL);
        updated = zzzUpdateLayeredWindow(v18, v48, v44, a7, (__int64)v21, a9, (__int64)v16);
        if ( updated < 0 )
        {
          v37 = 0;
          UserSetLastStatus(updated);
        }
        else
        {
          v37 = 1;
          v22 = *((_QWORD *)v18 + 5);
          v23 = v52 - *(_QWORD *)(v22 + 88);
          if ( (_QWORD)v52 == *(_QWORD *)(v22 + 88) )
            v23 = *((_QWORD *)&v52 + 1) - *(_QWORD *)(v22 + 96);
          if ( v23 )
          {
            v45 = 0LL;
            NewMonitor = GetNewMonitor(v18, 0LL, &v45);
            v28 = NewMonitor;
            if ( NewMonitor )
            {
              if ( NewMonitor != v25 )
              {
                v51[2] = 0LL;
                ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                v51[0] = *(_QWORD *)(ThreadWin32Thread + 416);
                *(_QWORD *)(ThreadWin32Thread + 416) = v51;
                v51[1] = v28;
                HMLockObject(v28);
                *(_QWORD *)&v52 = 0LL;
                if ( v25 )
                  v35 = *(_WORD *)(*(_QWORD *)(v25 + 40) + 60LL);
                else
                  v35 = 0;
                v36 = *(unsigned __int16 *)(*(_QWORD *)(v28 + 40) + 60LL);
                if ( (_WORD)v36 != v35 )
                  xxxAppAdjustDpiCandidateRect(v18, v36, *((_QWORD *)v18 + 5) + 88LL, &v45);
                if ( ThreadUnlock1(v33, v36, v34)
                  && (unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND **)v18, v28, (__int64 *)&v52, 0) )
                {
                  xxxNotifyMonitorChanged(v18, &v45, (struct tagBWL *)v52, v35);
                }
              }
            }
          }
        }
      }
    }
    ThreadUnlock1(v23, v22, v24);
  }
  else
  {
    v37 = 0;
  }
  UserSessionSwitchLeaveCrit(v17);
  return v37;
}
