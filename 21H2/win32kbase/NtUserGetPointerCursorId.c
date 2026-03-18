/*
 * XREFs of NtUserGetPointerCursorId @ 0x1C0159D40
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C01C93E4 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(unsigned int a1, _DWORD *a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  CTouchProcessor *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG64 v9; // rdx
  ULONG64 v10; // rcx
  int PointerCursorId; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0;
  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  if ( a1 && (v7 = HIWORD(a1), !HIWORD(a1)) && a2 )
  {
    PointerCursorId = CTouchProcessor::GetPointerCursorId(v6, v4, a1, &v15);
    if ( PointerCursorId )
    {
      v10 = MmUserProbeAddress;
      v9 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v15;
    }
  }
  else
  {
    PointerCursorId = 0;
    UserSetLastError(87LL, v5, v7, v8);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v12, v13);
  return PointerCursorId;
}
