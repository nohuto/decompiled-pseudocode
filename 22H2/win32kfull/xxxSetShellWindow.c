/*
 * XREFs of xxxSetShellWindow @ 0x1C003ABAC
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C003A9D0 (NtUserSetShellWindowEx.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     xxxGenerateIAMKey @ 0x1C003ADBC (xxxGenerateIAMKey.c)
 *     CleanupIAMAccess @ 0x1C003AE10 (CleanupIAMAccess.c)
 *     DwmAsyncShellWindowChange @ 0x1C005971C (DwmAsyncShellWindowChange.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

__int64 __fastcall xxxSetShellWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // r8
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rcx
  void *v12; // rax
  _QWORD *v14; // [rsp+40h] [rbp-38h] BYREF
  struct tagWND *v15; // [rsp+48h] [rbp-30h]
  __int128 v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-18h]

  v2 = *((_QWORD *)a1 + 2);
  v5 = *(__int64 **)(v2 + 464);
  v16 = 0LL;
  v17 = 0LL;
  if ( v5[21] )
  {
    v6 = 5LL;
LABEL_18:
    UserSetLastError(v6);
    return 0LL;
  }
  v7 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 31) & 0xC0) == 0x40 || *((_QWORD *)a1 + 15) || (*(_BYTE *)(v7 + 24) & 8) != 0 )
  {
    v6 = 87LL;
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(v2 + 424);
  if ( v8 && (!v5[22] || (*(_DWORD *)(v8 + 816) & 0x30) == 0x20) )
  {
    v5[22] = v8;
    if ( grpdeskRitInput )
    {
      if ( v5 == *(__int64 **)(grpdeskRitInput + 8LL) )
        SynchronizeContext();
    }
  }
  v9 = *v5;
  v10 = *((_QWORD *)a1 + 6);
  v14 = v5 + 21;
  v15 = a1;
  *(_QWORD *)(v9 + 24) = v10;
  HMAssignmentLock(&v14, 0LL);
  v15 = a2;
  v14 = v5 + 23;
  HMAssignmentLock(&v14, 0LL);
  PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 456LL), &v16, UserDereferenceObject);
  v11 = *(void **)(gptiCurrent + 456LL);
  if ( v11 )
    ObfReferenceObject(v11);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 456LL));
  xxxGenerateIAMKey(*(_QWORD *)(gptiCurrent + 456LL));
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v12 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
    DwmAsyncShellWindowChange(v12);
  }
  SetOrClrWF(1LL, a1, 1056LL, 1LL);
  xxxSetWindowPos(a1, 1LL, 0LL, 0LL, 0, 0, 19);
  PopAndFreeW32ThreadLock(&v16);
  return 1LL;
}
