__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        __int64 a2,
        ULONG64 a3,
        __int64 *a4,
        __int64 a5,
        struct tagBWL *a6,
        unsigned int a7,
        ULONG64 a8,
        unsigned int a9,
        ULONG64 a10)
{
  _DWORD *v12; // r12
  __int128 *v13; // r15
  const struct tagPOINT *v14; // r14
  struct tagRECT *v15; // rsi
  __int64 v16; // rcx
  struct tagWND *v17; // rdi
  int v18; // ebx
  struct tagBWL **v19; // rdx
  __int64 v20; // rdx
  char *v21; // rcx
  __int64 v22; // r8
  ULONG64 *v23; // rdx
  __int64 *v24; // r13
  __int64 v25; // rbx
  __int64 v26; // r15
  NTSTATUS updated; // eax
  __int64 NewMonitor; // rax
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int16 v32; // r14
  __int64 v33; // rdx
  ULONG64 v35; // [rsp+50h] [rbp-118h] BYREF
  _DWORD v36[4]; // [rsp+58h] [rbp-110h] BYREF
  int v37; // [rsp+68h] [rbp-100h]
  __int64 v38; // [rsp+70h] [rbp-F8h] BYREF
  struct tagBWL *v39; // [rsp+78h] [rbp-F0h] BYREF
  ULONG64 v40; // [rsp+80h] [rbp-E8h] BYREF
  __int64 *v41; // [rsp+88h] [rbp-E0h]
  __int64 v42; // [rsp+90h] [rbp-D8h]
  struct tagSIZE *v43; // [rsp+98h] [rbp-D0h]
  struct tagRECT v44; // [rsp+A0h] [rbp-C8h] BYREF
  ULONG64 *v45; // [rsp+B8h] [rbp-B0h]
  __int128 *v46; // [rsp+C0h] [rbp-A8h]
  __int64 v47; // [rsp+C8h] [rbp-A0h]
  __int128 v48; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v49; // [rsp+E0h] [rbp-88h]
  __int128 v50; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v51; // [rsp+100h] [rbp-68h]
  struct tagBWL *v52[2]; // [rsp+108h] [rbp-60h] BYREF
  __int128 v53; // [rsp+118h] [rbp-50h] BYREF

  v35 = a3;
  *(_QWORD *)&v44.left = a2;
  v47 = a5;
  v52[0] = a6;
  v12 = (_DWORD *)a8;
  v13 = (__int128 *)a10;
  v39 = 0LL;
  v42 = 0LL;
  v38 = 0LL;
  v43 = 0LL;
  v40 = 0LL;
  v14 = 0LL;
  v45 = 0LL;
  v36[0] = 0;
  v41 = 0LL;
  v53 = 0LL;
  v15 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  EnterCrit(0LL, 0LL);
  v17 = (struct tagWND *)ValidateHwnd(a1);
  if ( v17 )
  {
    *(_QWORD *)&v48 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v48;
    *((_QWORD *)&v48 + 1) = v17;
    HMLockObject(v17);
    v19 = (struct tagBWL **)v52[0];
    if ( v52[0] )
    {
      if ( v52[0] >= (struct tagBWL *)MmUserProbeAddress )
        v19 = (struct tagBWL **)MmUserProbeAddress;
      v52[0] = *v19;
      v39 = v52[0];
      v42 = (__int64)&v39;
    }
    if ( !a4 )
      goto LABEL_13;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int64 *)MmUserProbeAddress;
    v38 = *a4;
    v43 = (struct tagSIZE *)&v38;
    if ( (int)v38 < 0 || v38 < 0 )
    {
      v18 = 0;
      v37 = 0;
      UserSetLastError(87);
    }
    else
    {
LABEL_13:
      v23 = (ULONG64 *)v35;
      if ( v35 )
      {
        if ( v35 >= MmUserProbeAddress )
          v23 = (ULONG64 *)MmUserProbeAddress;
        v35 = *v23;
        v40 = v35;
        v14 = (const struct tagPOINT *)&v40;
        v45 = &v40;
      }
      if ( a8 )
      {
        if ( a8 >= MmUserProbeAddress )
          v12 = (_DWORD *)MmUserProbeAddress;
        v36[0] = *v12;
        v24 = (__int64 *)v36;
        v41 = (__int64 *)v36;
      }
      else
      {
        v24 = v41;
      }
      if ( a10 )
      {
        if ( a10 >= MmUserProbeAddress )
          v13 = (__int128 *)MmUserProbeAddress;
        v53 = *v13;
        v15 = (struct tagRECT *)&v53;
        v46 = &v53;
      }
      if ( (a9 & 0xFFFFFFD0) != 0 )
      {
        UserSetLastError(87);
        v18 = 0;
      }
      else if ( v15 && (v15->left < 0 || v15->top < 0) )
      {
        UserSetLastError(87);
        v18 = 0;
        UserSetLastError(87);
      }
      else
      {
        v35 = 0LL;
        if ( v14 )
        {
          v25 = *((_QWORD *)v17 + 13);
          if ( v25 )
          {
            if ( (unsigned int)IsTopLevelOrLayeredChildWindow((__int64)v17) && !IsTopLevelWindow((__int64)v17) )
            {
              LODWORD(v35) = v14->x + *(_DWORD *)(*(_QWORD *)(v25 + 40) + 104LL);
              HIDWORD(v35) = v14->y + *(_DWORD *)(*(_QWORD *)(v25 + 40) + 108LL);
              v14 = (const struct tagPOINT *)&v35;
            }
          }
        }
        v26 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v17 + 5) + 256LL));
        *(_OWORD *)v52 = *(_OWORD *)(*((_QWORD *)v17 + 5) + 88LL);
        updated = zzzUpdateLayeredWindow(
                    v17,
                    *(HDC *)&v44.left,
                    v14,
                    v43,
                    (HDC)v47,
                    (struct tagPOINT *)v42,
                    a7,
                    (struct _BLENDFUNCTION *)v24,
                    a9,
                    v15);
        if ( updated < 0 )
        {
          v18 = 0;
          UserSetLastStatus(updated, 1);
        }
        else
        {
          v18 = 1;
          v20 = *((_QWORD *)v17 + 5);
          v21 = (char *)v52[0] - *(_QWORD *)(v20 + 88);
          if ( v52[0] == *(struct tagBWL **)(v20 + 88) )
            v21 = (char *)v52[1] - *(_QWORD *)(v20 + 96);
          if ( v21 )
          {
            v44 = 0LL;
            NewMonitor = GetNewMonitor(v17, 0LL, &v44);
            v29 = NewMonitor;
            if ( NewMonitor )
            {
              if ( NewMonitor != v26 )
              {
                v50 = 0LL;
                v51 = 0LL;
                ThreadLockAlways(NewMonitor, &v50);
                v52[0] = 0LL;
                if ( v26 )
                  v32 = *(_WORD *)(*(_QWORD *)(v26 + 40) + 60LL);
                else
                  v32 = 0;
                v33 = *(unsigned __int16 *)(*(_QWORD *)(v29 + 40) + 60LL);
                if ( (_WORD)v33 != v32 )
                  xxxAppAdjustDpiCandidateRect(v17, v33, (_DWORD *)(*((_QWORD *)v17 + 5) + 88LL), &v44);
                if ( ThreadUnlock1(v30, v33, v31)
                  && (unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND **)v17, v29, v52, 0) )
                {
                  xxxNotifyMonitorChanged(v17, &v44, v52[0], v32);
                }
              }
            }
          }
        }
      }
    }
    ThreadUnlock1(v21, v20, v22);
  }
  else
  {
    v18 = 0;
  }
  UserSessionSwitchLeaveCrit(v16);
  return v18;
}
