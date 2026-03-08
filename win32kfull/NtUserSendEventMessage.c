/*
 * XREFs of NtUserSendEventMessage @ 0x1C0014350
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 */

__int64 __fastcall NtUserSendEventMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edi
  struct tagTHREADINFO **v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  v10 = 0;
  v11 = (struct tagTHREADINFO **)v8;
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( (((*(_WORD *)(v9 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v16;
      *((_QWORD *)&v16 + 1) = v8;
      HMLockObject(v8);
      if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
        v10 = PostEventMessageEx(v11[2], *((struct tagQ **)v11[2] + 54), 9u, (struct tagWND *)v11, a2, a3, a4, 0LL);
      else
        UserSetLastError(5LL);
      ThreadUnlock1(v13, v12, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
