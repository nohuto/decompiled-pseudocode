/*
 * XREFs of NtUserSetWindowShowState @ 0x1C0203380
 * Callers:
 *     <none>
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C002C560 (GetMonitorWorkRectForWindow.c)
 *     IAMThreadAccessGranted @ 0x1C0037FF4 (IAMThreadAccessGranted.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0042200 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     IntersectRect @ 0x1C0075160 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C024243C (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, struct tagRECT *a4)
{
  __int64 v5; // r13
  int v7; // r14d
  BOOL v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int128 *p_left; // rdx
  struct tagMONITOR *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rcx
  __int128 v28; // [rsp+38h] [rbp-90h] BYREF
  __int64 v29; // [rsp+48h] [rbp-80h]
  __int128 v30; // [rsp+58h] [rbp-70h] BYREF
  __int128 v31; // [rsp+68h] [rbp-60h] BYREF
  __int128 v32; // [rsp+78h] [rbp-50h] BYREF
  __int128 v33; // [rsp+88h] [rbp-40h] BYREF

  v5 = a2;
  v28 = 0LL;
  v29 = 0LL;
  v7 = 1;
  EnterCrit(0LL, 1LL);
  v8 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  v11 = v9;
  if ( v9 )
  {
    v10 = (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v28 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v28;
      *((_QWORD *)&v28 + 1) = v9;
      HMLockObject(v9);
      v14 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL);
      if ( v14
        && IAMThreadAccessGranted(gptiCurrent)
        && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(v14 + 16) + 424LL) )
      {
        v17 = *(_QWORD *)(v11 + 16);
        if ( v17 != gptiCurrent )
        {
          if ( *(_QWORD *)(v17 + 672) )
          {
            v15 = 5023LL;
            goto LABEL_5;
          }
          if ( a3 )
          {
            v15 = 1004LL;
            goto LABEL_5;
          }
          if ( (unsigned int)v5 <= 5 )
          {
            p_left = (__int128 *)&a4->left;
            if ( !a4 )
              goto LABEL_34;
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              p_left = (__int128 *)MmUserProbeAddress;
            v32 = *p_left;
            a4 = (struct tagRECT *)&v32;
            v19 = _MonitorFromWindowInternal((struct tagWND *)v11, 2, 1);
            if ( v19 )
            {
              v30 = *GetMonitorWorkRectForWindow(&v31, (__int64)v19, (const struct tagWND *)v14);
              v33 = 0LL;
              if ( (unsigned int)IntersectRect(&v33, (int *)&v32, (int *)&v30) )
              {
                v20 = v33 - v32;
                if ( (_QWORD)v33 == (_QWORD)v32 )
                  v20 = *((_QWORD *)&v33 + 1) - *((_QWORD *)&v32 + 1);
                if ( !v20 )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) != 0 )
                    goto LABEL_34;
                  v21 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
                  if ( (*(_BYTE *)(v21 + 224) & 0x20) != 0 )
                    goto LABEL_34;
                  v22 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL);
                  if ( (((unsigned __int16)(v22 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v21) >> 8)) & 0x1FF) == 0 )
                  {
                    v23 = *(unsigned int *)(*(_QWORD *)(v11 + 40) + 288LL);
                    if ( (*(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL) & 0xF) != 2 || (v24 = 1, (v23 & 0x20000000) == 0) )
                      v24 = 0;
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v23) & 0xF) != 2
                      || (W32GetCurrentThreadDpiAwarenessContext(v25) & 0x20000000) == 0 )
                    {
                      v7 = 0;
                    }
                    if ( v24 == v7 )
                      goto LABEL_34;
                  }
                  if ( (unsigned int)TransformRectBetweenCoordinateSpaces(&v32, &v32, v11, v14) )
                  {
LABEL_34:
                    v8 = xxxSetWindowShowState((struct tagWND *)v11, byte_1C02F6D18[v5], a4);
                    goto LABEL_35;
                  }
                }
              }
            }
          }
        }
        v15 = 87LL;
      }
      else
      {
        v15 = 5LL;
      }
LABEL_5:
      UserSetLastError(v15, v12, v13);
LABEL_35:
      ThreadUnlock1(v16);
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
