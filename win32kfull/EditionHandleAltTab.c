__int64 __fastcall EditionHandleAltTab(
        unsigned __int8 a1,
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
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  const struct tagWND *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // [rsp+88h] [rbp-19h] BYREF
  __int64 v20; // [rsp+90h] [rbp-11h] BYREF
  __int64 v21; // [rsp+98h] [rbp-9h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v23; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+17h]

  result = 0LL;
  v9 = a3;
  v11 = a2;
  v12 = a1;
  v23 = 0LL;
  v24 = 0LL;
  if ( gspwndAltTab )
  {
    if ( gpqForeground )
    {
      v13 = PtiKbdFromQ(gpqForeground);
      if ( !(unsigned int)HasHidTable(v13)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 824LL) + 100LL) & 0x20) == 0 )
      {
        *(_DWORD *)(gpqForeground + 396LL) |= 0x80u;
        v21 = 0LL;
        v20 = 0LL;
        v19 = 0LL;
        v22 = gpqForeground;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                             &v22,
                             &v21,
                             (struct tagTHREADINFO **)&v20,
                             a8,
                             a6,
                             (_DWORD *)&v19 + 1,
                             (int *)&v19) )
          PostInputMessage(
            gpqForeground,
            0LL,
            a8,
            v12,
            ((v9 | v11) << 16) | 1,
            a4,
            0LL,
            a5,
            0,
            a6,
            a7,
            0LL,
            SHIDWORD(v19),
            v19,
            v20);
      }
    }
    result = xxxCancelCoolSwitch();
    v15 = gspwndActivate;
    if ( gspwndActivate )
    {
      if ( gpqForeground == *(_QWORD *)(*(_QWORD *)(gspwndActivate + 16LL) + 432LL) )
        SetNewForegroundQueue(0LL, v14);
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v15 + 16), 0);
      ThreadLockAlways(v15, &v23);
      xxxSetForegroundWindow2(v15, 0LL, 0x12u);
      if ( (*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos((struct tagWND *)v15, 0LL, 0LL, 0LL, 0, 0, 16387);
      ThreadUnlock1(v17, v16, v18);
      return HMAssignmentUnlock(&gspwndActivate);
    }
  }
  return result;
}
