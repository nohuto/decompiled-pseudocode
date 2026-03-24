/*
 * XREFs of xxxSetShellWindow @ 0x1C00D6C50
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C00D6AA0 (NtUserSetShellWindowEx.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C0032BD4 (_RegisterHotKey.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     xxxGenerateIAMKey @ 0x1C00D6E5C (xxxGenerateIAMKey.c)
 *     CleanupIAMAccess @ 0x1C00D75A0 (CleanupIAMAccess.c)
 *     DwmAsyncShellWindowChange @ 0x1C00EB3DC (DwmAsyncShellWindowChange.c)
 */

__int64 __fastcall xxxSetShellWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rdx
  void *v13; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-58h]
  _QWORD *v16; // [rsp+40h] [rbp-38h] BYREF
  struct tagWND *v17; // [rsp+48h] [rbp-30h]
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp-18h]

  v5 = *(__int64 **)(*((_QWORD *)a1 + 2) + 464LL);
  v18 = 0LL;
  v19 = 0LL;
  if ( v5[21] )
  {
    v6 = 5LL;
LABEL_16:
    UserSetLastError(v6, a2, a3);
    return 0LL;
  }
  v7 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 31) & 0xC0) == 0x40 || *((_QWORD *)a1 + 15) || (*(_BYTE *)(v7 + 24) & 8) != 0 )
  {
    v6 = 87LL;
    goto LABEL_16;
  }
  LODWORD(BugCheckParameter2) = 27;
  RegisterHotKey(a1, 0LL, 61744LL, 2, BugCheckParameter2);
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  if ( v8 && (!v5[22] || (*(_DWORD *)(v8 + 820) & 0x30) == 0x20) )
    v5[22] = v8;
  v9 = *v5;
  v10 = *((_QWORD *)a1 + 6);
  v16 = v5 + 21;
  v17 = a1;
  *(_QWORD *)(v9 + 24) = v10;
  HMAssignmentLock(&v16);
  v17 = (struct tagWND *)a2;
  v16 = v5 + 23;
  HMAssignmentLock(&v16);
  PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 456LL), &v18, UserDereferenceObject);
  v11 = *(void **)(gptiCurrent + 456LL);
  if ( v11 )
  {
    ObfReferenceObject(v11);
    v11 = *(void **)(gptiCurrent + 456LL);
  }
  CleanupIAMAccess((struct tagDESKTOP *)v11);
  xxxGenerateIAMKey(*(_QWORD *)(gptiCurrent + 456LL));
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v13 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL), v12);
    DwmAsyncShellWindowChange(v13);
  }
  SetOrClrWF(1, (__int64)a1, 0x420u, 1);
  xxxSetWindowPos(a1, 1LL, 0LL, 0LL, 0, 0, 19);
  PopAndFreeW32ThreadLock((__int64)&v18);
  return 1LL;
}
