_BOOL8 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, struct tagRECT *a4)
{
  __int64 v6; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagWND *v10; // rdi
  BOOL v11; // ebx
  const struct tagWND *v12; // r15
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rax
  struct tagMONITOR *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v24; // [rsp+38h] [rbp-80h] BYREF
  __int64 v25; // [rsp+48h] [rbp-70h]
  __m128i v26; // [rsp+50h] [rbp-68h] BYREF
  struct tagRECT v27; // [rsp+68h] [rbp-50h] BYREF
  __int128 v28; // [rsp+78h] [rbp-40h] BYREF

  v6 = a2;
  v24 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v8;
  v11 = 0;
  if ( v8 )
  {
    v9 = (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v9 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v24;
      *((_QWORD *)&v24 + 1) = v8;
      HMLockObject(v8);
      v12 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 456LL) + 320LL);
      if ( v12
        && (LOBYTE(v17) = IAMThreadAccessGranted(gptiCurrent), v17)
        && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)v12 + 2) + 424LL) )
      {
        v18 = *((_QWORD *)v10 + 2);
        if ( v18 != gptiCurrent )
        {
          if ( *(_QWORD *)(v18 + 672) )
          {
            v13 = 5023;
            goto LABEL_5;
          }
          if ( a3 )
          {
            v13 = 1004;
            goto LABEL_5;
          }
          if ( (unsigned int)v6 <= 5 )
          {
            if ( !a4 )
              goto LABEL_25;
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              a4 = (struct tagRECT *)MmUserProbeAddress;
            v27 = *a4;
            a4 = &v27;
            v19 = _MonitorFromWindowInternal(v10, 2u, 1);
            if ( v19 )
            {
              v26 = *GetMonitorWorkRectForWindow(&v26, (__int64)v19, v12);
              v28 = 0LL;
              if ( (unsigned int)IntersectRect(&v28, &v27.left, v26.m128i_i32) )
              {
                v21 = v28 - *(_QWORD *)&v27.left;
                if ( (_QWORD)v28 == *(_QWORD *)&v27.left )
                  v21 = *((_QWORD *)&v28 + 1) - *(_QWORD *)&v27.right;
                if ( !v21 )
                {
                  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v20);
                  if ( !(unsigned __int8)ShouldVirtualizeWindowRect(v10, CurrentThreadDpiAwarenessContext)
                    || (unsigned int)TransformRectBetweenCoordinateSpaces(&v27, &v27, v10, v12) )
                  {
LABEL_25:
                    v11 = xxxSetWindowShowState(v10, byte_1C03221C8[v6], a4);
                    goto LABEL_26;
                  }
                }
              }
            }
          }
        }
        v13 = 87;
      }
      else
      {
        v13 = 5;
      }
LABEL_5:
      UserSetLastError(v13);
LABEL_26:
      ThreadUnlock1(v15, v14, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v9);
  return v11;
}
