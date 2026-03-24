/*
 * XREFs of NtUserGetClipboardAccessToken @ 0x1C01F8BD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClipboardAccessToken(_QWORD *a1, ACCESS_MASK a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  ULONG64 v7; // rcx
  void *v8; // rcx
  int v10; // [rsp+80h] [rbp+18h] BYREF
  int v11; // [rsp+84h] [rbp+1Ch]
  void *Handle; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0x2000;
  v11 = -1;
  v4 = 0;
  Handle = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, &v10)
    && (v8 = *(void **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL) + 160LL)) != 0LL )
  {
    LOBYTE(v4) = ObOpenObjectByPointer(v8, 0, 0LL, a2, (POBJECT_TYPE)SeTokenObjectType, 1, &Handle) >= 0;
    v7 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = Handle;
  }
  else
  {
    UserSetLastError(5LL, v5, v6);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
