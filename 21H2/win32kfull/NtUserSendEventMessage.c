/*
 * XREFs of NtUserSendEventMessage @ 0x1C0003B50
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall NtUserSendEventMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  int v9; // edi
  struct tagTHREADINFO **v10; // rsi
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h]

  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  v10 = (struct tagTHREADINFO **)v8;
  if ( v8 && (((*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v8;
    HMLockObject(v8);
    if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
      v9 = PostEventMessageEx(v10[2], *((struct tagQ **)v10[2] + 54), 9u, (struct tagWND *)v10, a2, a3, a4, 0LL);
    else
      UserSetLastError(5LL);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v9;
}
