/*
 * XREFs of NtUserRemoteRedrawRectangle @ 0x1C01DABB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     RemoteRedrawRectangle @ 0x1C01F6C78 (RemoteRedrawRectangle.c)
 */

__int64 __fastcall NtUserRemoteRedrawRectangle(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF

  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10);
  v12 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    *(_QWORD *)&v15 = __PAIR64__(a2, a1);
    *((_QWORD *)&v15 + 1) = __PAIR64__(a4, a3);
    RemoteRedrawRectangle(&v15);
    v13 = 0;
  }
  else
  {
    v13 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v12);
  return v13;
}
