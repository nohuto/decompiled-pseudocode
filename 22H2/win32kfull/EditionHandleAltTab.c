/*
 * XREFs of EditionHandleAltTab @ 0x1C0131C10
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D1EC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     SetNewForegroundQueue @ 0x1C003DB70 (SetNewForegroundQueue.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C004F480 (AdjustPwndPtiPqForDelegation.c)
 *     PtiKbdFromQ @ 0x1C004FB88 (PtiKbdFromQ.c)
 *     PostInputMessage @ 0x1C00507E0 (PostInputMessage.c)
 *     HasHidTable @ 0x1C0052590 (HasHidTable.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxCancelCoolSwitch @ 0x1C0125A64 (xxxCancelCoolSwitch.c)
 */

_UNKNOWN **__fastcall EditionHandleAltTab(
        unsigned __int8 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct tagINPUT_MESSAGE_SOURCE *a6,
        void *a7,
        unsigned __int16 a8)
{
  _UNKNOWN **result; // rax
  int v9; // r15d
  int v11; // r12d
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 *v15; // rbx
  __int64 v16; // rax
  __int128 *v17; // r11
  __int64 v18; // rax
  __int128 *v19; // r10
  __int64 v20; // r9
  __int128 *v21; // rdx
  __int64 v22; // xmm1_8
  __int128 v23; // xmm0
  __int64 v24; // xmm1_8
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  __int128 v27; // xmm0
  __int64 v28; // xmm1_8
  __int128 v29; // xmm0
  __int64 v30; // xmm1_8
  __int128 v31; // xmm0
  __int64 v32; // xmm1_8
  __int128 v33; // xmm0
  __int64 v34; // xmm1_8
  struct tagWND *v35; // rbx
  __int64 v36; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v38; // rcx
  int v39; // [rsp+78h] [rbp-39h] BYREF
  __int128 *v40; // [rsp+80h] [rbp-31h] BYREF
  __int64 v41; // [rsp+88h] [rbp-29h] BYREF
  __int64 v42; // [rsp+90h] [rbp-21h] BYREF
  _QWORD v43[3]; // [rsp+98h] [rbp-19h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-1h]
  __int64 v45; // [rsp+C0h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+3Fh] BYREF

  result = &retaddr;
  v9 = a3;
  v11 = a2;
  v12 = a1;
  v43[2] = 0LL;
  if ( gspwndAltTab )
  {
    if ( gpqForeground )
    {
      v13 = PtiKbdFromQ(gpqForeground);
      if ( !(unsigned int)HasHidTable(v13)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 832LL) + 100LL) & 0x20) == 0 )
      {
        *(_DWORD *)(gpqForeground + 388LL) |= 0x80u;
        v40 = (__int128 *)gpqForeground;
        v42 = 0LL;
        v41 = 0LL;
        v39 = 0;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                             (__int64 *)&v40,
                             &v42,
                             (struct tagTHREADINFO **)&v41,
                             a8,
                             a6,
                             &v39) )
        {
          v14 = *((_QWORD *)v40 + 15);
          if ( v14 )
            v14 = *(_QWORD *)(v14 + 16);
          v15 = (__int128 *)gObjDummyLock;
          if ( v14 )
            v15 = (__int128 *)(v14 + 392);
          v16 = *((_QWORD *)v40 + 11);
          v17 = (__int128 *)gObjDummyLock;
          if ( v16 )
            v17 = (__int128 *)(v16 + 392);
          v18 = *((_QWORD *)v40 + 12);
          v19 = (__int128 *)gObjDummyLock;
          if ( v18 )
            v19 = (__int128 *)(v18 + 392);
          v20 = gObjDummyLock;
          if ( v41 )
            v20 = v41 + 392;
          v21 = (__int128 *)gObjDummyLock;
          if ( v42 )
            v21 = (__int128 *)(v42 + 56);
          v22 = *((_QWORD *)&gpsiLock + 2);
          v44 = gpsiLock;
          v23 = *v21;
          v45 = v22;
          v24 = *((_QWORD *)v21 + 2);
          v44 = v23;
          v25 = *(_OWORD *)v20;
          v45 = v24;
          v26 = *(_QWORD *)(v20 + 16);
          v44 = v25;
          v27 = *v40;
          v45 = v26;
          v28 = *((_QWORD *)v40 + 2);
          v44 = v27;
          v29 = *v19;
          v45 = v28;
          v30 = *((_QWORD *)v19 + 2);
          v44 = v29;
          v31 = *v17;
          v45 = v30;
          v32 = *((_QWORD *)v17 + 2);
          v44 = v31;
          v33 = *v15;
          v45 = v32;
          v34 = *((_QWORD *)v15 + 2);
          v44 = v33;
          v45 = v34;
          PostInputMessage(gpqForeground, 0LL, a8, v12, ((v9 | v11) << 16) | 1, a4, 0LL, a5, 0, a6, a7, 0LL, v39, v41);
        }
      }
    }
    result = (_UNKNOWN **)xxxCancelCoolSwitch();
    v35 = gspwndActivate;
    if ( gspwndActivate )
    {
      v36 = *((_QWORD *)gspwndActivate + 2);
      if ( gpqForeground == *(_QWORD *)(v36 + 432) )
      {
        SetNewForegroundQueue(0LL);
        v36 = *((_QWORD *)v35 + 2);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v36, 0);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v43[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v43;
      v43[1] = v35;
      HMLockObject(v35);
      xxxSetForegroundWindow2((__int64)v35, 0LL, 18);
      if ( (*(_BYTE *)(*((_QWORD *)v35 + 5) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos(v35, 0LL, 0LL, 0LL, 0, 0, 16387);
      ThreadUnlock1(v38);
      return (_UNKNOWN **)HMAssignmentUnlock(&gspwndActivate);
    }
  }
  return result;
}
