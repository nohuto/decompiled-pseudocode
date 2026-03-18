/*
 * XREFs of xxxCloseClipboard @ 0x1C00CCFD0
 * Callers:
 *     NtUserCloseClipboard @ 0x1C00CCF00 (NtUserCloseClipboard.c)
 *     FreeWindowStation @ 0x1C011E7C0 (FreeWindowStation.c)
 *     xxxSnapWindow @ 0x1C023F848 (xxxSnapWindow.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00CD83C (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0145C84 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014664C (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxCloseClipboard(struct tagWINDOWSTATION *a1, __int64 a2)
{
  struct tagWINDOWSTATION *v2; // rbx
  PACCESS_TOKEN v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v2 = a1;
  v8 = 0LL;
  if ( !a1 )
  {
    v2 = CheckClipboardAccess();
    if ( !v2 )
      return 0LL;
  }
  if ( *((_QWORD *)v2 + 10) != gptiCurrent )
  {
    UserSetLastError(1418LL, a2);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v2, &v8, UserDereferenceObject);
  ObfReferenceObject(v2);
  if ( (*((_DWORD *)v2 + 16) & 0x40) != 0 )
  {
    MungeClipData(v2);
    CloseClipboardToken(v2);
    if ( *((_DWORD *)v2 + 34) )
    {
      ImpersonationLevel = SecurityAnonymous;
      CopyOnOpen = 0;
      EffectiveOnly = 0;
      v4 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      if ( v4 )
      {
        *((_DWORD *)v2 + 16) |= 0x400u;
      }
      else
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v6, v5);
        v4 = PsReferencePrimaryToken(CurrentProcess);
      }
      *((_QWORD *)v2 + 20) = v4;
    }
  }
  HMAssignmentUnlock((char *)v2 + 96);
  *((_QWORD *)v2 + 10) = 0LL;
  if ( (*((_DWORD *)v2 + 16) & 0x40) != 0 )
    xxxDrawClipboard(v2);
  PopAndFreeW32ThreadLock((__int64)&v8);
  return 1LL;
}
