/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C010A160
 * Callers:
 *     <none>
 * Callees:
 *     IsProcessedByInputService @ 0x1C00128BC (IsProcessedByInputService.c)
 *     PostShellHookMessagesEx @ 0x1C00435F8 (PostShellHookMessagesEx.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C004F520 (AdjustPwndPtiPqForDelegation.c)
 *     PtiKbdFromQ @ 0x1C004FC28 (PtiKbdFromQ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FC70 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     PostInputMessage @ 0x1C0050880 (PostInputMessage.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C0051608 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     HasHidTable @ 0x1C0052630 (HasHidTable.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C1800 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     xxxNextWindow @ 0x1C01F412C (xxxNextWindow.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        unsigned __int16 a9,
        unsigned __int16 a10,
        struct tagINPUT_MESSAGE_SOURCE *a11,
        unsigned int a12,
        void *a13,
        unsigned __int64 a14,
        unsigned __int16 a15,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a16)
{
  __int64 v17; // rdi
  unsigned int v18; // r14d
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int16 v23; // r12
  int v24; // esi
  char v25; // al
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int16 MouseKeyFlags; // ax
  __int64 v29; // rax
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // rax
  __int128 *v34; // rbx
  __int64 v35; // rax
  __int128 *v36; // r11
  __int64 v37; // rax
  __int128 *v38; // r10
  __int64 v39; // r9
  __int128 *v40; // r8
  __int64 v41; // xmm1_8
  __int128 v42; // xmm0
  __int64 v43; // xmm1_8
  __int128 v44; // xmm0
  __int64 v45; // xmm1_8
  __int128 v46; // xmm0
  __int64 v47; // xmm1_8
  __int128 v48; // xmm0
  __int64 v49; // xmm1_8
  __int128 v50; // xmm0
  __int64 v51; // xmm1_8
  __int128 v52; // xmm0
  __int64 v53; // xmm1_8
  int v54; // [rsp+78h] [rbp-49h] BYREF
  __int128 *v55; // [rsp+80h] [rbp-41h] BYREF
  __int64 v56; // [rsp+88h] [rbp-39h] BYREF
  __int64 v57; // [rsp+90h] [rbp-31h] BYREF
  __int128 v58; // [rsp+98h] [rbp-29h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-19h]
  _BYTE v60[24]; // [rsp+B0h] [rbp-11h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL)
    || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 48LL)
    || a4
    || (gafAsyncKeyState[4] & 0x10) == 0
    || (a5 != 9 || (a6 & 1) != 0) && (a5 != 27 || (a6 & 2) != 0) )
  {
    if ( !gpqForeground )
    {
      if ( !a4 && ((*gpsi & 0x2000) != 0 || (*gpsi & 0x4000) != 0) && (unsigned __int8)(a5 + 83) <= 6u )
        PostShellHookMessagesEx(0xCu, (unsigned __int64)(unsigned __int16)(a5 - 165) << 16, 0LL);
      return 0LL;
    }
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v60, gpqForeground);
    v18 = a5;
    v54 = a5;
    v19 = *(_QWORD *)(gpqForeground + 32LL);
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL))
      || (v20 = PtiKbdFromQ(gpqForeground), !(unsigned int)HasHidTable(v20))
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 832LL) + 100LL) & 0x20) == 0
      || (v22 = PtiKbdFromQ(v21), (unsigned int)HasHidTable(v22))
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 832LL) + 100LL) & 0x400) != 0
      && (unsigned __int8)(a5 + 90) <= 0x11u )
    {
      if ( a5 == 0xE7 && (a8 & 0x1000) != 0 )
      {
        v23 = 0;
        v18 = (a7 << 16) | a5;
        v54 = v18;
      }
      else
      {
        v23 = a7;
      }
      v24 = ((a9 | v23) << 16) | 1;
      if ( v19
        && *(_DWORD *)(v19 + 24) == a15
        && ((a15 - 256) & 0xFFFB) == 0
        && *(_QWORD *)(v19 + 32) == v18
        && !IsProcessedByInputService(v19) )
      {
        if ( *(_WORD *)(v19 + 42) == HIWORD(v24) )
        {
          if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL))
            || (unsigned int)GetKeyboardInputRoutingPolicy() == 1 )
          {
            v25 = IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL));
            CKeyboardProcessor::ForwardInputToISM(a1 != 0, v23, a8, a10, a13, a12, v25 == 0, a14, a16);
          }
          if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL)) )
          {
            *(_QWORD *)(v19 + 40) = (HIWORD(v24) << 16) | (unsigned __int16)(*(_WORD *)(v19 + 40) + 1);
            WakeSomeone(gpqForeground, 0LL, a15, (struct tagQMSG *)v19);
          }
          return 0LL;
        }
        v18 = v54;
      }
      if ( (unsigned __int8)(a5 + 90) > 0x11u )
        goto LABEL_49;
      if ( !a4 && gpqForeground )
      {
        if ( (unsigned __int8)(a5 + 83) <= 2u )
        {
          v26 = *(_QWORD *)(gpqForeground + 112LL);
          if ( v26 || (v26 = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
          {
            v27 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 432LL);
            if ( v27 )
            {
              MouseKeyFlags = GetMouseKeyFlags(v27);
              PostShellHookMessagesEx(0xCu, ((unsigned __int64)(unsigned __int16)(a5 - 165) << 16) | MouseKeyFlags, 0LL);
            }
          }
        }
        else
        {
          PostEventMessageEx(
            *(struct tagTHREADINFO **)(gpqForeground + 96LL),
            gpqForeground,
            0xFu,
            0LL,
            0,
            0LL,
            a5,
            a11);
        }
      }
      if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL))
        || (v29 = PtiKbdFromQ(gpqForeground), !(unsigned int)HasHidTable(v29))
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 832LL) + 100LL) & 0x20) == 0 )
      {
LABEL_49:
        if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL))
          || (unsigned int)GetKeyboardInputRoutingPolicy() == 1 )
        {
          v31 = IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL));
          CKeyboardProcessor::ForwardInputToISM(a1 != 0, v23, a8, a10, a13, a12, v31 == 0, a14, a16);
        }
        if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL)) )
        {
          PostPendingMouseMove(gpqForeground);
          v57 = 0LL;
          v56 = 0LL;
          v55 = (__int128 *)gpqForeground;
          v54 = 0;
          if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                               (__int64 *)&v55,
                               &v57,
                               (struct tagTHREADINFO **)&v56,
                               a15,
                               a11,
                               &v54) )
          {
            v32 = *((_QWORD *)v55 + 15);
            if ( v32 )
              v33 = *(_QWORD *)(v32 + 16);
            else
              v33 = 0LL;
            v34 = (__int128 *)gObjDummyLock;
            if ( v33 )
              v34 = (__int128 *)(v33 + 392);
            v35 = *((_QWORD *)v55 + 11);
            v36 = (__int128 *)gObjDummyLock;
            if ( v35 )
              v36 = (__int128 *)(v35 + 392);
            v37 = *((_QWORD *)v55 + 12);
            v38 = (__int128 *)gObjDummyLock;
            if ( v37 )
              v38 = (__int128 *)(v37 + 392);
            v39 = gObjDummyLock;
            if ( v56 )
              v39 = v56 + 392;
            v40 = (__int128 *)gObjDummyLock;
            if ( v57 )
              v40 = (__int128 *)(v57 + 56);
            v41 = *((_QWORD *)&gpsiLock + 2);
            v58 = gpsiLock;
            v42 = *v40;
            v59 = v41;
            v43 = *((_QWORD *)v40 + 2);
            v58 = v42;
            v44 = *(_OWORD *)v39;
            v59 = v43;
            v45 = *(_QWORD *)(v39 + 16);
            v58 = v44;
            v46 = *v55;
            v59 = v45;
            v47 = *((_QWORD *)v55 + 2);
            v58 = v46;
            v48 = *v38;
            v59 = v47;
            v49 = *((_QWORD *)v38 + 2);
            v58 = v48;
            v50 = *v36;
            v59 = v49;
            v51 = *((_QWORD *)v36 + 2);
            v58 = v50;
            v52 = *v34;
            v59 = v51;
            v53 = *((_QWORD *)v34 + 2);
            v58 = v52;
            v59 = v53;
            PostInputMessage(gpqForeground, 0LL, a15, v18, v24, a12, 0LL, a14, 0, a11, a13, 0LL, v54, v56);
          }
        }
        return 0LL;
      }
    }
    return 1LL;
  }
  v59 = 0LL;
  v58 = 0LL;
  v17 = gpqForeground;
  if ( !gpqForeground )
    v17 = *(_QWORD *)(gptiRit + 432LL);
  ++*(_DWORD *)(v17 + 396);
  PushW32ThreadLock(v17, &v58, UnlockQueue);
  xxxNextWindow(v17, a5);
  PopAndFreeAlwaysW32ThreadLock((__int64)&v58);
  return 0LL;
}
