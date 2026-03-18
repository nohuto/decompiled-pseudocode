/*
 * XREFs of xxxSetShellWindow @ 0x1C00F1340
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C00F1190 (NtUserSetShellWindowEx.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _RegisterHotKey @ 0x1C009E114 (_RegisterHotKey.c)
 *     DwmAsyncShellWindowChange @ 0x1C00F150C (DwmAsyncShellWindowChange.c)
 *     xxxGenerateIAMKey @ 0x1C00F159C (xxxGenerateIAMKey.c)
 *     CleanupIAMAccess @ 0x1C00F1920 (CleanupIAMAccess.c)
 */

__int64 __fastcall xxxSetShellWindow(struct tagWND *a1, __int64 a2)
{
  _QWORD *v4; // rsi
  struct tagWND **v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // rax
  __int64 v12; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-38h]
  _QWORD *v14; // [rsp+40h] [rbp-18h] BYREF
  struct tagWND *v15; // [rsp+48h] [rbp-10h]

  v4 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 464LL);
  v5 = (struct tagWND **)(v4 + 21);
  if ( v4[21] )
  {
    v12 = 5LL;
LABEL_17:
    UserSetLastError(v12, a2);
    return 0LL;
  }
  v6 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 || *((_QWORD *)a1 + 15) || (*(_BYTE *)(v6 + 24) & 8) != 0 )
  {
    v12 = 87LL;
    goto LABEL_17;
  }
  LODWORD(BugCheckParameter2) = 27;
  RegisterHotKey(a1, 0LL, 61744, 2, BugCheckParameter2);
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  if ( v7 && (!v4[22] || (*(_DWORD *)(v7 + 820) & 0x30) == 0x20) )
  {
    v4[22] = v7;
    if ( grpdeskRitInput )
    {
      if ( v4 == *(_QWORD **)(grpdeskRitInput + 8LL) )
        SynchronizeContext();
    }
  }
  v8 = *v4;
  v9 = *((_QWORD *)a1 + 6);
  v14 = v4 + 21;
  v15 = a1;
  *(_QWORD *)(v8 + 24) = v9;
  HMAssignmentLock(&v14, 0LL);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 456LL));
  xxxGenerateIAMKey(*(_QWORD *)(gptiCurrent + 456LL));
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v10 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
    DwmAsyncShellWindowChange(v10);
  }
  v15 = (struct tagWND *)a2;
  v14 = v4 + 23;
  HMAssignmentLock(&v14, 0LL);
  SetOrClrWF(1, *v5, 0x420u, 1);
  xxxSetWindowPos(*v5, 1LL, 0LL, 0LL, 0, 0, 19);
  return 1LL;
}
