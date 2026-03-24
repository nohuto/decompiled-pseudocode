/*
 * XREFs of ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0040980
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00C15B8 (xxxProcessEventMessage.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00372D4 (IsNonImmersiveBand.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C003E8DC (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxComputeProposedPerMonRect @ 0x1C0040CD4 (xxxComputeProposedPerMonRect.c)
 *     FindOldMonitor @ 0x1C0041D9C (FindOldMonitor.c)
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 *     InternalBeginDeferWindowPos @ 0x1C006B960 (InternalBeginDeferWindowPos.c)
 *     xxxNotifyMonitorChanged @ 0x1C006C5B4 (xxxNotifyMonitorChanged.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

void __fastcall xxxProcessDesktopRecalc(struct tagASYNCDTOPRECALC *a1, __int64 a2)
{
  __int64 v3; // rdx
  struct tagSMWP *v4; // r14
  int v5; // r15d
  char *v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 ThreadWin32Thread; // rax
  struct tagRECT *Prop; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // edi
  _QWORD *v19; // rsi
  struct tagWND *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // [rsp+28h] [rbp-41h]
  __int128 v25; // [rsp+40h] [rbp-29h] BYREF
  __int64 v26; // [rsp+50h] [rbp-19h]
  _QWORD v27[3]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v28[3]; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v29; // [rsp+88h] [rbp+1Fh] BYREF

  if ( a1 )
  {
    v4 = (struct tagSMWP *)InternalBeginDeferWindowPos(*((unsigned int *)a1 + 3), a2);
    if ( v4 )
    {
      v26 = 0LL;
      v25 = 0LL;
      PushW32ThreadLock(v4, &v25, DestroySMWP);
      v5 = 0;
      if ( *((int *)a1 + 3) > 0 )
      {
        v6 = (char *)a1 + 16;
        do
        {
          v7 = *(_QWORD *)v6;
          LOBYTE(v3) = 1;
          v8 = HMValidateHandleNoSecure(*(_QWORD *)v6, v3);
          v9 = v8;
          if ( v8 )
          {
            v3 = *(_QWORD *)(v8 + 40);
            if ( *(char *)(v3 + 24) < 0 || !IsNonImmersiveBand(v8) )
              goto LABEL_11;
            v10 = v5 + 1LL;
            v11 = *(_QWORD *)(v3 + 88) - *((_QWORD *)a1 + 3 * v10);
            if ( !v11 )
              v11 = *(_QWORD *)(v3 + 96) - *((_QWORD *)a1 + 3 * v10 + 1);
            if ( !v11 )
              v12 = 1;
            else
LABEL_11:
              v12 = 0;
            if ( v12 )
            {
              v27[2] = 0LL;
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
              v27[0] = *(_QWORD *)(ThreadWin32Thread + 416);
              *(_QWORD *)(ThreadWin32Thread + 416) = v27;
              v27[1] = v9;
              HMLockObject(v9);
              Prop = (struct tagRECT *)GetProp(v9, WORD2(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL);
              if ( v4 )
              {
                LODWORD(v24) = *((_DWORD *)a1 + 2);
                v4 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                         (__int64)v4,
                                         (struct tagWND *)v9,
                                         *(struct tagMONITORRECTS **)a1,
                                         (struct tagRECT *)(*(_QWORD *)(v9 + 40) + 88LL),
                                         Prop,
                                         v24,
                                         0);
                if ( !v4 )
                {
                  v23 = W32GetThreadWin32Thread(KeGetCurrentThread());
                  v15 = v25;
                  *(_QWORD *)(v23 + 16) = v25;
                }
              }
              ThreadUnlock1(v15);
              LOBYTE(v16) = 1;
              v9 = HMValidateHandleNoSecure(v7, v16);
              if ( !v9 )
                goto LABEL_34;
            }
            v29 = 0LL;
            if ( (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL) & 0xF) == 2
              && (*(_DWORD *)(*(_QWORD *)(v9 + 16) + 648LL) & 0x2000000) == 0
              && (unsigned int)xxxComputeProposedPerMonRect((struct tagWND *)v9, *(struct tagMONITORRECTS **)a1, &v29)
              && (LOBYTE(v3) = 1, HMValidateHandleNoSecure(v7, v3)) )
            {
              *(struct tagRECT *)(v6 + 8) = v29;
            }
            else
            {
LABEL_34:
              *(_QWORD *)v6 = 0LL;
            }
          }
          ++v5;
          v6 += 24;
        }
        while ( v5 < *((_DWORD *)a1 + 3) );
      }
      if ( v4 )
      {
        v17 = W32GetThreadWin32Thread(KeGetCurrentThread());
        *(_QWORD *)(v17 + 16) = v25;
        xxxEndDeferWindowPosEx(v4);
      }
    }
    v18 = 0;
    if ( *((int *)a1 + 3) > 0 )
    {
      v19 = (_QWORD *)((char *)a1 + 16);
      do
      {
        if ( *v19 )
        {
          LOBYTE(v3) = 1;
          v20 = (struct tagWND *)HMValidateHandleNoSecure(*v19, v3);
          if ( v20 )
          {
            v28[2] = 0LL;
            v21 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v28[0] = *(_QWORD *)(v21 + 416);
            *(_QWORD *)(v21 + 416) = v28;
            v28[1] = v20;
            HMLockObject(v20);
            FindOldMonitor(v20, *(_QWORD *)a1, 0LL);
            xxxNotifyMonitorChanged(v20, (struct tagRECT *)((char *)a1 + 24 * v18 + 24), 0LL);
            ThreadUnlock1(v22);
          }
        }
        ++v18;
        v19 += 3;
      }
      while ( v18 < *((_DWORD *)a1 + 3) );
    }
    Win32FreePool(*(void **)a1);
    Win32FreePool(a1);
  }
}
