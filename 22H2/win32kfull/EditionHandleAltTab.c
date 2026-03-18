/*
 * XREFs of EditionHandleAltTab @ 0x1C00BDAD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     SetNewForegroundQueue @ 0x1C005DEB0 (SetNewForegroundQueue.c)
 *     PtiKbdFromQ @ 0x1C0060CFC (PtiKbdFromQ.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C0060D1C (AdjustPwndPtiPqForDelegation.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     PostInputMessage @ 0x1C0117268 (PostInputMessage.c)
 *     HasHidTable @ 0x1C01184A0 (HasHidTable.c)
 *     xxxCancelCoolSwitch @ 0x1C01537A2 (xxxCancelCoolSwitch.c)
 */

__int64 __fastcall EditionHandleAltTab(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct tagINPUT_MESSAGE_SOURCE *a6,
        void *a7,
        unsigned __int16 a8)
{
  __int64 result; // rax
  int v9; // r14d
  int v11; // r15d
  __int64 v12; // rax
  const struct tagWND *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // [rsp+88h] [rbp-19h] BYREF
  __int64 v19; // [rsp+90h] [rbp-11h] BYREF
  __int64 v20; // [rsp+98h] [rbp-9h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v22; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+17h]

  result = 0LL;
  v9 = a3;
  v11 = a2;
  v22 = 0LL;
  v23 = 0LL;
  if ( gspwndAltTab )
  {
    if ( gpqForeground )
    {
      v12 = PtiKbdFromQ(gpqForeground);
      if ( !(unsigned int)HasHidTable(v12)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 848LL) + 100LL) & 0x20) == 0 )
      {
        *(_DWORD *)(gpqForeground + 396LL) |= 0x80u;
        v20 = 0LL;
        v19 = 0LL;
        v18 = 0LL;
        v21 = gpqForeground;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                             &v21,
                             &v20,
                             (struct tagTHREADINFO **)&v19,
                             a8,
                             a6,
                             (_DWORD *)&v18 + 1,
                             (int *)&v18) )
          PostInputMessage(
            gpqForeground,
            0LL,
            a8,
            ((v9 | v11) << 16) | 1,
            a4,
            0LL,
            a5,
            0,
            a6,
            a7,
            0LL,
            SHIDWORD(v18),
            v18,
            v19);
      }
    }
    result = xxxCancelCoolSwitch();
    v14 = gspwndActivate;
    if ( gspwndActivate )
    {
      if ( gpqForeground == *(_QWORD *)(*(_QWORD *)(gspwndActivate + 16LL) + 432LL) )
        SetNewForegroundQueue(0LL, v13);
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v14 + 16), 0);
      ThreadLockAlways(v14, &v22);
      xxxSetForegroundWindow2(v14, 0LL, 0x12u);
      if ( (*(_BYTE *)(*(_QWORD *)(v14 + 40) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos((struct tagWND *)v14, 0LL, 0LL, 0LL, 0, 0, 16387);
      ThreadUnlock1(v16, v15, v17);
      return HMAssignmentUnlock(&gspwndActivate);
    }
  }
  return result;
}
