/*
 * XREFs of NtUserGetKeyboardState @ 0x1C0005FB0
 * Callers:
 *     <none>
 * Callees:
 *     IsKeyStateCached @ 0x1C0006760 (IsKeyStateCached.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x1C0006800 (ApiSetEditionIsGetKeyStateBlocked.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C00068D4 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C0035E30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     EtwTraceUIPIInputError @ 0x1C004B150 (EtwTraceUIPIInputError.c)
 */

__int64 __fastcall NtUserGetKeyboardState(ULONG64 a1)
{
  struct tagTHREADINFO *ThreadWin32Thread; // rdi
  bool v2; // r14
  _BYTE *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r12
  unsigned __int8 v6; // si
  int v7; // r15d
  _BYTE *v8; // rdi
  int v9; // r11d
  unsigned __int64 v10; // r9
  unsigned __int8 v11; // r10
  char v12; // r8

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread());
  v2 = (unsigned int)ApiSetEditionIsGetKeyStateBlocked() == 0;
  if ( v2 && !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
  {
    EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, 3);
    v2 = 0;
  }
  v3 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (_BYTE *)MmUserProbeAddress;
  *v3 = *v3;
  v3[255] = v3[255];
  v5 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432);
  v6 = 0;
  v7 = 0;
  v8 = (_BYTE *)a1;
  while ( v7 < 256 )
  {
    *v8 = 0;
    if ( v2 || (LOBYTE(v4) = v6, (unsigned __int8)IsKeyStateCached(v4)) )
    {
      v9 = v6 & 3;
      v10 = (unsigned __int64)v6 >> 2;
      v11 = *(_BYTE *)(v10 + v5 + 228);
      v12 = 0;
      if ( ((unsigned __int8)(1 << (2 * v9)) & v11) != 0 )
      {
        *v8 = 0x80;
        v12 = 0x80;
        v11 = *(_BYTE *)(v10 + v5 + 228);
      }
      v4 = (unsigned int)(2 * v9 + 1);
      if ( ((unsigned __int8)(1 << (2 * v9 + 1)) & v11) != 0 )
        *v8 = v12 | 1;
    }
    v6 = v7 + 1;
    ++v8;
    ++v7;
  }
  UserSessionSwitchLeaveCrit(v4);
  return 1LL;
}
