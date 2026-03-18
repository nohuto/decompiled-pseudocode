/*
 * XREFs of xxxSetModernAppWindow @ 0x1C0002004
 * Callers:
 *     NtUserSetModernAppWindow @ 0x1C0001F40 (NtUserSetModernAppWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005FA70 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00024C8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzAttachThreadInput @ 0x1C009D530 (zzzAttachThreadInput.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00A8268 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     LockQCursor @ 0x1C00F3040 (LockQCursor.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C010C53C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetModernAppWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // r13
  __int64 v7; // rsi
  struct tagWND *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int HasForeground; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v20; // [rsp+40h] [rbp-29h] BYREF
  __int64 v21; // [rsp+50h] [rbp-19h]
  __int128 v22; // [rsp+58h] [rbp-11h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h]
  __int128 v24; // [rsp+70h] [rbp+7h] BYREF
  __int64 v25; // [rsp+80h] [rbp+17h]
  char v26; // [rsp+D0h] [rbp+67h] BYREF
  int v27; // [rsp+E0h] [rbp+77h]
  int v28; // [rsp+E8h] [rbp+7Fh]

  v2 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v27 = 0;
  v5 = 0LL;
  v6 = (_QWORD *)(v2 + 1400);
  v7 = *(_QWORD *)(v2 + 1400);
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( (*(_DWORD *)(v2 + 1256) & 0x40000) == 0 || (v8 = *(struct tagWND **)(v2 + 1392)) == 0LL || v8 != a1 )
  {
LABEL_56:
    v18 = 87LL;
    goto LABEL_57;
  }
  if ( v2 == gptiCurrent )
  {
    if ( !a2
      || (v9 = ValidateHwnd(a2), (v5 = v9) != 0)
      && (struct tagWND *)v9 != a1
      && *(struct tagWND **)(v9 + 104) != a1
      && v9 != *v6
      && *(_QWORD *)(v9 + 16) != v2 )
    {
      if ( !v7 )
        goto LABEL_15;
      if ( *(_QWORD *)(v7 + 16) != v2 )
      {
        if ( *(struct tagWND **)(v7 + 104) != a1 )
          v7 = 0LL;
LABEL_15:
        if ( gpqForeground
          && v7
          && (v10 = *(_QWORD *)(v2 + 432), gpqForeground == v10)
          && (v17 = *(_QWORD *)(v7 + 16), *(_QWORD *)(v17 + 432) == v10)
          && gptiForeground == v17 )
        {
          v27 = 1;
        }
        else if ( gpqForeground != *(_QWORD *)(v2 + 432) )
        {
          HasForeground = CoreWindowProp::CompositeAppHasForeground(a1);
          v28 = 1;
          if ( HasForeground )
          {
LABEL_21:
            ThreadLock(v5, &v20);
            ThreadLock(v7, &v22);
            ThreadLock(a1, &v24);
            v19[0] = v2 + 1400;
            v19[1] = v5;
            HMAssignmentLock(v19, 0LL);
            AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v26);
            if ( v7 )
            {
              v12 = *(_QWORD *)(v2 + 432);
              if ( *(struct tagWND **)(v12 + 120) == a1 )
              {
                xxxSendNotifyMessage(
                  v7,
                  841LL,
                  (unsigned __int64)(*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) << 16,
                  0LL,
                  0);
                v12 = *(_QWORD *)(v2 + 432);
              }
              if ( *(_QWORD *)(v12 + 112) == v7 )
              {
                xxxSendNotifyMessage(v7, 8LL, 0LL, 0LL, 0);
                tagQ::UnlockFocusWnd(*(tagQ **)(*((_QWORD *)a1 + 2) + 432LL));
              }
            }
            if ( v5 )
            {
              v13 = *(_QWORD *)(v5 + 16);
              if ( *(_QWORD *)(*(_QWORD *)(v13 + 432) + 120LL) == v5 )
              {
                xxxSendNotifyMessage(
                  v5,
                  841LL,
                  (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) << 16,
                  0LL,
                  0);
                HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 432LL) + 120LL);
                v13 = *(_QWORD *)(v5 + 16);
              }
              if ( *(_QWORD *)(*(_QWORD *)(v13 + 432) + 112LL) == v5 )
              {
                xxxSendNotifyMessage(v5, 8LL, 0LL, 0LL, 0);
                tagQ::UnlockFocusWnd(*(tagQ **)(*(_QWORD *)(v5 + 16) + 432LL));
              }
            }
            AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v26);
            if ( v5 )
            {
              SetOrClrWF(0LL, v5, 3968LL, 1LL);
              SetOrClrWF(1LL, v5, 3904LL, 1LL);
              xxxSetWindowStyle((struct tagWND *)v5);
              xxxSetParentWorker((struct tagWND *)v5, a1, (struct tagWND *)v7, 0);
              if ( *(struct tagWND **)(v5 + 104) != a1
                || (v14 = *(_QWORD *)(v2 + 432), *(_QWORD *)(*(_QWORD *)(v5 + 16) + 432LL) != v14) )
              {
LABEL_43:
                ThreadUnlock1();
                ThreadUnlock1();
                ThreadUnlock1();
                return v3;
              }
              if ( *v6 == v5 && *(struct tagWND **)(v14 + 120) == a1 )
              {
                xxxSendNotifyMessage(v5, 841LL, 1LL, 0LL, 0);
                xxxDeliverRestoreFocusMessage((struct tagWND *)v5);
              }
            }
            if ( v7 )
            {
              if ( *(struct tagWND **)(v7 + 104) == a1 )
              {
                xxxSetParentWorker((struct tagWND *)v7, (struct tagWND *)0xFFFFFFFFFFFFFFFDLL, 0LL, 0);
                SetOrClrWF(0LL, v7, 3904LL, 1LL);
                SetOrClrWF(1LL, v7, 3968LL, 1LL);
                xxxSetWindowStyle((struct tagWND *)v7);
                v15 = *(_QWORD *)(v7 + 16);
                if ( *(_QWORD *)(v15 + 432) == *(_QWORD *)(v2 + 432) )
                {
                  zzzAttachThreadInput(v2, v15, 0LL);
                  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v26);
                  LockQCursor(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 432LL), gasyscur[1]);
                  if ( v27 && gptiForeground == *(_QWORD *)(v7 + 16) && *(_QWORD *)(v2 + 432) == gpqForeground )
                  {
                    if ( *(_QWORD *)(v2 + 440) != *(_QWORD *)(gptiForeground + 440LL) )
                      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v26);
                    xxxSetForegroundThreadWithWindowHint((struct tagTHREADINFO *)v2, 0LL);
                  }
                  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v26);
                  if ( v28 )
                  {
                    if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
                      xxxSetForegroundWindow2(a1, 0LL, 2LL);
                  }
                }
              }
            }
            v3 = 1;
            goto LABEL_43;
          }
        }
        v28 = 0;
        goto LABEL_21;
      }
      goto LABEL_56;
    }
    v18 = 1400LL;
  }
  else
  {
    v18 = 5LL;
  }
LABEL_57:
  UserSetLastError(v18);
  return 0LL;
}
