/*
 * XREFs of NtUserGetClipboardAccessToken @ 0x1C01D1260
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserGetClipboardAccessToken(_QWORD *a1, __int64 a2, __int64 a3)
{
  ACCESS_MASK v3; // esi
  _QWORD *v4; // rdi
  int v5; // ebx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rcx
  ULONG64 v9; // rcx
  void *v10; // rcx
  int v12; // [rsp+80h] [rbp+18h] BYREF
  int v13; // [rsp+84h] [rbp+1Ch]
  void *Handle; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  v12 = 0x2000;
  v13 = -1;
  v5 = 0;
  Handle = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v7 = PtiCurrentShared(v6);
  if ( (unsigned __int8)CheckAccess(*((_QWORD *)v7 + 53) + 864LL, &v12)
    && (v10 = *(void **)(*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v8) + 57) + 40LL) + 160LL)) != 0LL )
  {
    LOBYTE(v5) = ObOpenObjectByPointer(v10, 0, 0LL, v3, (POBJECT_TYPE)SeTokenObjectType, 1, &Handle) >= 0;
    v9 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_QWORD *)MmUserProbeAddress;
    *v4 = Handle;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v5;
}
