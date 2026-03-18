/*
 * XREFs of NtUserRemoteRedrawScreen @ 0x1C01D9C20
 * Callers:
 *     <none>
 * Callees:
 *     RemoteRedrawScreen @ 0x1C01334E0 (RemoteRedrawScreen.c)
 */

__int64 NtUserRemoteRedrawScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned int v8; // ebx

  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2);
  v7 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( gnShadowers || gbConnected )
      v8 = RemoteRedrawScreen(gpepCSRSS, v4, v5);
    else
      v8 = -1073741823;
  }
  else
  {
    v8 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v7, v4, v5, v6);
  return v8;
}
