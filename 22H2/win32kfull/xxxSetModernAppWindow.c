/*
 * XREFs of xxxSetModernAppWindow @ 0x1C00058B0
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C007BEF0 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000798C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     zzzAttachThreadInput @ 0x1C00115F8 (zzzAttachThreadInput.c)
 *     LockQCursor @ 0x1C00128F0 (LockQCursor.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0034B54 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D1EC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C00402D0 (xxxSendNotifyMessage.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     xxxSetWindowStyle @ 0x1C005E140 (xxxSetWindowStyle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0125E1C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     VerifyChildMenu @ 0x1C0169704 (VerifyChildMenu.c)
 */

__int64 __fastcall xxxSetModernAppWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // edi
  __int64 v5; // rsi
  __int64 v6; // r14
  struct tagWND *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  _BYTE v20[16]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v22[3]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v23[3]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v24[10]; // [rsp+80h] [rbp+7h] BYREF
  int v25; // [rsp+E0h] [rbp+67h]
  int v26; // [rsp+F0h] [rbp+77h]
  char v27; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v25 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(v2 + 1400);
  v23[2] = 0LL;
  v24[2] = 0LL;
  v22[2] = 0LL;
  if ( (*(_DWORD *)(v2 + 1232) & 0x40000) == 0 )
    goto LABEL_58;
  v7 = *(struct tagWND **)(v2 + 1392);
  if ( !v7 || v7 != a1 )
    goto LABEL_58;
  if ( v2 == gptiCurrent )
  {
    if ( a2 )
    {
      v9 = ValidateHwnd(a2);
      v5 = v9;
      if ( !v9
        || (struct tagWND *)v9 == a1
        || *(struct tagWND **)(v9 + 104) == a1
        || v9 == *(_QWORD *)(v2 + 1400)
        || *(_QWORD *)(v9 + 16) == v2 )
      {
        v8 = 1400LL;
        goto LABEL_59;
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
        v25 = 1;
      }
      else if ( gpqForeground != *(_QWORD *)(v2 + 432) )
      {
        v26 = 1;
        if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
        {
LABEL_26:
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v22[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v22;
          v22[1] = v5;
          if ( v5 )
            HMLockObject(v5);
          v13 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v23[0] = *(_QWORD *)(v13 + 416);
          *(_QWORD *)(v13 + 416) = v23;
          v23[1] = v6;
          if ( v6 )
            HMLockObject(v6);
          v14 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v24[0] = *(_QWORD *)(v14 + 416);
          *(_QWORD *)(v14 + 416) = v24;
          v24[1] = a1;
          HMLockObject(a1);
          v21[0] = v2 + 1400;
          v21[1] = v5;
          HMAssignmentLock(v21);
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v27);
          if ( v6 )
          {
            v15 = *(_QWORD *)(v2 + 432);
            if ( *(struct tagWND **)(v15 + 120) == a1 )
            {
              xxxSendNotifyMessage(
                v6,
                841LL,
                (unsigned __int64)(*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) << 16,
                0LL,
                0);
              v15 = *(_QWORD *)(v2 + 432);
            }
            if ( *(_QWORD *)(v15 + 112) == v6 )
            {
              xxxSendNotifyMessage(v6, 8LL, 0LL, 0LL, 0);
              HMAssignmentUnlock(*(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) + 112LL);
            }
          }
          if ( v5 )
          {
            v16 = *(_QWORD *)(v5 + 16);
            if ( *(_QWORD *)(*(_QWORD *)(v16 + 432) + 120LL) == v5 )
            {
              xxxSendNotifyMessage(
                v5,
                841LL,
                (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) << 16,
                0LL,
                0);
              HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 432LL) + 120LL);
              v16 = *(_QWORD *)(v5 + 16);
            }
            if ( *(_QWORD *)(*(_QWORD *)(v16 + 432) + 112LL) == v5 )
            {
              xxxSendNotifyMessage(v5, 8LL, 0LL, 0LL, 0);
              HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 432LL) + 112LL);
            }
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v27);
          if ( v5 )
          {
            SetOrClrWF(0LL, v5, 3968LL, 1LL);
            SetOrClrWF(1LL, v5, 3904LL, 1LL);
            VerifyChildMenu((struct tagWND *)v5);
            xxxSetWindowStyle((struct tagWND *)v5);
            xxxSetParentWorker((struct tagWND *)v5, a1, (struct tagWND *)v6, 0);
            if ( *(struct tagWND **)(v5 + 104) != a1
              || (v17 = *(_QWORD *)(v2 + 432), *(_QWORD *)(*(_QWORD *)(v5 + 16) + 432LL) != v17) )
            {
LABEL_57:
              ThreadUnlock1();
              ThreadUnlock1();
              ThreadUnlock1();
              return v3;
            }
            if ( *(_QWORD *)(v2 + 1400) == v5 && *(struct tagWND **)(v17 + 120) == a1 )
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
              VerifyChildMenu((struct tagWND *)v6);
              xxxSetWindowStyle((struct tagWND *)v6);
              v18 = *(_QWORD *)(v6 + 16);
              if ( *(_QWORD *)(v18 + 432) == *(_QWORD *)(v2 + 432) )
              {
                zzzAttachThreadInput(v2, v18, 0LL);
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
                LockQCursor(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 432LL), gasyscur[1]);
                if ( v25 && gptiForeground == *(_QWORD *)(v6 + 16) && *(_QWORD *)(v2 + 432) == gpqForeground )
                  xxxSetForegroundThreadWithWindowHint((struct tagTHREADINFO *)v2, 0LL);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
                if ( v26 )
                {
                  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
                    xxxSetForegroundWindow2(a1, 0LL, 2LL);
                }
              }
            }
          }
          v3 = 1;
          goto LABEL_57;
        }
      }
      v26 = 0;
      goto LABEL_26;
    }
    if ( *(_QWORD *)(v6 + 16) != v2 )
    {
      if ( *(struct tagWND **)(v6 + 104) != a1 )
        v6 = 0LL;
      goto LABEL_17;
    }
LABEL_58:
    v8 = 87LL;
    goto LABEL_59;
  }
  v8 = 5LL;
LABEL_59:
  UserSetLastError(v8);
  return 0LL;
}
