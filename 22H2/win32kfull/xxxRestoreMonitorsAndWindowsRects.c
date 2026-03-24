/*
 * XREFs of xxxRestoreMonitorsAndWindowsRects @ 0x1C01D7AFC
 * Callers:
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0162D50 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00372D4 (IsNonImmersiveBand.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C003E8DC (xxxDeferWindowPosAndCheckPoint.c)
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 *     InternalBeginDeferWindowPos @ 0x1C006B960 (InternalBeginDeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 */

__int64 __fastcall xxxRestoreMonitorsAndWindowsRects(__int64 a1, __int64 a2)
{
  int *v3; // rax
  int *v4; // rsi
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // r14d
  int v8; // r9d
  __int64 v9; // r11
  __int64 v10; // r8
  struct tagMONITORRECTS *v11; // r12
  struct tagSMWP *v12; // rsi
  __int64 v13; // r14
  int i; // r15d
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 ThreadWin32Thread; // rax
  _OWORD *Prop; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // [rsp+28h] [rbp-60h]
  _QWORD v23[3]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v24; // [rsp+58h] [rbp-30h] BYREF
  __int64 v25; // [rsp+68h] [rbp-20h]

  if ( *(_QWORD *)(a1 + 40) == a2 && *(_DWORD *)*gpDispInfo > 1u )
  {
    if ( *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) )
    {
      v3 = (int *)SnapshotMonitorRects();
      if ( !v3 )
        return (unsigned int)-1073741801;
      v4 = *(int **)(a1 + 16);
      v5 = 0;
      v6 = 0;
      if ( *v4 > 0 )
      {
        v7 = *v3;
        while ( 1 )
        {
          v8 = 0;
          if ( v7 <= 0 )
            break;
          while ( 1 )
          {
            v9 = 12LL * v8;
            v10 = *(_QWORD *)&v4[12 * v6 + 2] - *(_QWORD *)&v3[v9 + 2];
            if ( !v10 )
              v10 = *(_QWORD *)&v4[12 * v6 + 4] - *(_QWORD *)&v3[v9 + 4];
            if ( !v10 )
              break;
            if ( ++v8 >= v7 )
              goto LABEL_13;
          }
          if ( ++v6 >= *v4 )
            goto LABEL_14;
        }
LABEL_13:
        v5 = -1073741823;
      }
LABEL_14:
      Win32FreePool(v3);
      v11 = *(struct tagMONITORRECTS **)(a1 + 16);
      if ( (v5 & 0x80000000) != 0 )
        return v5;
      v12 = (struct tagSMWP *)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 32));
      if ( !v12 )
        return v5;
      v25 = 0LL;
      v24 = 0LL;
      PushW32ThreadLock((__int64)v12, &v24, (__int64)DestroySMWP);
      v13 = *(_QWORD *)(a1 + 24);
      for ( i = 0; i < *(_DWORD *)(a1 + 32); v13 += 48LL )
      {
        if ( !v12 )
          break;
        v15 = HMValidateHandleNoSecure(*(_QWORD *)(v13 + 40), 1);
        v16 = v15;
        if ( v15
          && *(char *)(*(_QWORD *)(v15 + 40) + 24LL) >= 0
          && IsNonImmersiveBand(v15)
          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 424LL) + 820LL) & 0x30) != 0x10 )
        {
          v23[2] = 0LL;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v23[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v23;
          v23[1] = v16;
          HMLockObject(v16);
          if ( (*(_DWORD *)(v13 + 32) & 1) != 0 )
          {
            Prop = (_OWORD *)GetProp(v16, WORD2(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL);
            if ( Prop )
              *Prop = *(_OWORD *)(v13 + 16);
          }
          LODWORD(v22) = 20;
          v12 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                    (__int64)v12,
                                    (struct tagWND *)v16,
                                    v11,
                                    (struct tagRECT *)v13,
                                    (struct tagRECT *)((v13 + 16) & -(__int64)((*(_DWORD *)(v13 + 32) & 1) != 0)),
                                    v22,
                                    1);
          ThreadUnlock1(v19);
        }
        ++i;
      }
      v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(v20 + 16) = v24;
      if ( v12 )
        xxxEndDeferWindowPosEx(v12, 1);
      else
        return (unsigned int)-1073741801;
    }
    else
    {
      return (unsigned int)-1073741823;
    }
    return v5;
  }
  return 0LL;
}
