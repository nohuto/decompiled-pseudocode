/*
 * XREFs of NtUserSetWindowShowState @ 0x1C01DD4C0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00C39DC (GetMonitorWorkRectForWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D003C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0224FD4 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, struct tagRECT *a4)
{
  __int64 v6; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagWND *v13; // rdi
  BOOL v14; // ebx
  const struct tagWND *v15; // r15
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rax
  struct tagMONITOR *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v27; // [rsp+38h] [rbp-80h] BYREF
  __int64 v28; // [rsp+48h] [rbp-70h]
  int v29[6]; // [rsp+50h] [rbp-68h] BYREF
  struct tagRECT v30; // [rsp+68h] [rbp-50h] BYREF
  __int128 v31; // [rsp+78h] [rbp-40h] BYREF

  v6 = a2;
  v27 = 0LL;
  v28 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v13 = (struct tagWND *)v8;
  v14 = 0;
  if ( v8 )
  {
    v10 = (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v27;
      *((_QWORD *)&v27 + 1) = v8;
      HMLockObject(v8);
      v15 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL);
      if ( v15
        && (LOBYTE(v20) = IAMThreadAccessGranted(gptiCurrent), v20)
        && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)v15 + 2) + 424LL) )
      {
        v21 = *((_QWORD *)v13 + 2);
        if ( v21 != gptiCurrent )
        {
          if ( *(_QWORD *)(v21 + 672) )
          {
            v16 = 5023;
            goto LABEL_5;
          }
          if ( a3 )
          {
            v16 = 1004;
            goto LABEL_5;
          }
          if ( (unsigned int)v6 <= 5 )
          {
            if ( !a4 )
              goto LABEL_25;
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              a4 = (struct tagRECT *)MmUserProbeAddress;
            v30 = *a4;
            a4 = &v30;
            v22 = _MonitorFromWindowInternal(v13, 2u, 1);
            if ( v22 )
            {
              *(_OWORD *)v29 = *GetMonitorWorkRectForWindow(v29, (__int64)v22, v15);
              v31 = 0LL;
              if ( (unsigned int)IntersectRect(&v31, &v30.left, v29) )
              {
                v24 = v31 - *(_QWORD *)&v30.left;
                if ( (_QWORD)v31 == *(_QWORD *)&v30.left )
                  v24 = *((_QWORD *)&v31 + 1) - *(_QWORD *)&v30.right;
                if ( !v24 )
                {
                  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v23);
                  if ( !(unsigned __int8)ShouldVirtualizeWindowRect(v13, CurrentThreadDpiAwarenessContext)
                    || (unsigned int)TransformRectBetweenCoordinateSpaces(&v30, &v30, v13, v15) )
                  {
LABEL_25:
                    v14 = xxxSetWindowShowState(v13, byte_1C0320928[v6], a4);
                    goto LABEL_26;
                  }
                }
              }
            }
          }
        }
        v16 = 87;
      }
      else
      {
        v16 = 5;
      }
LABEL_5:
      UserSetLastError(v16);
LABEL_26:
      ThreadUnlock1(v18, v17, v19);
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v14;
}
