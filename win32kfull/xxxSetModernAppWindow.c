/*
 * XREFs of xxxSetModernAppWindow @ 0x1C000E204
 * Callers:
 *     NtUserSetModernAppWindow @ 0x1C000E140 (NtUserSetModernAppWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00331B0 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000E6EC (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0099940 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C009AEB4 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzAttachThreadInput @ 0x1C00CCFE8 (zzzAttachThreadInput.c)
 *     LockQCursor @ 0x1C00CE570 (LockQCursor.c)
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxSetModernAppWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  __int64 v5; // rdi
  __int64 v6; // rsi
  struct tagWND *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r13d
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD v16[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v17; // [rsp+40h] [rbp-29h] BYREF
  __int64 v18; // [rsp+50h] [rbp-19h]
  __int128 v19; // [rsp+58h] [rbp-11h] BYREF
  __int64 v20; // [rsp+68h] [rbp-1h]
  __int128 v21; // [rsp+70h] [rbp+7h] BYREF
  __int64 v22; // [rsp+80h] [rbp+17h]
  char v23; // [rsp+D0h] [rbp+67h] BYREF
  int v24; // [rsp+E0h] [rbp+77h]

  v2 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v24 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(v2 + 1440);
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( (*(_DWORD *)(v2 + 1272) & 0x40000) == 0 )
    goto LABEL_56;
  v7 = *(struct tagWND **)(v2 + 1432);
  if ( !v7 || v7 != a1 )
    goto LABEL_56;
  if ( v2 == gptiCurrent )
  {
    if ( a2 )
    {
      v9 = ValidateHwnd(a2);
      v5 = v9;
      if ( !v9
        || (struct tagWND *)v9 == a1
        || *(struct tagWND **)(v9 + 104) == a1
        || v9 == *(_QWORD *)(v2 + 1440)
        || *(_QWORD *)(v9 + 16) == v2 )
      {
        v8 = 1400LL;
        goto LABEL_57;
      }
    }
    if ( !v6 )
    {
LABEL_17:
      if ( gpqForeground
        && v6
        && (v10 = *(_QWORD *)(v2 + 432), gpqForeground == v10)
        && (v11 = *(_QWORD *)(v6 + 16), *(_QWORD *)(v11 + 432) == v10)
        && gptiForeground == v11 )
      {
        v24 = 1;
      }
      else if ( gpqForeground != *(_QWORD *)(v2 + 432) )
      {
        v12 = 1;
        if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
        {
LABEL_26:
          ThreadLock(v5, &v17);
          ThreadLock(v6, &v19);
          ThreadLock(a1, &v21);
          v16[1] = v5;
          v16[0] = v2 + 1440;
          HMAssignmentLock(v16, 0LL);
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v23);
          if ( v6 )
          {
            if ( *(struct tagWND **)(*(_QWORD *)(v2 + 432) + 128LL) == a1 )
              xxxSendNotifyMessage(
                v6,
                841LL,
                (unsigned __int64)(*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) << 16,
                0LL,
                0);
            if ( *(_QWORD *)(*(_QWORD *)(v2 + 432) + 120LL) == v6 )
            {
              xxxSendNotifyMessage(v6, 8LL, 0LL, 0LL, 0);
              tagQ::UnlockFocusWnd(*(tagQ **)(*((_QWORD *)a1 + 2) + 432LL));
            }
          }
          if ( v5 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 432LL) + 128LL) == v5 )
            {
              xxxSendNotifyMessage(
                v5,
                841LL,
                (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) << 16,
                0LL,
                0);
              tagQ::SetActiveWindow(*(tagQ **)(*(_QWORD *)(v5 + 16) + 432LL), 0LL);
            }
            if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 432LL) + 120LL) == v5 )
            {
              xxxSendNotifyMessage(v5, 8LL, 0LL, 0LL, 0);
              tagQ::UnlockFocusWnd(*(tagQ **)(*(_QWORD *)(v5 + 16) + 432LL));
            }
          }
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v23);
          if ( v5 )
          {
            SetOrClrWF(0LL, v5, 3968LL, 1LL);
            SetOrClrWF(1LL, v5, 3904LL, 1LL);
            xxxSetWindowStyle((struct tagWND *)v5);
            xxxSetParentWorker((struct tagWND *)v5, a1, (struct tagWND *)v6, 0);
            if ( *(struct tagWND **)(v5 + 104) != a1
              || (v13 = *(_QWORD *)(v2 + 432), *(_QWORD *)(*(_QWORD *)(v5 + 16) + 432LL) != v13) )
            {
LABEL_55:
              ThreadUnlock1();
              ThreadUnlock1();
              ThreadUnlock1();
              return v3;
            }
            if ( *(_QWORD *)(v2 + 1440) == v5 && *(struct tagWND **)(v13 + 128) == a1 )
            {
              xxxSendNotifyMessage(v5, 841LL, 1LL, 0LL, 0);
              xxxDeliverRestoreFocusMessage((struct tagWND *)v5);
            }
          }
          if ( v6 )
          {
            if ( *(struct tagWND **)(v6 + 104) == a1 )
            {
              xxxSetParentWorker((struct tagWND *)v6, (struct tagWND *)0xFFFFFFFFFFFFFFFDLL, 0LL, 0);
              SetOrClrWF(0LL, v6, 3904LL, 1LL);
              SetOrClrWF(1LL, v6, 3968LL, 1LL);
              xxxSetWindowStyle((struct tagWND *)v6);
              v14 = *(_QWORD *)(v6 + 16);
              if ( *(_QWORD *)(v14 + 432) == *(_QWORD *)(v2 + 432) )
              {
                zzzAttachThreadInput(v2, v14, 0LL);
                AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v23);
                LockQCursor(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 432LL), gasyscur[1]);
                if ( v24 && gptiForeground == *(_QWORD *)(v6 + 16) && *(_QWORD *)(v2 + 432) == gpqForeground )
                {
                  if ( *(_QWORD *)(v2 + 440) != *(_QWORD *)(gptiForeground + 440LL) )
                    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v23);
                  xxxSetForegroundThreadWithWindowHint((struct tagTHREADINFO *)v2, 0LL);
                }
                AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v23);
                if ( v12 )
                {
                  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
                    xxxSetForegroundWindow2(a1, 0LL, 2LL);
                }
              }
            }
          }
          v3 = 1;
          goto LABEL_55;
        }
      }
      v12 = 0;
      goto LABEL_26;
    }
    if ( *(_QWORD *)(v6 + 16) != v2 )
    {
      if ( *(struct tagWND **)(v6 + 104) != a1 )
        v6 = 0LL;
      goto LABEL_17;
    }
LABEL_56:
    v8 = 87LL;
    goto LABEL_57;
  }
  v8 = 5LL;
LABEL_57:
  UserSetLastError(v8);
  return 0LL;
}
