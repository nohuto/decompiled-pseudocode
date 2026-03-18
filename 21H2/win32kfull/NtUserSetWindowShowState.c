/*
 * XREFs of NtUserSetWindowShowState @ 0x1C01FE820
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007B464 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023DD00 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, struct tagRECT *a4)
{
  __int64 v5; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  BOOL v10; // edi
  __int64 v11; // rdx
  const struct tagWND *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int128 *p_left; // rdx
  struct tagMONITOR *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int128 v26; // [rsp+38h] [rbp-80h] BYREF
  __int64 v27; // [rsp+48h] [rbp-70h]
  int v28[6]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v29; // [rsp+68h] [rbp-50h] BYREF
  __int128 v30; // [rsp+78h] [rbp-40h] BYREF

  v5 = a2;
  v26 = 0LL;
  v27 = 0LL;
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  v10 = 0;
  if ( v7 )
  {
    v8 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v26 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v26;
      *((_QWORD *)&v26 + 1) = v7;
      HMLockObject(v7);
      v12 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 456LL) + 320LL);
      if ( v12
        && IAMThreadAccessGranted(gptiCurrent)
        && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)v12 + 2) + 424LL) )
      {
        v17 = *((_QWORD *)v9 + 2);
        if ( v17 != gptiCurrent )
        {
          if ( *(_QWORD *)(v17 + 672) )
          {
            v13 = 5023LL;
            goto LABEL_5;
          }
          if ( a3 )
          {
            v13 = 1004LL;
            goto LABEL_5;
          }
          if ( (unsigned int)v5 <= 5 )
          {
            p_left = (__int128 *)&a4->left;
            if ( !a4 )
              goto LABEL_27;
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              p_left = (__int128 *)MmUserProbeAddress;
            v29 = *p_left;
            a4 = (struct tagRECT *)&v29;
            v19 = _MonitorFromWindowInternal(v9, 2, 1);
            if ( v19 )
            {
              *(_OWORD *)v28 = *(_OWORD *)GetMonitorWorkRectForWindow((__int64)v28, (__int64)v19, v12);
              v30 = 0LL;
              if ( (unsigned int)IntersectRect(&v30, (int *)&v29, v28) )
              {
                v20 = v30 - v29;
                if ( (_QWORD)v30 == (_QWORD)v29 )
                  v20 = *((_QWORD *)&v30 + 1) - *((_QWORD *)&v29 + 1);
                if ( !v20 )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) != 0
                    || (v22 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480),
                        (*(_BYTE *)(v22 + 224) & 0x20) != 0)
                    || (v23 = *(_DWORD *)(*((_QWORD *)v9 + 5) + 288LL),
                        (((unsigned __int16)(v23 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                            v22,
                                                                                            v21) >> 8)) & 0x1FF) == 0)
                    || (unsigned int)TransformRectBetweenCoordinateSpaces(&v29, &v29, v9, v12) )
                  {
LABEL_27:
                    v10 = xxxSetWindowShowState(v9, byte_1C02F40A0[v5], a4);
                    goto LABEL_28;
                  }
                }
              }
            }
          }
        }
        v13 = 87LL;
      }
      else
      {
        v13 = 5LL;
      }
LABEL_5:
      UserSetLastError(v13, v11);
LABEL_28:
      ThreadUnlock1(v15, v14, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
