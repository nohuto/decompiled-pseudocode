/*
 * XREFs of NtUserRemoteRedrawRectangle @ 0x1C01D9B80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     RemoteRedrawRectangle @ 0x1C01F5AA8 (RemoteRedrawRectangle.c)
 */

__int64 __fastcall NtUserRemoteRedrawRectangle(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF

  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10);
  v15 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    *(_QWORD *)&v18 = __PAIR64__(a2, a1);
    *((_QWORD *)&v18 + 1) = __PAIR64__(a4, a3);
    RemoteRedrawRectangle(&v18);
    v16 = 0;
  }
  else
  {
    v16 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v15, v12, v13, v14);
  return v16;
}
