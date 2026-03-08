/*
 * XREFs of xxxCloseClipboard @ 0x1C0010580
 * Callers:
 *     NtUserCloseClipboard @ 0x1C0010170 (NtUserCloseClipboard.c)
 *     FreeWindowStation @ 0x1C00F1160 (FreeWindowStation.c)
 *     xxxSnapWindow @ 0x1C022AF08 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00BD7B8 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00F13DC (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FEEDC (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FF92C (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxCloseClipboard(struct tagWINDOWSTATION *a1)
{
  struct tagWINDOWSTATION *v1; // rbx
  PACCESS_TOKEN v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KPROCESS *CurrentProcess; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v1 = a1;
  v8 = 0LL;
  if ( !a1 )
  {
    v1 = CheckClipboardAccess();
    if ( !v1 )
      return 0LL;
  }
  if ( *((_QWORD *)v1 + 10) != gptiCurrent )
  {
    UserSetLastError(1418LL);
    return 0LL;
  }
  PushW32ThreadLock(v1, &v8, UserDereferenceObject);
  ObfReferenceObject(v1);
  if ( (*((_DWORD *)v1 + 16) & 0x40) != 0 )
  {
    MungeClipData(v1);
    CloseClipboardToken(v1);
    if ( *((_DWORD *)v1 + 34) )
    {
      ImpersonationLevel = SecurityAnonymous;
      CopyOnOpen = 0;
      EffectiveOnly = 0;
      v3 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      if ( v3 )
      {
        *((_DWORD *)v1 + 16) |= 0x400u;
      }
      else
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v5, v4, v6);
        v3 = PsReferencePrimaryToken(CurrentProcess);
      }
      *((_QWORD *)v1 + 20) = v3;
    }
  }
  HMAssignmentUnlock((char *)v1 + 96);
  *((_QWORD *)v1 + 10) = 0LL;
  if ( (*((_DWORD *)v1 + 16) & 0x40) != 0 )
    xxxDrawClipboard(v1);
  PopAndFreeW32ThreadLock(&v8);
  return 1LL;
}
