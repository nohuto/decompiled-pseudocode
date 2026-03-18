/*
 * XREFs of NtUserGetClipboardAccessToken @ 0x1C01F3A70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClipboardAccessToken(_QWORD *a1, __int64 a2, __int64 a3)
{
  ACCESS_MASK v3; // esi
  _QWORD *v4; // rdi
  int v5; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  void *v9; // rcx
  int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+84h] [rbp+1Ch]
  void *Handle; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  v11 = 0x2000;
  v12 = -1;
  v5 = 0;
  Handle = 0LL;
  EnterSharedCrit(a1, a2, a3);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int8)CheckAccess(*(_QWORD *)(ThreadWin32Thread + 424) + 880LL, &v11)
    && (v9 = *(void **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 40LL)
                      + 160LL)) != 0LL )
  {
    LOBYTE(v5) = ObOpenObjectByPointer(v9, 0, 0LL, v3, (POBJECT_TYPE)SeTokenObjectType, 1, &Handle) >= 0;
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_QWORD *)MmUserProbeAddress;
    *v4 = Handle;
  }
  else
  {
    UserSetLastError(5LL, v7);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
